# a066: Where are the links? 超連結在那裡？

## Question
Write a program to track all the hyper links in an HTML document. For example, in the following HTML code we find two hyper links.

```html
<a href="research.htm">Research</a>
<a href="course.htm">Course</a>
```
The syntax for HTML hyperlinks is as follows.
```html=
<A HREF="resumepage.html">my resume</A>
```
Your program will read from stdin the HTML file, then find all the hyper links. Note that you only need to process characters in the `<A ... > ... </A>` tag, and nothing else. Note that the hyper link tag can be in either lower or upper cases, and you can safely assume that whatever HREF or href found in the `<A ...></A>` tag is a valid hyper link.

You also need to calculate the number of times each link appears, and sort all the links according to case-sensitive alphabetical order. You can use the following insertion sort to get this done. First you need two arrays to store the hyper links and the number of times a link has been found. When you find the first link, you put it into the array and set the frequency to one. When you find the next link you look into the array and try to locate the link there. If you find the link, you only need to increase the frequency. If you do not find it in the array, you need to "insert" it into the correct position in the array -- namely push some part of the array to the end by one slot to make room for the incoming link, and set its frequency to 1 since this is the first time it appears.

編寫程式以找出HTML文件中的所有超連結。例如，在以下HTML代碼中，我們找到兩個超連結。

```html
<a href="research.htm">Research</a>
<a href="course.htm">Course</a>
```
The syntax for HTML hyperlinks is as follows.
```html
<A HREF="resumepage.html">my resume</A>
```
您的程式將從 stdin 中讀取 HTML 文件，然後查找所有超連結。請注意，您只需要處理 `<A ...> ... </A>` 標籤中的字元，而不需要處理任何其他字元。 請注意，超連結標籤可以是小寫或大寫的情況，您可以安全地假設在 `<A ...> </A>` 標記中找到的任何 `HREF` 或 `href` 都是有效的超連結。

您還需要計算每個超連結出現的次數，並根據區分大小寫的字母順序對所有超連結進行排序。您可以使用以下插入排序來完成此操作。首先，您需要兩個陣列來存儲超連結以及超連結的查找次數。當您找到第一個超連結時，將其放入陣列並將次數設置為 1。當您找到下一個超連結時，您會查看該陣列並嘗試找到該超連結。如果找到超連結，則只需增加次數。 如果你沒有在陣列中找到它，你需要將它“插入”到陣列中的正確位置 - 即將陣列的某些部分推到末端以便為傳入超連結騰出空間，然後設置它的次數為 1，因為這是它第一次出現。

---

## Input
The input is an HTML document. You may read the whole document till EOF. The length of each line in the document is less than or equal to 8192 bytes. You may assume that all `HREF="..."` or `href="..."` wouldn't be broken into two or more lines and would only appear in the  `<a>` tags. So whenever you see an `HREF` or `href`, it must be followed by a hyperlink. You may also assume that the URLs appeared in the document are enclosed by two double-quote characters ("), and there is no double-quote character in the URL. The length of the URL of each hyper link would not exceeds 256 characters, and the number of different links is no more than 512.

輸入是一個HTML文件。您可讀取整個文件直到EOF。文件中每行的長度小於或等於8192位元組。您可以假設所有 `HREF="..."` 或 `href="..."` 都不會分成兩行或更多行，並且只會出現在 `<a>` 標籤中。 因此，無論何時看到 `HREF` 或 `href`，都必須跟著一個超連結。您還可以假設文件中出現的 URL 由兩個雙引號字元（"）括起來，並且 URL 中沒有雙引號字元。每個超連結的 URL 長度不超過 256 個字元，並且不同超連結的數量不超過 512。

## Output
You should output all different links in the HTML document, one per line. For each links, you should output its frequency followed by its URL, separated by a single space. Be sure to output the links in alphabetical order, in the case-sensitive sense.

您應該輸出 HTML 文件中的所有不同超連結，每行一個。對於每個超連結，您應輸出其出現次數，後面跟著它的 URL，由單個空格分隔。請務必按區分大小寫字母順序輸出超連結。

---

## Sample Input
```html
<html>
  <head>
    <title>C2007</title>
  </head>
  <body>
    <a href="research.htm">Research</a>
    <a href="course.htm">Course</a>
    <A HREF="http://nerv.org/~pangfeng/resumepage.html">my resume</A>
    <a href="README.txt">Read me first!</a>
    <a href="mailto:[email protected]">Contact me</a>
    <a HREF="README.txt">Read me again!</a>
  </body>
</html>
```

## Sample Out
```
2 README.txt
1 course.htm
1 http://nerv.org/~pangfeng/resumepage.html
1 mailto:[email protected]
1 research.htm
```

---

## Hint

## Tag
String 字串

---
## Reference
[DHPE a066](http://134.208.12.72/ShowProblem?problemid=a066)