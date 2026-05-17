//---------------------------------------------------------------------------
// SMA Perfect Order BUY Signal Indicator for ForexTester 6
//
// Article: traders-rx.com #01 GBPUSD H4 SMA Perfect Order
// URL:     https://traders-rx.com/gbpusd-h4-perfect-order/
//
// Draws:
//   - SMA(20)  in red   (#ff5252) -- matches the article's chart
//   - SMA(50)  in blue  (#42a5f5)
//   - SMA(200) in green (#9ccc65)
//   - Green up-arrow on the bar where SMA20 > SMA50 > SMA200 first becomes
//     true (edge-trigger). The arrow appears only on the transition bar.
//
// Intended chart: GBPUSD, H4 (other symbols/TFs work but the article's
// backtested edge is specific to GBPUSD H4).
//---------------------------------------------------------------------------

#include <windows.h>
#include "IndicatorInterfaceUnit.h"
#include "TechnicalFunctions.h"

static const int PERIOD_FAST = 20;
static const int PERIOD_MID  = 50;
static const int PERIOD_SLOW = 200;

TIndexBuffer Sma20, Sma50, Sma200, BuyArrows;

extern "C" {

EXPORT void __stdcall Init()
{
    IndicatorShortName("PerfectOrder BUY (SMA 20/50/200)");
    SetOutputWindow(ow_ChartWindow);

    Sma20     = CreateIndexBuffer();
    Sma50     = CreateIndexBuffer();
    Sma200    = CreateIndexBuffer();
    BuyArrows = CreateIndexBuffer();

    IndicatorBuffers(4);
    SetIndexBuffer(0, Sma20);
    SetIndexBuffer(1, Sma50);
    SetIndexBuffer(2, Sma200);
    SetIndexBuffer(3, BuyArrows);

    // Colours match the article charts on traders-rx.com.
    SetIndexStyle(0, ds_Line, psSolid, 2, RGB(0xff, 0x52, 0x52));
    SetIndexLabel(0, "SMA 20");

    SetIndexStyle(1, ds_Line, psSolid, 2, RGB(0x42, 0xa5, 0xf5));
    SetIndexLabel(1, "SMA 50");

    SetIndexStyle(2, ds_Line, psSolid, 2, RGB(0x9c, 0xcc, 0x65));
    SetIndexLabel(2, "SMA 200");

    // Deep pink stands out against red/blue/green MAs and red/teal candles.
    SetIndexStyle(3, ds_Symbol, psSolid, 5, RGB(0xff, 0x14, 0x93));
    SetIndexSymbol(3, 233, 0, 0);   // Wingdings 233 = heavy up arrow
    SetIndexLabel(3, "PerfectOrder BUY");

    SetEmptyValue(0);
}

EXPORT void __stdcall Calculate(int index)
{
    // index = 0 -> current/last bar; index = N -> N bars in the past.
    // So the *previous* bar in time is index + 1.

    if (index + PERIOD_FAST >= Bars()) {
        Sma20[index] = 0; Sma50[index] = 0; Sma200[index] = 0;
        BuyArrows[index] = 0;
        return;
    }
    double s20 = GetMA(index, 0, PERIOD_FAST, ma_SMA, pt_Close);
    Sma20[index] = s20;

    if (index + PERIOD_MID >= Bars()) {
        Sma50[index] = 0; Sma200[index] = 0;
        BuyArrows[index] = 0;
        return;
    }
    double s50 = GetMA(index, 0, PERIOD_MID, ma_SMA, pt_Close);
    Sma50[index] = s50;

    if (index + PERIOD_SLOW + 1 >= Bars()) {
        Sma200[index] = 0;
        BuyArrows[index] = 0;
        return;
    }
    double s200 = GetMA(index, 0, PERIOD_SLOW, ma_SMA, pt_Close);
    Sma200[index] = s200;

    bool condNow = (s20 > s50) && (s50 > s200);

    double p20  = GetMA(index + 1, 0, PERIOD_FAST, ma_SMA, pt_Close);
    double p50  = GetMA(index + 1, 0, PERIOD_MID,  ma_SMA, pt_Close);
    double p200 = GetMA(index + 1, 0, PERIOD_SLOW, ma_SMA, pt_Close);
    bool condPrev = (p20 > p50) && (p50 > p200);

    if (condNow && !condPrev) {
        BuyArrows[index] = Low(index) - 5 * 10 * Point();
    } else {
        BuyArrows[index] = 0;
    }
}

} // extern "C"
