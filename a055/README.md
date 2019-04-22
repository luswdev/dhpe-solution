# a055: Merge Sort 合併排序

## Question
Merge sort is a sorting algorithm. It divides numbers into two groups first, then sorts the numbers in these two groups respectively, and finally merges them. For example, A and B represent two groups of sorted numbers. A is (2, 4, 5) and B is (1, 6). Two pointers which point to the first number of A and B respectively can be used when doing merge process. Then output the smaller number pointed by these two pointers. In this case, the first output number is 1. The pointer for B points to next number. Output the smaller number pointed by these two pointers again. Now the second output number is 2. The pointer for A points to next number. Please write a program that can sort two groups of numbers according to merge sort algorithm described above.

合併排序是一種將一組數字拆成兩組，待這兩組數字分別排序後進行合併的動作。例如 A 與 B 分別表示兩組已經排序好的數字， A 為 (2, 4, 5) 且 B 為 (1, 6) 。合併的方式可以透過兩個指標，分別指向 A 與 B 的第一個數字，接著輸出這兩個指標所指較小的數字，因此第一個輸出數字為 1 。緊接移動 B 的指標至下一個數字，再輸出這兩個指標所指較小的數字，因此第二個輸出數字為 2 。接著移動 A 的指標至下一個數字，以此類推。請寫一個程式，完成兩組數字的合併排序。

---

## Input
For each test case, the input should consist of two lines with a sorted number list. For example, enter N numbers in the first line and M numbers in the second line, where N, M ≤ 10.

If numbers in the first line of a test case are all 0, then program ends;

每一測試資料需要輸入兩行以單一空白區隔並由小至大排列的整數數字，其中第一行輸入 N 個數字，第二行輸入 M 個數字。 N, M ≤ 10。

如果測試資料的第一行全部輸入數字 0 則結束程式執行。

## Output
Output sorted numbers separated by one space and add a “newline” in the end of output.

輸出排序後的數字，數字間以一個空格隔開，最後必須有換行字元。

---

## Sample Input
```
2 5 6 8 12
1 4 15
1 8 9 11
2 4 5 10 13
0 0 0 0 0
```

## Sample Out
```
1 2 4 5 6 8 12 15 
1 2 4 5 8 9 10 11 13 
```

---

## Hint

## Tag
排序

---
## Reference
[DHPE a055](http://134.208.12.72/ShowProblem?problemid=a055)