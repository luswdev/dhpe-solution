# a060: Making Change 零錢兌換

## Question
A store owner frequently encounters such a problem that a customer requests a less number of coins to make the change. Let us help the store owner to solve this problem. Suppose that the owner has a variety of valued coins and has infinite supply of each valued coin. We need to find the minimum number of coins to make the change. For example, we want to make change for 5321 dollars, and the valued coins the customer expects are 1000, 200, 20, and 1. The store owner makes such a change of 1000\*5+200\*1+20\*6+1\*1, which involves 13 coins.

市場的老闆在進行金錢交易的時候經常會遇到顧客要求找的零錢總數愈少愈好，因此我們要幫助老闆解決此問題。假設老闆擁有各種金錢面額且每種面額總數無上限，因此老闆可以依據每位顧客所要求的兌換面額進行最少零錢總數的兌換。假設要找的錢為 5321 且顧客要求的面額為 1000、200、20 和 1，則老闆必須找給顧客 1000\*5+200\*1+20\*6+1\*1 共 13 個零錢總數。

---

## Input
The first input line contains a number which indicates the number of test datasets. Test datasets start from the second line. Each line of test dataset includes several numbers separated by a white space. Among them, the last number (1~100000) is the value of making change, and the remaining numbers are valued coins (each having a value between 1 and 100000) in descending order. The last valued coin must be 1.

輸入的第一行是代表測試資料有幾組，接著第二行開始為測試資料，每行測試資料的最後一個數字代表所要找的金錢(1~100000)，前面的數字則代表顧客所要求的兌換面額（1 ~ 100000），面額須由大至小輸入且最後一個面額一定要為 1。

## Output
For each test dataset, show the minimum number of coins to make the change in the first line and in the following lines, show each valued coin in descending order and the corresponding number of coins. Use a white space to separate these two numbers. Please print a cartridge return at the end of each output line.

依序輸出每組測試資料的結果，且每組輸出資料的第一行代表最少的零錢數，之後依面額大小順序依序輸出每種面額以及其所兌換的個數，面額和個數之間必須有空白間隔。

備註：最後一行輸出結尾須換行。

---

## Sample Input
```
2
1000 600 11 2 1 98654
600 22 3 1 54321
```

## Sample Out
```
108
1000 98
600 1
11 4
2 5
1 0
109
600 90
22 14
3 4
1 1
```

---

## Hint

## Tag
迴圈

---
## Reference
[DHPE a060](http://134.208.12.72/ShowProblem?problemid=a060)