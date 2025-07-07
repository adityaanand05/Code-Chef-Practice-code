/*Pending Assignments
Chef has finally decided to complete all of his pending assignments.

There are 
X
X assignments where each assignment takes 
Y
Y minutes to complete.
Find whether Chef would be able to complete all the assignments in 
Z
Z days.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists three space-separated integers 
X
,
Y
,
X,Y, and 
Z
Z — the number of assignments, time taken in minutes to complete each assignment, and the number of days in which Chef wants to complete the assignments.
Output Format
For each test case, output on a new line, YES, if Chef would be able to complete all the assignments in 
Z
Z days. Otherwise, print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
1
≤
T
≤
10
5
1≤T≤10 
5
 
1
≤
X
,
Y
≤
100
1≤X,Y≤100
1
≤
Z
≤
10
1≤Z≤10
Sample 1:
Input
Output
3
5 5 5
50 80 2
20 72 1
YES
NO
YES
Explanation:
Test case 
1
1: Chef needs a total of 
5
⋅
5
=
25
5⋅5=25 minutes to complete all the assignments. Thus, he would be able to complete the assignments in 
5
5 days.

Test case 
2
2: Chef needs a total of 
50
⋅
80
=
4000
50⋅80=4000 minutes to complete all the assignments. However, in 
2
2 days, he only has 
2
⋅
24
⋅
60
=
2880
2⋅24⋅60=2880 minutes.
Thus, he would not be able to complete the assignments in 
2
2 days.

Test case 
3
3: Chef needs a total of 
20
⋅
72
=
1440
20⋅72=1440 minutes to complete all the assignments. In 
1
1 days, he has 
24
⋅
60
=
1440
24⋅60=1440 minutes.
Thus, he would be able to complete the assignments in 
1
1 day.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x * y) <= (z * 24 * 60)) {
            cout << "YES" << endl;
        } else {

            cout << "NO" << endl;
        }

    }
}