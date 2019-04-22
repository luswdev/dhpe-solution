# a034: Which one is more? 那一個比較多？

## Question
There are m classes in a school and each class has n students, including boy and girl students. We arrange all the students on a field where each class is in a row. So there are m rows. Suppose that all the girls come before any boys in each row. Please determine whether the school has more girls or more boys according the input data. In the input data, we use 0 and 1 to represent girl and boy respectively. If there are more girls, your output should output 0; otherwise, output 1. Furthermore, if there is a tie, please output 2.

 

學校裡有m個班級，每個班級的學生有n個學生，包含男生和女生。所有學生在操場上以每班一列排隊。共有m列。假設在每一列中，所有女孩都排到男孩面前。請根據輸入資料來判斷學校裡女生比較多還是男生比較多。 在程式輸入資料中，我們使用0和1分別代表女生和男生。如果女生比較多，輸出0；否則輸出1。此外，如果一樣多，請輸出2。

---

## Input
The input consists of m+1 lines. The first line has two integers separated by a space, m and n, respectively representing the number of classes and the number of students in a class. Then, in each of the following m lines representing m class, some contiguous 0’s come before 1’s and each digit is separated by a space.

輸入由m + 1行組成。 第一行有兩個整數，用空格分隔，m和n，分別代表班級的數量和班級中的學生數。 然後，在代表m班的以下m行中的每一行中，一些連續的0先出現(表示排在前面的女生)，接著再出現一些連續的1(表示排在後面的男生)，每個數字由空格分隔。

## Output
The output contains one line for the result, 0, 1, or 2.

輸出一行結果，0、1或2。

---

## Sample Input
```
4 8 
0 0 0 0 0 1 1 1 
0 0 0 0 0 0 1 1 
0 0 0 0 1 1 1 1 
0 0 0 0 0 0 0 1

```

## Sample Out
```
0
```

---

## Hint

## Tag
Array 陣列