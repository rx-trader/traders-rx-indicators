# S01 — SMA Perfect Order BUY Signal

GBPUSD H4 チャート上で SMA(20)/SMA(50)/SMA(200) のパーフェクトオーダーが**初めて成立した足**にエントリーポイントの矢印を表示する Forex Tester 6 用カスタムインジケータ。

## 元記事

[GBPUSD 4 時間足 SMA パーフェクトオーダー検証 — トレーダーの処方箋](https://traders-rx.com/gbpusd-h4-perfect-order/)

過去 10 年（2015-2025）の検証結果:
- プロフィットファクター: 1.22
- シャープレシオ: 1.46

## ダウンロード

最新版は **[Releases ページ](https://github.com/rx-trader/traders-rx-indicators/releases)** から `.zip` を取得してください。

## 表示される内容

- SMA(20)（濃い緑）
- SMA(50)（青）
- SMA(200)（黄緑）
- パーフェクトオーダー成立タイミングを示す上向き矢印（エッジトリガー方式：成立した最初の足のみ）

損切り・利確のラインは描画しません。記事本文の **SL = -50 pip / TP = +120 pip** ルールをご自身で適用してください。

## 仕様

| 項目 | 内容 |
|---|---|
| 対象通貨ペア | GBPUSD（記事のバックテストはこの通貨ペアでのみ実施） |
| 対象時間足 | H4 |
| シグナル種別 | BUY のみ |
| エッジトリガー | SMA20 > SMA50 > SMA200 が成立、かつ前足では未成立の足 |
| 損切り・利確 | 描画しない（記事ルールに従い手動運用） |

他の通貨ペア・時間足でもチャートに追加することは可能ですが、その場合のバックテスト結果は保証されません。

## ファイル内容（ZIP 解凍後）

| ファイル | 内容 |
|---|---|
| `SMA_PerfectOrder_BuySignal.dll` | インジケータ本体（Win32 DLL） |
| `README.txt` | 簡易インストール手順 |

## 動作環境

- Windows 10 / 11
- Forex Tester 6（最新版）
- 32 bit Windows DLL（64 bit 環境でも動作可）

## インストール

[当ブログのチュートリアル記事](https://traders-rx.com/install-traders-rx-indicators/) を参照してください。

要点のみ:

1. Release ページから `SMA_PerfectOrder_BuySignal_vX.X.zip` をダウンロード
2. ZIP を展開
3. `SMA_PerfectOrder_BuySignal.dll` を Forex Tester 6 のインストール場所内の `Indicators` フォルダにコピー
   （標準インストール例：`C:\ForexTester6\Indicators\`）
4. Forex Tester 6 を再起動 → GBPUSD H4 チャート → 右クリック → 「インジケータを追加」→「カスタム」→「PerfectOrder BUY (SMA 20/50/200)」を選択

## ソースから自分でビルドしたい場合

[BUILD.md](BUILD.md) を参照してください。

## ライセンス

本リポジトリの [LICENSE](../../LICENSE)（MIT）に準じます。
