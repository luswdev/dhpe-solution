# a056: Lowest Non-zero Digit of Factorial 階層最低非零數字

## Question
The factorial of n, denoted by n!, is n × (n-1) × ... × 2 × 1. When we write n! in 7-ary numeral system, there are trailing zeroes for n ≥ 7. For instances, we have 7! = 10<sub>7</sub> × 6<sub>7</sub> × ... × 2<sub>7</sub> × 1<sub>7</sub> = 20460<sub>7</sub> and 14! = 20<sub>7</sub> × 16<sub>7</sub> × ... × 2<sub>7</sub> × 1<sub>7</sub> = 6204234151200<sub>7</sub>. We are interested in the lowest non-zero 7-ary digit of n!, so you don’t have to store every digit of n! . This problem can be easily solved when n is small by the following C function **lnzsdf**.

n 階層（以 n! 表示）的計算方式為 n × (n-1) × ... × 2 × 1。如果我們利用七進位數字系統計算 n!，當 n ≥ 7 時，最後計算的結果的尾數有可能包含數個零。例如，7! 的七進位計算式為 7! = 10<sub>7</sub> × 6<sub>7</sub> × ... × 2<sub>7</sub> × 1<sub>7</sub> = 20460<sub>7</sub>（尾數一個零），而 14! 的七進位計算式為 14! = 20<sub>7</sub> × 16<sub>7</sub> × ... × 2<sub>7</sub> × 1<sub>7</sub> = 6204234151200<sub>7</sub>（尾數二個零）。在這個計算範例中，我們對計算結果的數字裡哪個是位數最低的非零數字感到興趣。例如，20460 是 6，6204234151200 是 2。這個問題可以利用底下的 C 程式函數 **lnzsdf** 得知：

```c
int lnzsdf(int x){

    int i, j, ret = 1;

    for(i = 1; i <= x; i++){
        for(j = i; j % 7 == 0; j /= 7);
            ret = (ret * (j % 7)) % 7;
    }

    return ret;
}
```

However, this is not fast enough to solve large n. Please design a new algorithm to solve this problem.

然而，當 n 值很大時，這個方法並不夠快。請設計新的演算法解決這個問題。

---

## Input
The first line of the input contains a integer T ≤ 20 which is the number of test cases. Each test case consists of one number n where 1 ≤ n ≤ 2000000000.

第一行輸入包含一個整數 T（T ≤ 20）表示測資的筆數。第二行開始為各筆測資。每筆測資包含一個數字 n，其中 1 ≤ n ≤ 2000000000。

## Output
The output contains one line for each test case. Each line contains the lowest non-zero 7-ary digit of n! which equals **lnzsdf( n )** .

Please add a “newline” in the end of the output.

每筆測資請以一行輸出計算結果，即 **lnzsdf( n )** 的答案。最後一行輸出結尾亦須換行。

---

## Sample Input
```
4
7
14
100
2000000000
```

## Sample Out
```
6
2
4
1
```

---

## Hint

## Tag
陣列，迴圈

---
## Reference
[DHPE a056](http://134.208.12.72/ShowProblem?problemid=a056)