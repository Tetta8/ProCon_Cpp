# キュー
ラウンドロビンスケジューリングなどに用いられるデータ構造。

## 必要な変数
 - Q：データを格納するための整数型1次元配列
 - head：先頭ポインタである整数型変数
 - tail：末尾ポインタである整数型変数

## 必要な関数
 - enqueue(x):キューに要素xを追加する関数関する
 - dequeue(x):キューの先頭から要素を取り出す関数

## キューの注意点
 1. headとtailが一致している時がキューが空の状態
 2. head、tailが配列の要素数より大きくなった場合、次は配列の先頭に移動することでリングバッファとして扱える