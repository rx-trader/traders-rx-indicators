# Traders RX Indicators

[トレーダーの処方箋 (traders-rx.com)](https://traders-rx.com/) で公開している FX 手法検証記事に対応した、Forex Tester 用カスタムインジケータの配布リポジトリです。

各検証記事で扱った手法のエントリーポイントを Forex Tester 6 のチャート上で可視化するための補助ツールとして公開しています。

## 配布中のインジケータ

| ID | 通貨ペア / 時間足 | 戦略 | 配布物 | 元記事 |
|---|---|---|---|---|
| [S01](indicators/S01_gbpusd_h4_perfect_order/) | GBPUSD / H4 | SMA 20/50/200 パーフェクトオーダー | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s01-v1.0.0) | [GBPUSD 4 時間足 SMA パーフェクトオーダー検証](https://traders-rx.com/gbpusd-h4-perfect-order/) |
| [S02](indicators/S02_turtle_donchian_breakout/) | USDJPY / D1 | タートルズ流 Donchian-20 ブレイク | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s02-v1.0.0) | [タートルズ流ドンチャンブレイク検証](https://traders-rx.com/turtle-donchian-breakout/) |
| [S03](indicators/S03_london_n20_inside_bar/) | USDJPY / H1 | ロンドン N20 高値 × インサイドバー | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s03-v1.0.0) | [USDJPY 1 時間足 ロンドン N20 高値 × インサイドバー検証](https://traders-rx.com/london-n20-inside-bar/) |
| [S04](indicators/S04_london_dayhigh_doji/) | USDJPY / H1 | ロンドン高値ブレイク × 同時線 | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s04-v1.0.0) | [USDJPY 1 時間足 ロンドン高値ブレイク × 同時線検証](https://traders-rx.com/london-dayhigh-doji/) |
| [S05](indicators/S05_usdjpy_h4_dow_swing_break/) | USDJPY / H4 | ダウ理論スイングブレイク × 日足 SMA50 | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s05-v1.0.0) | [USDJPY 4 時間足 ダウ理論スイングブレイク検証（改良案付き）](https://traders-rx.com/usdjpy-h4-dow-swing-break/) |
| [S06](indicators/S06_eurjpy_h4_ma_circulation/) | EURJPY / H4 | MA 大循環 ステージ 2/5 × 日足 SMA50 | [Release v1.1.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s06-v1.1.0) | [EURJPY 4 時間足 MA 大循環ステージ 2/5 検証（改良案付き）](https://traders-rx.com/eurjpy-h4-ma-circulation/) |
| [S07](indicators/S07_gbpjpy_d1_donchian_40/) | GBPJPY / D1 | Donchian-40 ブレイク | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s07-v1.0.0) | [GBPJPY 日足 Donchian-40 ブレイク検証](https://traders-rx.com/gbpjpy-d1-donchian-40/) |
| [S08](indicators/S08_usdjpy_h4_perfect_order/) | USDJPY / H4 | SMA 20/50/200 パーフェクトオーダー | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s08-v1.0.0) | [USDJPY 4 時間足 パーフェクトオーダー検証](https://traders-rx.com/usdjpy-h4-perfect-order/) |
| [S09](indicators/S09_usdjpy_h1_london_open/) | USDJPY / H1 | アジアレンジ × ロンドンオープンブレイク | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s09-v1.0.0) | [USDJPY 1 時間足 アジアレンジ × ロンドンオープン検証](https://traders-rx.com/usdjpy-h1-london-open/) |
| [S10](indicators/S10_gbpusd_h1_ny_pullback/) | GBPUSD / H1 | NY 時間 当日高値圏 × EMA20 押し目 | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s10-v1.0.0) | [GBPUSD 1 時間足 NY 当日高値 × EMA20 押し目検証](https://traders-rx.com/gbpusd-h1-ny-pullback/) |
| [S11](indicators/S11_eurgbp_h1_tokyo_round_short/) | EURGBP / H1 | 東京時間 × EMA 上昇配列 × ラウンドナンバー通過（ショート） | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s11-v1.0.0) | [EURGBP 1 時間足 東京時間 × ラウンドナンバー反転検証](https://traders-rx.com/eurgbp-h1-tokyo-round-short/) |

## ダウンロード前にご確認ください

ここで配布しているファイルはすべて **検証用のインジケータ** であり、**自動売買 EA ではありません**。
注文発注、口座情報の取得、外部サーバーとの通信は一切行いません。

個人開発の未署名 DLL のため、Chrome や Windows Defender でダウンロード時に警告が表示
される場合があります。不安な方は無理にダウンロードせず、各検証記事のルールをもとに
手動で検証してください。

## 動作環境

- Windows 10 / 11
- Forex Tester 6（最新版）
- 32 bit Windows DLL（64 bit 環境でも動作可）

## インストール手順（共通）

詳細は [当ブログのチュートリアル記事](https://traders-rx.com/install-traders-rx-indicators/) を参照してください。

1. 該当インジケータの Release ページから ZIP をダウンロード
2. ZIP を展開して中の `.dll` を取り出す
3. Forex Tester 6 のインストール場所内の `Indicators` フォルダにコピー
   （標準インストール例：`C:\ForexTester6\Indicators\`）
4. Forex Tester 6 を再起動 → チャート上で右クリック → 「インジケータを追加」→「カスタム」から選択

---

(c) トレーダーの処方箋 (traders-rx.com) 2023-
