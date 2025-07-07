/*Bob at the Bank
Bob has an account in the Bobby Bank. His current account balance is 
W
W rupees.

Each month, the office in which Bob works deposits a fixed amount of 
X
X rupees to his account.
Y
Y rupees is deducted from Bob's account each month as bank charges.

Find his final account balance after 
Z
Z months. Note that the account balance can be negative as well.

Input Format
The first line will contain 
T
T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers 
W
,
X
,
Y
,
W,X,Y, and 
Z
Z — the initial amount, the amount deposited per month, the amount deducted per month, and the number of months.
Output Format
For each test case, output in a single line the final balance in Bob's account after 
Z
Z months.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
W
,
X
,
Y
,
Z
≤
10
4
1≤W,X,Y,Z≤10 
4
 
Sample 1:
Input
Output
3
100 11 1 10
999 25 36 9
2500 100 125 101
200
900
-25
Explanation:
Test case 
1
1: Bob's current account balance is 
100
100. At the end of each month Bob gets Rs 
11
11 and pays Rs 
1
1, thus gaining 
10
10 per month. Thus, at the end of 
10
10 months, Bob will have 
100
+
10
×
10
=
200
100+10×10=200.

Test case 
2
2: Bob's current account balance is 
999
999. At the end of each month Bob gets Rs 
25
25 and pays Rs 
36
36, thus losing 
11
11 per month. Thus, at the end of 
9
9 months, Bob will have 
999
−
11
×
9
=
900
999−11×9=900.

Test case 
3
3: Bob's current account balance is 
2500
2500. At the end of each month Bob gets Rs 
100
100 and pays Rs 
125
125, thus losing 
25
25 per month. Thus, at the end of 
101
101 months, Bob will have 
2500
−
25
×
101
=
−
25
2500−25×101=−25.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        cout<<x+(y-a)*b<<endl;
        
    }
}
