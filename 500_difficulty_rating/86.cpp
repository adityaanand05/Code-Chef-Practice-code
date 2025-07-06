/*Ezio and Guards
Ezio can manipulate at most 
X
X number of guards with the apple of eden.

Given that there are 
Y
Y number of guards, predict if he can safely manipulate all of them.

Input Format
First line will contain 
T
T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers 
X
X and 
Y
Y.
Output Format
For each test case, print 
YES
YES if it is possible for Ezio to manipulate all the guards. Otherwise, print 
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
1
≤
T
≤
100
1≤T≤100
1
≤
X
,
Y
≤
100
1≤X,Y≤100
Sample 1:
Input
Output
3
5 7
6 6
9 1
NO
YES
YES
Explanation:
Test Case 
1
1: Ezio can manipulate at most 
5
5 guards. Since there are 
7
7 guards, he cannot manipulate all of them.

Test Case 
2
2: Ezio can manipulate at most 
6
6 guards. Since there are 
6
6 guards, he can manipulate all of them.

Test Case 
3
3: Ezio can manipulate at most 
9
9 guards. Since there is only 
1
1 guard, he can manipulate the guard.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>=y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}
