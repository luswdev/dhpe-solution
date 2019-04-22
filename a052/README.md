# a052: Pokers 撲克牌大小

## Question
There are many kinds of game for playing cards. Now you will participate in the game. You will get several cards. Each card has a suit-spades >hearts>diamonds>clubs, and a rank. We decide which one is greater between two cards according to their suits. If their suits are the same, then compare their ranks.

 

撲克牌的遊戲有很多種，像是大老二、撿紅點等。然而，現在您要參與的是比大小遊戲，每張牌各有其花色和數字，大小比較主要以花色為主，黑桃>紅心>方塊>梅花；倘若花色相同時，則比較數字。

---

## Input
The first line of the input contains an integer n (1 ≤ n ≤ 50) indicating the number of test cases. For each test case, there is a line with several cards separated by a space. S, H, D, and C represent spades, hearts, diamonds, and clubs, respectively

 

第一列的整數n （ 1 ≤ n ≤ 50），代表撲克牌的n疊，其後有n列，每列即為一疊牌的內容，每張牌分別以英文、數字作表示，其中S代表黑桃、H代表紅心、D代表方塊、 C代表梅花。每筆資料分別以空白隔開。

## Output
Output the sorted cards and add a “new line character” in the end of output.

印出排列過後的撲克牌。一行是一疊牌，每張牌以空白隔開，最後必須有換行字元。

---

## Sample Input
```
4
H5 D4 S2 C13 
D8 S3 D10 C12 H7 
H6 S3 
C5 D11 S1
```

## Sample Out
```
S2 H5 D4 C13 
S3 H7 D10 D8 C12 
S3 H6 
S1 D11 C5
```

---

## Hint

## Tag
迴圈

---
## Reference
[DHPE a052](http://134.208.12.72/ShowProblem?problemid=a052)