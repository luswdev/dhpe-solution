# a049: Median Filter 中值濾波器

## Question
In signal processing, the median filter is a commonly used nonlinear filter that can be used to suppress noise in the signal. Taking a one-dimensional signal as an example, its operation principle is to use a window of length w (here we set w as 3) to move on the signal sequence, and the center position of the window is the current position. The filter sorts the values ​​in the window and replaces the number of the current position with the middle number of the sorted list within the window. The number in this filtering process does not include the first digit and the last digit of the signal sequence.

For example:

The number of a signal before filtering: 3 2 10 4 (the numbers with the bottom line are regarded as the centers of the moving window, and they will be processed in order)

- Step 1: The moving window is centered at 2, so the list within the window 3 2 10.

Sorted window sequence: 2 3 10

The middle number is: 3

Current filtered sequence: 3 3 10 4 (in the middle, replace the original value)

- Step 2: The moving window is centered at 10, so the sequence of the window is 2 10 4.

Sorted window sequence: 2 4 10

The middle number is: 4

Current filtered sequence: 3 3 4 4 (in the middle, replace the original value)

- The final result is 3 3 4 4
 

 

在訊號處理中，中值濾波器是一種常被使用的非線性濾波器，可用來抑制訊號中的雜訊。以一維訊號為例，它的運作原理是用一個長度為w（本題目的w = 3）的視窗在訊號序列上移動，視窗的中心位置則為目前位置。濾波器將視窗中的數值做排序，使用排序後中間數來取代目前位置的數字。此濾波過程中的數字，不包含訊號數列的第一個數字與最後一個數字。

例：

濾波前之訊號數列：3 2 10 4 　

（加底線數值，表示將視為視窗中心，依序做處理）

- 步驟一：以 2 為中心，其視窗涵蓋的數字是 3 2 10 

排序後之視窗序列：2 3 10 

中間數為： 3 

目前濾波後之數列：3 3 10 4（以中間數，取代原本的數值）

- 步驟二：以10 為中心，其視窗涵蓋的數字是2 10 4

排序後之視窗序列：2 4 10

中間數為：4 

目前濾波後之數列：3 3 4 4（以中間數，取代原本的數值）

- 最後結果：3 3 4 4

---

## Input
First enter a positive integer n (n ≤ 50), indicating that there are n test cases. The first number of each case m represents the number of data (3 ≤ m ≤ 100), and the following m positive integers represent the data to be processed.

首先輸入一個正整數 n（n ≤ 50），表示接下來有 n 筆測資。每筆測資第 1 個數字（m）代表有 m 個資料（3 ≤ m ≤ 100），接著的 m 個正整數代表要處理的資料。

## Output
Output n filtered data, where two numbers are separated by one space and there is no need to add a space after the last number. A newline character should be added at the end of the output.

 

輸出 n 個濾波後的資料，兩個數字間以 1 個空白做間隔（最後數字無空白結尾），最後必須有換行字元。

---

## Sample Input
```
2
9 
3 3 5 3 3 9 4 4 4
10
4 15 3 4 4 1 3 4 4 8
```

## Sample Out
```
3 3 3 3 3 4 4 4 4
4 4 4 4 4 3 3 4 4 8
```

---

## Hint

## Tag
迴圈

---
## Reference
[DHPE a049](http://134.208.12.72/ShowProblem?problemid=a049)