/*Credit score
To access CRED programs, one needs to have a credit score of 
750
750 or more.
Given that the present credit score is 
X
X, determine if one can access CRED programs or not.

If it is possible to access CRED programs, output 
YES
YES, otherwise output 
NO
NO.

Input Format
The first and only line of input contains a single integer 
X
X, the credit score.

Output Format
Print 
YES
YES if it is possible to access CRED programs. Otherwise, print 
NO
NO.

You may print each character of the string in uppercase or lowercase (for example, the strings 
YeS
YeS, 
yEs
yEs, 
yes
yes and 
YES
YES will all be treated as identical).

Constraints
0
≤
X
≤
1000
0≤X≤1000
Subtasks
Subtask 1 (100 points): Original constraints.
Sample 1:
Input
Output
823
YES
Explanation:
Since 
823
≥
750
823≥750, it is possible to access CRED programs.

Sample 2:
Input
Output
251
NO
Explanation:
Since 
251
<
750
251<750, it is not possible to access CRED programs.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int x;
    cin >> x;
    if (x >= 750) {
        cout << "YES" << endl;
    } else {

        cout << "NO" << endl;
    }
}