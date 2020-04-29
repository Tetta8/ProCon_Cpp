# 計算量の算出
アルゴリズムを実行するときに使うリソースに対する「ものさし」は以下の2つがある。  
 - 時間計算量：プログラムの実行時間を評価
 - 領域計算量：プログラムが使う記憶領域の大きさを評価

## O表記法
Order表記法： **O(n)** と表記し、問題の入力サイズ *n* に対するアルゴリズムの効率（計算量）を表す。
アルゴリズムの計算量は、 **最小** 、 **平均** 、**最大** の場合を見積れるが、一般的には **最大** を見積もる。

## 計算量の比較

n|log*n*|√*n*|*n*log*n*|*n*^2|2^*n*|*n*!|
---|----|----|----|----|----|----|
5|2|2|10|25|32|120|
10|3|3|30|100|1,024|3,628,800|
20|4|4|80|400|1,048,576|≒2.4×10^18|
50|5|7|250|2,500|≒10^15|≒3.0×10^64|
100|6|10|600|10,000|≒10^30|≒9.3×10^157|
1,000|9|31|9,000|1,000,000|≒10^300|≒4.0×10^2,567|
10,000|13|100|130,000|100,000,000|≒10^3,000|≒10^35,660|
100,000|16|316|1,600,000|10^10|≒10^30,000|≒10^456,574|
1,000,000|19|1,000|19,000,000|10^2|≒10^300,000|≒10^5,565,709|

「**2^***n*」 や 「*n***!**」 のように計算量が爆発的に増加する場合は、アルゴリズムの見直しを行わないと入力によっては、現実的な時間で完了できなくなってしまう。

## 問題の考え方
入力データの**最大値**と**最小値**の *「差の最大値」* を求める。
ただし、入力順は時間軸であり、過去の値からそれ以降の値を引くことはできない。  
よって、入力された値の**最小値**を記録し、それ以降の入力データとの差が**最大値**となった計算結果を記録する。

## 問題URL
[ALDS1_1_D：Maximum Profit](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D&lang=ja)