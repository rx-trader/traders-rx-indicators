# S05 — Dow Swing Break BOTH Signal

USDJPY H4 チャート上で「直近スイング高安のブレイク × 日足 SMA50 トレンドフィルター」のエッジトリガーを矢印で表示する Forex Tester 6 用カスタムインジケータ。日足 SMA50 は H4 上では SMA(300) で近似しています。

## 元記事

[USDJPY 4 時間足 ダウ理論スイングブレイク検証 — トレーダーの処方箋](https://traders-rx.com/usdjpy-h4-dow-swing-break/)

過去 8 年（2017〜2025）の検証結果:
- スイングブレイク単体: プロフィットファクター 0.79、勝率 27.9%、累計 -3,096 pip
- **改良案（日足 SMA50 トレンドフィルター付き）**: プロフィットファクター 1.25、勝率 32%、累計 +5,420 pip

本インジケータは **改良案のエントリーシグナル** を表示します。

## ダウンロード

最新版は **[Releases ページ](https://github.com/rx-trader/traders-rx-indicators/releases)** から `.zip` を取得してください。

## 表示される内容

- SMA(300) ライン（グレー実線）— 日足 SMA50 を H4 上で近似
- 確定スイング高値マーカー（マゼンタの点）— 5 本足フラクタル確定後に表示
- 確定スイング安値マーカー（シアンの点）— 5 本足フラクタル確定後に表示
- BUY シグナル（緑の上向き矢印）— Close > 直近スイング高値 かつ Close > SMA(300)
- SELL シグナル（赤の下向き矢印）— Close < 直近スイング安値 かつ Close < SMA(300)

スイングマーカーは「5 本足フラクタル確定後」に出るため、実際のスイング足から 2 本右にずれて表示されます。

損切り・利確のラインは描画しません。記事本文の **SL = 直近スイング反対側 ±5 pip / TP = RR 2.0** ルールをご自身で適用してください。

矢印は「シグナル足」を示します。記事のエントリーは「翌足の始値」です。

## 仕様

| 項目 | 内容 |
|---|---|
| 対象通貨ペア | USDJPY（記事のバックテストはこの通貨ペアでのみ実施） |
| 対象時間足 | H4 |
| シグナル種別 | BUY / SELL（両方向） |
| エッジトリガー (BUY) | Close > 直近確定スイング高値 かつ Close > SMA(300) |
| エッジトリガー (SELL) | Close < 直近確定スイング安値 かつ Close < SMA(300) |
| スイング判定 | 5 本足フラクタル（中央バー ± 2 本） |
| 損切り・利確 | 描画しない（記事ルールに従い手動運用） |

他の通貨ペア・時間足でもチャートに追加することは可能ですが、その場合のバックテスト結果は保証されません。

## ファイル内容（ZIP 解凍後）

| ファイル | 内容 |
|---|---|
| `Dow_SwingBreak_BothSignal.dll` | インジケータ本体（Win32 DLL） |
| `README.txt` | 簡易インストール手順 |

## 動作環境

- Windows 10 / 11
- Forex Tester 6（最新版）
- 32 bit Windows DLL（64 bit 環境でも動作可）

## インストール

[当ブログのチュートリアル記事](https://traders-rx.com/install-traders-rx-indicators/) を参照してください。

要点のみ:

1. Release ページから `Dow_SwingBreak_BothSignal-s05-v1.0.0.zip` をダウンロード
2. ZIP を展開
3. `Dow_SwingBreak_BothSignal.dll` を Forex Tester 6 のインストール場所内の `Indicators` フォルダにコピー
   （標準インストール例：`C:\ForexTester6\Indicators\`）
4. Forex Tester 6 を再起動 → USDJPY H4 チャート → 右クリック → 「インジケータを追加」→「カスタム」→「Dow Swing Break BOTH (USDJPY H4)」を選択
