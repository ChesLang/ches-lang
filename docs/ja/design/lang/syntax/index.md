# 構文

[ドキュメント](../../../../index.md) > [日本語](../../../index.md) > [設計書](../../index.md) > [言語設計書](../index.md) > [構文](./index.md)

## 概要

構文について解説する。

## 解説

### ブロック表現

`end` キーワードを用いてブロックを終了する方式を採る。

以下はその他方式を採用しなかった理由である。

|方式|不採用理由|
|:-:|:-:|
|括弧囲み|スペースや改行においてスタイルの差異が出る|
|インデント|記述ミスに気づきづらい|