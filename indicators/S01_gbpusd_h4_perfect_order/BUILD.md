# ビルド手順 — SMA_PerfectOrder_BuySignal

ソースコード `SMA_PerfectOrder_BuySignal.cpp` から `.dll` をビルドする手順です。
通常の利用者は [Releases](https://github.com/rx-trader/traders-rx-indicators/releases) からビルド済 ZIP をダウンロードすれば十分です。

## 前提条件

- Forex Tester 6 を `C:\ForexTester6\` 等にインストール済（公式ヘッダ `IndicatorInterfaceUnit.h` を参照するため）
- **32-bit (Win32) ターゲット**をビルドできる C++ コンパイラ。FT6 は 64 bit DLL を読み込みません。

## オプション A: LLVM MinGW（推奨・無料・1 コマンド）

```bat
winget install MartinStorsjo.LLVM-MinGW.MSVCRT
```

インストール後（`g++` パスは WinGet が自動でエイリアス登録します）:

```bat
copy "C:\ForexTester6\Examples\Indicators\C++\IndicatorInterfaceUnit.h" .
copy "C:\ForexTester6\Examples\Indicators\C++\TechnicalFunctions.h" .
i686-w64-mingw32-g++ -shared -static -O2 ^
  -o SMA_PerfectOrder_BuySignal.dll ^
  SMA_PerfectOrder_BuySignal.cpp SMA_PerfectOrder_BuySignal.def ^
  -Wl,--kill-at
```

## オプション B: MSVC（Visual Studio Build Tools）

**「x86 Native Tools Command Prompt for VS 20XX」** を起動（x64 ではなく x86）:

```bat
copy "C:\ForexTester6\Examples\Indicators\C++\IndicatorInterfaceUnit.h" .
copy "C:\ForexTester6\Examples\Indicators\C++\TechnicalFunctions.h" .
cl /LD /MT /O2 SMA_PerfectOrder_BuySignal.cpp /link /DEF:SMA_PerfectOrder_BuySignal.def
```

## エクスポートの確認

ビルドされた DLL に `Init` / `Calculate` / `IntrfProcsRec` / `ReplaceStr` の 4 シンボルが
clean な名前で export されているか確認します:

```bat
dumpbin /exports SMA_PerfectOrder_BuySignal.dll
```

または MinGW なら:

```bat
i686-w64-mingw32-objdump -p SMA_PerfectOrder_BuySignal.dll | findstr /A "Init Calculate"
```

## インストール

ビルドされた `.dll` を `C:\ForexTester6\Indicators\` にコピーして Forex Tester 6 を再起動。
