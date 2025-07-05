/*Minimum Coins
There are only 
2
2 type of denominations in Chefland:

Coins worth 
1
1 rupee each
Notes worth 
10
10 rupees each
Chef wants to pay his friend exactly 
X
X rupees. What is the minimum number of coins Chef needs to pay exactly 
X
X rupees?

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single line of input containing a single integer 
X
X.
Output Format
For each test case, output on a new line the minimum number of coins Chef needs to pay exactly 
X
X rupees.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
X
≤
1000
1≤X≤1000
Sample 1:
Input
Output
4
53
100
9
11
3
0
9
1
Explanation:
Test case 
1
1: Chef can use 
5
5 notes and 
3
3 coins in the optimal case.

Test case 
2
2: Chef can use 
10
10 notes and 
0
0 coins in the optimal case.

Test case 
3
3: Chef can only use 
9
9 coins.

Test case 
4
4: Chef can use 
1
1 note and 
1
1 coin in the optimal case.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<x%10<<endl;
        
    }
}
