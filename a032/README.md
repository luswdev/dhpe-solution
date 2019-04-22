# a032: Counting Numbers 數字計數

## Question
Write a program that reads numbers from the keyboard into an integer array. You may assume that there will be 50 or fewer entries in the array. Your program allows any number of numbers to be entered, up to 50 numbers. The output is to be a two-column list. The first column is a list of the distinct array elements; the second column is the count of the number of occurrences of each element. The list should be sorted on entries in the first column, largest to smallest.

撰寫一個程式，讀取輸入的數字存到整數陣列中。假設陣列中最多只有50個元素。你的程式可輸入任意數量的數字，最多50個數字。輸出為一個兩欄的清單。第一欄是不重複的陣列元素清單；第二欄是該每個元素出現的次數。清單以第一欄的元素由大到小排序。

---

## Input
User can keyin n number (n<=50), and end input by keyin -999.

使用者可以輸入n個數字(n<=50)，輸入-999表示結束輸入。

## Output
The output is to be a two-column list. The first column is a list of the distinct array elements; the second column is the count of the number of occurrences of each element. The list should be sorted on entries in the first column, largest to smallest.

輸出為一個兩欄的清單。第一欄是不重複的陣列元素清單；第二欄是該每個元素出現的次數。清單以第一欄的元素由大到小排序。

---

## Sample Input
```
-12 3 -12 4 1 1
-12 1 -1 1 2 3 4 2 
3 -12 -999
```

## Sample Output
```
4 2 
3 3 
2 2
1 4
-1 1
-12 4
```

---

## Hint

## Tag
Array 陣列