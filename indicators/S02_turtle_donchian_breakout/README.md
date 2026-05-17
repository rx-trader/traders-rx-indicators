# S02 — Turtle Donchian-20 BUY Signal

USDJPY 日足チャート上で直近 20 日の高値を**初めて上抜けた足**（タートルズ流 Rule 1 のブレイクポイント）にエントリーポイントの矢印を表示する Forex Tester 6 用カスタムインジケータ。

## 元記事

[【手法検証 #02】タートルズ流ドンチャンブレイクは現代の FX でも通用するのか — トレーダーの処方箋](https://traders-rx.com/turtle-donchian-breakout/)

過去 11 年（2014-2025）の検証結果:
- プロフィットファクター: 1.18
- シャープレシオ: 0.92

## ダウンロード

最新版は **[Releases ページ](https://github.com/rx-trader/traders-rx-indicators/releases)** から `.zip` を取得してください。

## 表示される内容

- Donchian(20) 高値ライン（オレンジ実線）
- Donchian(20) 安値ライン（オレンジ実線）
- Donchian(10) 安値ライン（黄色点線、決済参照用）
- 20 日高値ブレイク成立タイミングを示す上向き矢印（エッジトリガー方式：成立した最初の足のみ）

損切り・利確のラインは描画しません。記事本文の **手仕舞いルール（Donchian(10) 安値割れ）** をご自身で適用してください。

## 仕様

| 項目 | 内容 |
|---|---|
| 対象通貨ペア | USDJPY（記事のバックテストはこの通貨ペアでのみ実施） |
| 対象時間足 | D1（日足） |
| シグナル種別 | BUY のみ |
| エッジトリガー | 終値が前日までの 20 日高値を上抜け、かつ前足では未成立の足 |
| 損切り・利確 | 描画しない（記事ルールに従い手動運用） |

他の通貨ペア・時間足でもチャートに追加することは可能ですが、その場合のバックテスト結果は保証されません。

## ファイル内容（ZIP 解凍後）

| ファイル | 内容 |
|---|---|
| `Turtle_Donchian_BuySignal.dll` | インジケータ本体（Win32 DLL） |
| `README.txt` | 簡易インストール手順 |

## 動作環境

- Windows 10 / 11
- Forex Tester 6（最新版）
- 32 bit Windows DLL（64 bit 環境でも動作可）

## インストール

[当ブログのチュートリアル記事](https://traders-rx.com/install-traders-rx-indicators/) を参照してください。

要点のみ:

1. Release ページから `Turtle_Donchian_BuySignal-s02-vX.X.X.zip` をダウンロード
2. ZIP を展開
3. `Turtle_Donchian_BuySignal.dll` を Forex Tester 6 のインストール場所内の `Indicators` フォルダにコピー
   （標準インストール例：`C:\ForexTester6\Indicators\`）
4. Forex Tester 6 を再起動 → USDJPY D1 チャート → 右クリック → 「インジケータを追加」→「カスタム」→「Turtle Donchian-20 BUY (USDJPY D1)」を選択
