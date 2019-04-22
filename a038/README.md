# a038: Arithmetic Means of Two N×M Dimensional Arrays 兩個N×M維陣列的算術平均

## Question
Write a program to take the arithmetic means of each pair of values in two N × M dimensional arrays. These calculated means will be outputted into a newly generated N × M dimensional array.

撰寫一個程式，計算兩個N×M維陣列中的每對數值的算術平均，計算出的平均數將輸出到另一個新的N×M維陣列中。

---

## Input
The 1st line contains two integers, N M (1≤N,M≤3). It represents that input data is NxM array.

The following NxM real numbers is array A.

The following NxM real numbers is array B.

For example:

N M
A[0, 0]
A[0, 1]
A[0, 2]
…
B[0, 0]
B[0, 1]
B[0, 2]
…

第一行包含兩個整數，N M（1≤N，M≤3）。 它表示輸入數據是NxM陣列。

接著的NxM數字是陣列A.

接著的NxM數字是陣列B.

例如：

N M
A[0, 0]
A[0, 1]
A[0, 2]
…
B[0, 0]
B[0, 1]
B[0, 2]
…

## Output
A new NxM array whose elements are arithmetic means of array A and array B.

Each line represents a row, and output format for elements is [content].

There is no space between [content] and [content].

There is a blank line after each test case.

※round to one decimal places

一個新的NxM陣列，其元素是陣列A和陣列B的算術平均數。

每行輸出代表陣列的一列，元素的輸出格式為[content]。

[content]和[content]之間沒有空格。

每個測試用例後都有一個空行。

※舍入到小數點後一位

---

## Sample Input
```
2 2
2 3
7 1
8 7
1 9
```

## Sample Out
```
[5.0][5.0]
[4.0][5.0]
```

---

## Hint
| Sample Input: | Sample Output: |
| :------------ | :------------- | 
| 2 2 <br> 2 3 <br> 7 1 <br> 8 7 <br> 1 9 | [5.0][5.0] <br> [4.0][5.0] |
| 3 2 <br> 6.5 3 <br> 1 2 <br> 4 1 <br> 1.5 7 <br> 9 8 <br> 6 7 | [4.0][5.0] <br> [5.0][5.0] <br> [5.0][4.0] |

## Tag
Array 陣列