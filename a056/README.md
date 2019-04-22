# a056: Lowest Non-zero Digit of Factorial 階層最低非零數字

## Question
The factorial of n, denoted by $n!$, is n × (n-1) × ... × 2 × 1. When we write n! in 7-ary numeral system, there are trailing zeroes for n ≥ 7. For instances, we have 7! = 107 × 67 × ... × 27 × 17 = 204607 and 14! = 207 × 167 × ... × 27 × 17 = 62042341512007. We are interested in the lowest non-zero 7-ary digit of n!, so you don’t have to store every digit of n! . This problem can be easily solved when n is small by the following C function lnzsdf.

n階層（以n!表示）的計算方式為 n × (n-1) × ... × 2 × 1。如果我們利用七進位數字系統計算 n!，當n ≥ 7時，最後計算的結果的尾數有可能包含數個零。例如，7!的七進位計算式為 7! = 107 × 67 × ... × 27 × 17 = 204607（尾數一個零），而14!的七進位計算式為14! = 207 × 167 × ... × 27 × 17 = 62042341512007（尾數二個零）。在這個計算範例中，我們對計算結果的數字裡哪個是位數最低的非零數字感到興趣。例如，20460是6，6204234151200是2。這個問題可以利用底下的C程式函數lnzsdf 得知：

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

然而，當n 值很大時，這個方法並不夠快。請設計新的演算法解決這個問題。

---

## Input


## Output


---

## Sample Input
```

```

## Sample Out
```

```

---

## Hint

## Tag
