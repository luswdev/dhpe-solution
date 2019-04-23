# a059: A Tomb Raider 盜墓驚魂

## Question
Hu is a tomb raider. Now He encounters a curse trap set by an old ghost in an ancient tomb. He has to play a game with the old ghost. This game has n piles of coins on the ground, and each pile has pi (1 < pi < 10000) coins. All players take the coins in turn. Each player can only choose a certain pile at a time, take any number of coins from it, at least one and at most all. Who takes the last coin is the winner. If Hu wins, he can get out of the trap. At the beginning of the game, Hu first took the coins. Now, please write a program to estimate whether Hu will win or not.

胡八二是個盜墓專家，不過夜路走多了也會遇到鬼，他在某座古墓裡遇上了古人設下的詛咒陷阱，他得跟老鬼玩一個遊戲。這個遊戲是地上有 n 堆錢幣，每堆都各有 pi（1 < pi < 10000）枚錢幣。參與者輪流從錢堆中拿走若干錢幣。一個人每次都只能選某一堆，從中拿走任意數量的錢幣，最少拿一個最多全拿，拿走最後一個錢幣的獲勝。如果胡八二贏的話就能脫離陷阱，一開始是胡八二先拿，現在請你寫一個程式來得知胡八二是贏還是輸。

---

## Input
The first row is a positive integer m (0 < m < 10), which means that there are m test cases. The format of each case is as follows:

Each case contains two rows of numbers: the first row enters a positive integer n (0 < n < 100), which means there are n piles of coins; the second row enters n positive integers separated by spaces, representing the number of coins in each pile of coins.

 

第一列為一正整數 m (0 < m < 10)，代表有 m 筆測資；每筆測資的格式如下：

每筆測資包含兩列數列，第一列輸入一個正整數 n（0 < n < 100），代表有 n 堆錢幣。第二列輸入 n 個正整數，代表各堆錢幣的錢幣個數，兩數之間以空格隔開。

## Output
Output Hu wins or loses. If Hu wins, the output is yes; if Hu loses, the output is no. A newline character should be added at the end of the output.

輸出胡八二贏還是輸，贏的話輸出 yes，輸的話輸出 no。最後必須有換行字元。

---

## Sample Input
```
2
3
122 123 120
4
1 1 1 1
```

## Sample Out
```
yes
no
```

---

## Hint

## Tag
流程控制，迴圈

---
## Reference
[DHPE a059](http://134.208.12.72/ShowProblem?problemid=a059)