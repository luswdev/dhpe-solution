# a043: The Determinant 行列式求值

## Question
A determinant is defined as:

已知行列式運算為

 

a	b	c
d	e	f
g	h	i
= a * e * i + d * h * c + g * b * f - c * e * g - b * d * i - a * f * h

Calculate a determinant of 3x3 matrices.

求以下三階行列式的結果。

---

## Input
The first line of the input contains an integer N indicating the number of test cases (1 ≤ N ≤ 100). For each test case, there are three lines with three integer separated by one space.

 

第一行輸入一正整數N，表示共有N筆測試資料 (1 ≤ N ≤ 100)，每筆測試資料為一個行列式，行列式內容為 3 列，每一列有 3 個整數，用空白分開。

For example, a test case is following:

例如輸入內容為：

1 2 3

4 5 6

7 8 9

## Output
Output the answer of each test case. Add a “newline” in the end of the output.

輸出計算的答案，最後必須有換行字元。

例如輸出為：0

---

## Sample Input
```
2
1 2 3 
4 5 6 
7 8 9
6 9 4
2 4 9
1 8 3
```

## Sample Out
```
0
-285
```

---

## Hint

## Tag
Mathematics 數學

---
## Reference
[DHPE a043](http://134.208.12.72/ShowProblem?problemid=a043)