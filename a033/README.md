# a033: A trivia quiz 冷知識測驗

## Question
Here holds a trivia quiz. There are three teams sequentially numbered by 1, 2, and 3 in the game. Each team will answer certain questions in order. If answered correctly, the team scores 10 points; otherwise, the team deducts 10 points. If giving up answering the question, the team scores zero. Given certain rounds of questions, please calculate the final ranking of the three teams and the total score of each team.

這裡有一個冷知識測驗， 在遊戲中有三個隊伍按順序編號為1,2和3。 每個團隊將按順序回答某些問題。如果回答正確，團隊得分為10分; 否則，團隊扣除10分。 如果放棄回答問題，團隊得分為零。經過幾個回合的問題後，請計算三隊的最終排名和每隊的總得分。

---

## Input
The first line is the number of problems, n. Each of the following n lines represents the results of the three teams answering one of the n questions in order, which can be classified into “correct”, “wrong”, and “give-up”.

第一行是問題的數量，n。 以下n行中的每一行代表三個團隊按順序回答第n個問題的結果，其可分為“correct”(表示回答正確)，“wrong”(表示回答錯誤)和“give-up”(表示放棄回答)。

## Output
The first line is the team who has the highest score with the format (a, b), where a represent team number and b represent its score. Similarly, the second line outputs the team number of the second highest score and its score with the same format; the third line outputs the team number of the lowest score and its score with the same format. Any teams with the same score should be output on the same line in ascending order by team number.

第一行為得分最高的團隊，格式為(a, b)，其中a代表團隊編號，b代表其分數。同樣，第二行以相同的格式輸出第二高分的團隊編號及其分數; 第三行輸出最低分的團隊編號及分數。任何同分的團隊以團隊編號由小到大排序並輸出在同一行。

---

## Sample Input
```
2 
correct wrong give-up 
correct correct correct
```

## Sample Output
```
(1,20)
(3,10) 
(2,0)
```

---

## Hint
| Sample Input: | Sample Output: |
| :------------ | :------------- |
| 2 <br> correct wrong give-up <br> correct correct correct | (1,20) <br> (3,10) <br> (2,0) |
| 4 <br> correct wrong give-up <br> correct correct correct <br> wrong correct correct <br> correct correct correct | (3,30) <br> (1,20)(2,20) |

## Tag
Array 陣列

---
## Reference
[DHPE a033](http://134.208.12.72/ShowProblem?problemid=a033)