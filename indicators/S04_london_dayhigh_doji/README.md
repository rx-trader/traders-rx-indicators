# S04 — London + DayHigh + Doji BUY Signal

USDJPY H1 チャート上で「ロンドン時間（UTC 7〜12 時）に当日高値の近くで形成された同時線（ドジ）」をエッジトリガーとして矢印で表示する Forex Tester 6 用カスタムインジケータ。

## 元記事

[USDJPY 1 時間足 ロンドン高値ブレイク × 同時線検証 — トレーダーの処方箋](https://traders-rx.com/london-dayhigh-doji/)

過去 5 年（2021〜2025）の検証結果:
- プロフィットファクター: 1.47
- シャープレシオ: 0.91
- 総トレード数: 302

## ダウンロード

最新版は **[Releases ページ](https://github.com/rx-trader/traders-rx-indicators/releases)** から `.zip` を取得してください。

## 表示される内容

- 当日高値ライン（シアン実線）— UTC 0:00 からの累積最高値（ステップライン）
- エッジトリガーのピンク色上向き矢印（シグナル足）

損切り・利確のラインは描画しません。記事本文の **SL = −90 pips / TP = +180 pips（タイムストップ 48 時間）** ルールをご自身で適用してください。

矢印は「シグナル足」を示します。記事のエントリーは「翌足の始値」です。

## 仕様

| 項目 | 内容 |
|---|---|
| 対象通貨ペア | USDJPY（記事のバックテストはこの通貨ペアでのみ実施） |
| 対象時間足 | H1 |
| シグナル種別 | BUY のみ |
| エッジトリガー | UTC 7〜12 時 かつ 同時線（\|Close − Open\|/Range ≤ 0.10 かつ Range ≥ ATR(20) × 0.3） かつ \|当日高値 − High\| ≤ ATR(20) × 0.3 |
| 損切り・利確 | 描画しない（記事ルールに従い手動運用） |

他の通貨ペア・時間足でもチャートに追加することは可能ですが、その場合のバックテスト結果は保証されません。

## ファイル内容（ZIP 解凍後）

| ファイル | 内容 |
|---|---|
| `LondonDayHigh_Doji_BuySignal.dll` | インジケータ本体（Win32 DLL） |
| `README.txt` | 簡易インストール手順 |

## 動作環境

- Windows 10 / 11
- Forex Tester 6（最新版）
- 32 bit Windows DLL（64 bit 環境でも動作可）

## インストール

[当ブログのチュートリアル記事](https://traders-rx.com/install-traders-rx-indicators/) を参照してください。

要点のみ:

1. Release ページから `LondonDayHigh_Doji_BuySignal-s04-v1.0.0.zip` をダウンロード
2. ZIP を展開
3. `LondonDayHigh_Doji_BuySignal.dll` を Forex Tester 6 のインストール場所内の `Indicators` フォルダにコピー
   （標準インストール例：`C:\ForexTester6\Indicators\`）
4. Forex Tester 6 を再起動 → USDJPY H1 チャート → 右クリック → 「インジケータを追加」→「カスタム」→「London + DayHigh + Doji BUY (USDJPY H1)」を選択
