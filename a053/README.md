# a053: Skyline Data 天際線資料群

## Question
Skyline queries are useful in many applications such as multicriteria decision-making, data mining, and user-preference queries. Generally speaking, an object P is said to dominate another object Q if P is not worse than Q on every dimension and P is strictly better than Q on at least one dimension. In skyline query, it returns the points that are not dominated by any other points in the dataset. For example, Table 1 shows the performance of six players on the scoring and rebounding. In Table 1, A is a better player than C, because A and C are equally good at scoring, but the number of rebounds is larger than that of C. In this case, we can say that A dominates C, or C is dominated by A. Furthermore, A and B are data points that are incomparable, because A is better than B in scoring, but B is better than A in rebounding. In the example, since the two points B and E are not dominated by other points, {B, E} is the skyline point in the dataset.

 

天際線查詢在多偏好分析(multi-preference analysis)與多準則決策(multi-criteria decision making)等應用中是非常有用的。簡單的說，天際線查詢的主要目的是在指定的資料集中找出不被其他資料點所支配的資料點，稱之為天際線點(skyline point)，而這些天際線點的集合，則稱為天際線。所謂的支配指的是:當P點支配Q點時，代表P點的任一屬性都不會比Q點的屬性差，而且P點至少有一個屬性優於Q點。舉例來說，表一描述了六個球員在得分與籃板上的表現，我們想根據得分與籃板這兩個屬性，找出表現好的球員，在表一中A是優於C的球員，因為雖然Ａ與Ｃ在得分的表現上相當，但籃板數卻高於C，這樣的情形我們可以說Ａ支配Ｃ，或是Ｃ被Ａ所支配，而在例子中，Ａ與Ｂ則為互相不能支配的資料點，因為雖然Ａ在得分的表現上優於Ｂ，但Ｂ在籃板的表現卻優於Ａ；在範例中，因為B與E這二個點並沒有被其他的點所支配，所以{B, E}即為這個資料集中的天際線點。

表一: 天際線查詢範例

| 球員 | 得分 | 籃板 |
| --- | ---- | --- |
| Ａ | 20 | 6 |
| Ｂ | 18 | 18 |
| Ｃ | 19 | 3 |
| Ｄ | 30 | 6 |
| Ｅ | 35 | 6 |
| Ｆ | 32 | 4 |

---

## Input
The first line of the input file contains an integer n（ 1 ≤ n ≤ 10）indicating the number of data elements in the dataset. Each data element (2 dimensions) contains two integers i ,j (0< i, j <100), separated by space.

 

第一行輸入一個數字 n （ 1 ≤ n ≤ 10），接著會有 n 行的輸入，每一行輸入代表了一筆 2 維度的正整數資料，每個維度值大於 0 且小於 100 ，各維度之間以一個空白鍵分隔。

## Output
For each data element, output Y if it is a skyline point, and output N otherwise. The output characters are separated by space. And the end of the output should contain an end of line.

 

輸出會有 n 個字母，字母分別是 Y 和 N ， Y 代表著該筆資料是天際線資料，反之則是 N ，輸出對應的資料順序對應了輸入時的資料順序，每個字母以一個空白鍵分隔，最後必須有換行字元。

---

## Sample Input
```
6 
31 55
31 22
1 99
31 55
44 10
69 12
```

## Sample Out
```
Y N Y Y N Y
```

---

## Hint

## Tag
迴圈

---
## Reference
[DHPE a053](http://134.208.12.72/ShowProblem?problemid=a053)