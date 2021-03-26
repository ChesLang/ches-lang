# Add 命令

[ドキュメント](../../../../../../index.md) > [日本語](../../../../../index.md) > [仕様書](../../../../index.md) > [CVM](../../../index.md) > [バイトコード](../../index.md) > [命令](../index.md) > [Add 命令](./index.md)

## 概要

Threst 内の数値を加算する。

|内容|値|備考|
|:-:|:-:|:-:|
|引数の数|0||
|Threst の変更|あり|プッシュ: 1回<br>ポップ: 2回|
|ヒープ領域の変更|なし||

## 引数

この命令は引数を取らない。

## 処理手順

1. Threst 上部の値 2 つをロードし、2 つともポップ
2. ロードされた値を加算する
3. 加算結果の値 1 つを Threst にプッシュする

---

Copyright © 2020-2021 Garnet3106 All rights reserved.