# a047: Decimal to Binary 十進制轉二進制

## Question
Write a program which converts each input decimal number into the corresponding 8-bit binary number. If the input number is negative, please use two’s complement notation.

撰寫一個程式，使用者輸入一個整數，印出 8 位元的二進制表示。如果輸入為負數，則以二補數表示。

---

## Input
In the first line, input a positive integer number n (n ≤ 50), and in the following lines, input n integer numbers with each range between -128~127.

首先輸入一個正整數 n（n ≤ 50），表示接下來有 n 筆測資。每筆測資輸入數個整數，介於 -128～127 之間。

## Output
Show the corresponding binary number in length of 8 bits. Please print a cartridge return at the end of each output line.

以 8 位元的二進制顯示，最後必須有換行字元。

---

## Sample Input
```
2
15
-2
```

## Sample Out
```
00001111
11111110
```

---

## Hint

## Tag
陣列，迴圈

---
## Reference
[DHPE a047](http://134.208.12.72/ShowProblem?problemid=a047)