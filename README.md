# Traders RX Indicators

[トレーダーの処方箋 (traders-rx.com)](https://traders-rx.com/) で公開している FX 手法検証記事に対応した、Forex Tester 用カスタムインジケータの配布リポジトリです。

各検証記事で扱った手法のエントリーポイントを Forex Tester 6 のチャート上で可視化するための補助ツールとして公開しています。

## 配布中のインジケータ

| ID | 通貨ペア / 時間足 | 戦略 | 配布物 | 元記事 |
|---|---|---|---|---|
| [S01](indicators/S01_gbpusd_h4_perfect_order/) | GBPUSD / H4 | SMA 20/50/200 パーフェクトオーダー | [Release v1.0.0](https://github.com/rx-trader/traders-rx-indicators/releases/tag/s01-v1.0.0) | [GBPUSD 4 時間足 SMA パーフェクトオーダー検証](https://traders-rx.com/gbpusd-h4-perfect-order/) |

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
