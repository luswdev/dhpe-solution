# a051: Number Puzzle 數字猜謎

## Question
The number puzzle is a popular game for enhancing the children’s arithmetic skills. Here we will introduce a number addition puzzle. In the puzzle, we use an alphabet (A\~G) to represent a number digit (0\~9), the digits of different alphabets are distinct each other. A puzzle contains an equation E1 + E2 = E3 with three numbers E1, E2, and E3, where E1 and E2 are 2-digit numbers and E3 is a 3-digit number. The goal of the puzzle is to recover the digits of the numbers. For example, one answer of the following puzzle “AB + BC = EED” is “A = 8”, “B = 3”, “C = 2”, “D = 5”, and “E = 1”.

數字猜謎是一個加強小孩算術技能的遊戲。這裡將介紹加法的猜謎。在一個猜謎中，我們以英文字母(A\~G)分別代表(0\~9)某個數字。一個猜謎包含一個等式：E1 + E2 = E3　其中E1 與E2 為兩位數的數字，E3　三位數的數字。此猜謎的目的為把利用A\~G所表達的數字還原成由0\~9所表示的數字。例如：“AB + BC = EED”， “A = 8”, “B = 3”， “C = 2”，“D = 5”, 及 “E = 1”.　    

```
 	A	B
+	B	C

-----------

E	E	D
```

For any given puzzle, there may have multiple answers or no answer. Please write a program to verify whether a given puzzle has answers or not.

對於每個給予的猜謎，可能會有多個解答或是沒有解答。請寫一支能夠用來判斷給予的猜謎有沒有答案的程式。

---

## Input
The input consists of several test cases. For each test case, there have three lines of alphabet-numbers. The first and the second lines consist of 2 alphabets and the third line consists of 3 alphabets. Notice that different alphabets represent distinct number digits.

輸入包含幾個測式案例。每個測試案例有三列用來表示字母數字。第一與第二列由兩個字母組成，第三列由三個字母組成。注意不同字母代表不同的數。

## Output
The output contains one line for each test case. If there exist answers for the puzzle, then output “YES”, otherwise output “NO”.

每個測試案例輸出只有一列。如果測驗案例有答案，則輸出”YES”, 否則輸出”NO”。

Please add a “newline” in the end of the output.

在輸出結果的最後請加一個“newline”。

---

## Sample Input
```
AB 
BC 
EED 
AA 
BB 
ABA
```

## Sample Out
```
YES 
NO
```

---

## Hint

## Tag
陣列，迴圈

---
## Reference
[DHPE a051](http://134.208.12.72/ShowProblem?problemid=a051)