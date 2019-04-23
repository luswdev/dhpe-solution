# a054: Naughty Bill 頑皮的比爾

## Question
Magic Pancake House is a well-known chain pancake shop. There are a lot of customers every day. This credit belongs to a naughty waiter, Bill. Let’s tell you a story. One day, the customers choose the number of layers of pancakes as usual, and then the chef arranges the pancakes into a stacks that the smaller one is on the top according to the customer's decision. However, Bill can’t stand for this kind of regular life. He used a spatula to rearrange the pancakes before giving them to customers. He puts the spatula under one of pancakes and flip all pancakes above this pancakes together. For examples, there are three pancakes, the largest one is named No.3, the middle one is No.2, and the smallest one is No.1. In the beginning, the No.3 is on the bottom of the plate, the No. 2 pancake is stacked on it. The top pancake is No. 1. The top-down arrangement is: 123. Next step, Bill puts the spatula under No.2 pancake, clips all pancakes. Now the order of the three pancakes became: 213. Then Bill puts the spatula under the No.3 pancake, all the pancakes are turned over. Now the order of the three pancakes is: 312. The flipping pancakes are popular. Now all customers specify the order of the flips to complete the flipping pancakes in their minds, and the naughty Bill becomes a busy Bill.

美吉克煎餅屋是一間知名的連鎖煎餅店，店裡的生意總是絡繹不絕，這都要歸功於一位店裡的頑皮侍者─比爾。故事是這樣的，有一天，客人就像往常一樣會先選擇煎餅的層數，接著廚師會依客人的決定，將這些煎餅排成一疊由小而大排列的煎餅。但是比爾實在是受不了這種一成不變的規律生活，於是他就在端給客人之前，先用一片鍋鏟將這些煎餅重新排列，先鍋鏟卡在某個煎餅的下方，將上頭全部的煎餅一起做翻面的動作。比如說，這裡有三塊煎餅，最大的一塊叫做 3、中間大小的是 2、最小的一塊就是 1。一開始 3 號在盤子的最下面，2 號煎餅疊在它上面，最上面的煎餅就是 1 號；由上而下的排列就是：123。那麼，比爾就先用鍋鏟卡在第二個煎餅的下方，將前 2 個煎餅做翻面的動作，此時這三個煎餅順序就成了：213；然後，比爾再用鍋鏟卡在第 3 個煎餅的下方，將全部煎餅做翻面的動作，這三個煎餅順序就成了：312。比爾將被翻過的煎餅端出去之後，沒想到這個造型居然一炮而紅，現在客人都會指定翻面的順序來完成自己心目中的翻轉煎餅，而頑皮的比爾，也就因此變成忙碌的比爾了。

---

## Input
The first line of input consists a positive integer N (1 ≤ N ≤ 10) indicating how many customer in the store. Then there are N lines, the first one of each line is a positive integer M (1 ≤ M ≤ 100), which represents the number of pancake layers ordered by customers, followed by several (not more than 100) integers, ending with 0, representing the number counted from the top for flipping the pancakes.

輸入檔中第一行為一個正整數 N（1 ≤ N ≤ 10），代表共有幾個客人。之後接下來有 N 行，每行第一個為正整數 M（1 ≤ M ≤ 100），代表該客人點的煎餅層數，接下來有數個（不超過 100 個）整數，以 0 結束，代表客人希望你從上面數下來第幾個來翻轉煎餅。

## Output
The result according to the rules specified by each customer is printed on one line from top to bottom. Each pancake No. is separated by a space, and add a “newline” character in the end of output.

將每位客人指定翻轉的結果由上而下印於一行，每片煎餅編號以一個空格隔開，最後必須有換行字元。

---

## Sample Input
```
3
3 2 0
4 2 3 4 0
5 2 1 3 5 4 0
```

## Sample Out
```
2 1 3
4 2 1 3
1 2 4 5 3
```

---

## Hint

## Tag
迴圈

---
## Reference
[DHPE a054](http://134.208.12.72/ShowProblem?problemid=a054)