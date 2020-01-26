# window_seat
Harman Assignment
Problem Statment 
Given a bus with seats arranged as show below
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16
.   .   .    .
.   .   .    .
.   .   .    .
57  58  59   60 
Write an optimal program which can tell the type of seat issued by the conductor i.e.,
issued seat is left window seat or right window seat

Solution
Explanation of Program Logic                                         
Given that the seats in the bus are numbered as
 1   2   3   4
 5   6   7   8
 9   10  11  12
 13  14  15  16
 .   .   .    .
 .   .   .    .
 .   .   .    .
 57  58  59   60   
 
 It can be observed that the right window seats are all perfect multiples of 4 and all the
 Left Window seats denoted by x satisfy the relation (x%4) = 1 for all x.Morover none of the
 other columns satisfy either of the above mentioned relationships.
 

