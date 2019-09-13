# no-of-ways-to-score-game-in-cplusplus
<br>
<b>time complexity is O(n) because of loop the incrementation of loop depends on the value of n </b>
<b>Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find number of ways to reach the given score.</b>

<b>Have look on the upcoming example after that you can get that</b>

Example
<b>Input: n = 20
Output: 4
There are following 4 ways to reach 20
(10, 10)
(5, 5, 10)
(5, 5, 5, 5)
(3, 3, 3, 3, 3, 5)

Input: n = 13
Output: 2
There are following 2 ways to reach 13
(3, 5, 5)
(3, 10)</b>

<b>The idea is to create a table of size n+1 to store counts of all scores from 0 to n. For every possible move (3, 5 and 10), increment values in table.</b> 
<b> answer is calculated using table (0to13) by using loops </b>
<b>this is all hope you done Thank you </b>
<b>Stay Tuned</b>
## Author

* **Krishna kakade**  - [krishnakakade1999](https://github.com/krishnakakade1999)




