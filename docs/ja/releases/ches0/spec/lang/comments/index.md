# コメント

[ドキュメント](../../../../../../index.md) > [日本語](../../../../../index.md) > [リリース](../../../../index.md) > [Ches 0](../../../index.md) > [言語仕様書](../../index.md) > [言語仕様リンク](../index.md) > [コメント](./index.md)

## 概要

ここでは、言語仕様に関しての意図や注意すべき点などについて記述する。

また、個人的な考えや解説を記述することもある。

## 名称表記



## 設計方針

言語設計においての主な方針を紹介する。

[言語仕様書 (Ches 0) > 方針](../../index.md) も参照。

### 汎用的に利用できる

Chestnutには決まった使用用途はない。

### プログラミング学習に適する

プログラミング学習用として、「初学者が最初に触る言語」を目指している。(※ 実際の使用用途はこれに限らない。)

従来の言語では環境準備や仕組みの複雑さなどが壁になることがあった。しかし、できる限り学習の難易度を下げ、かつ現在主流の仕組みやパラダイムを理解できる言語にするよう努力する。

### コーディングスタイルの統一

## パラダイム / スタイル

[言語仕様書 (Ches 0) > パラダイム](../../index.md) も参照。

### オブジェクト指向

ソフトウェア開発においてオブジェクト指向は有用な考え方である。

また、個人的にオブジェクト指向を好むため導入した。

### クラスベース

Chestnutでは特にクラス単位での管理を重視する。

## ブロック表現

ブロックの終了は `end` キーワードを用いて表現する。

中括弧でブロックを表現する場合は空白や改行においてスタイルの違いが出るため、この方法を選んだ。

インデントで表現する方法は

---

Copyright © 2020 Garnet3106 All rights reserved.