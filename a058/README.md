# a058: Music CD Boxes 音樂CD盒

## Question
Ming is a person who likes to listen to music, so he has lots of music CDs, and now he wants to buy a CD box to store CDs. There are only two kinds of CD boxes on the market, one can hold n1 pieces and sell for d1 dollars, and the other can hold n2 pieces and sell for d2 dollars. The CD box that Ming hopes to buy is full in use, and he hopes to buy it with the least amount of money. Now, please write a program to decide how many these two boxes Ming should buy.

小明是個喜歡聽音樂的人，所以他擁有很多音樂 CD ，現在他想要買CD 盒來裝 CD 。市面上只有兩種 CD 盒，一種可以裝 n1 片並且售價 d1 元，另一種可以裝 n2 片並且售價 d2 元。小明希望買到的 CD 盒在使用上都是裝滿的，而且希望花最少的錢來買。現在請你幫小明寫一個程式來決定小明該買這兩種盒子各多少個才好。

---

## Input
The first row is a positive integer n (0 < n < 10), which means there are n testing data. The format of each testing data is as follows:

There are a total of three rows of data entered. The first row is to enter a positive integer N (the number of Ming’s CDs), the second row is to input positive integers n1, d1, and the third column is to input positive integers n2, d2, (1 ≤ N, n1, d1, n2, d2, ≤ 1000000).

第一列為一正整數 n（0 < n < 10），代表有 n 筆測資；每筆測資的格式如下：

輸入總共有三列資料。第一列是輸入一個正整數 N（小明的 CD 數），第二列是輸入正整數 n1、d1，第三列是輸入正整數 n2、d2，（1 ≤ N、n1、d1 n2、d2  ≤ 1000000）。

## Output
The output is a list of data, including two integers greater than or equal to zero, respectively representing the number of boxes purchased. If no solution is found to satisfy the problem, output "false". A newline character should be added at the end of the output.

輸出為一列資料，包含兩個大於等於零的整數分別代表兩種盒子買的數量，如果找不到滿足題意的解，就輸出 false。最後必須有換行字元。

---

## Sample Input
```
2
50
1 2
3 4
48
4 9
3 6
```

## Sample Out
```
2 16
0 16
```

---

## Hint

## Tag
流程控制，迴圈

---
## Reference
[DHPE a058](http://134.208.12.72/ShowProblem?problemid=a058)