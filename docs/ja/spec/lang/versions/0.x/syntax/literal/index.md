# リテラル

## 真偽値リテラル

`真`

```
true
```

`偽`

```
false
```

## 文字リテラル

`文字リテラル`

```
'a'
```

## 文字列リテラル

`文字列リテラル`

```
"1 + 2"
```

`式展開を含んだ文字列リテラル`

```
"1 + 2 = ${1 + 2}"
```

## 生文字列リテラル

`生文字列リテラル`

<!-- Jekyll の Liquid syntax error を回避するため raw タグを使う -->

```
{% raw %}
r"I say hello."
r{"I say "hello.""}
r{{"I say {"hello."}"}}
{% endraw %}
```

## 数値リテラル

`通常の数値リテラル`

```
1
```

`型指定付きの数値リテラル`

```
1s32
```

`基数指定付きの数値リテラル`

```
0x1
```

## 配列リテラル

`単数行の配列リテラル`

```
[e1, e2]
```

`複数行の配列リテラル`

```
[
    e1
    e2
]
```

## オブジェクトリテラル

`単数行のオブジェクトリテラル`

```
StructType { f1: v1, f2: v2 }
```

`複数行のオブジェクトリテラル`

```
StructType {
    f1: v1
    f2: v2
}
```

---

Copyright © 2019- Ches All rights reserved.