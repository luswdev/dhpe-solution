# a039: Ten Half 十點半

## Question
“Ten Half” is a simple poker game similar to BlackJack. A is one point, 2 is two points, …, 10 is ten points, and each of J, Q, K is a half point. If your total point of cards is over 10.5, you lose the game.

“十點半”是一款類似於二十一點的簡單撲克遊戲。 A是1分，2是2分，......，10是10分，J，Q，K分別是半分。 如果您的總積分超過10.5，您就輸了這場遊戲。

---

## Input
The first line is an integer n(0<n<=10) that indicates the number of test cases. Other lines contain the cards you have in each test case. There is at least one card in each test case.

第一行是整數n（0 <n <= 10），表示測試例子的數量。 其他行包含每個測試例子中的撲克牌。 每個測試例子中至少有一張撲克牌。

## Output
Output the probability of losing the game, as a rounded integer scaled from 0 to 100 after you draw a card. If the cards you input have already exceeded 10.5 points, output -1. Add a newline at the end of each output.

輸出你抽一張牌後，輸掉遊戲的機率，捨入至0到100的整數。 如果您輸入的牌已經超過10.5點，則輸出-1。 在每個輸出的末端加上換行符號。

---

## Sample Input
```
2
A 3 5
4 6 J K
```

## Sample Out
```
69
-1
```

---

## Hint

## Tag
Comprehensive 綜合

---
## Reference
[DHPE a039](http://134.208.12.72/ShowProblem?problemid=a039)