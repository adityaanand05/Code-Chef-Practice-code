/*Instagram
Chef categorises an instagram account as spam, if, the following count of the account is more than 
10
10 times the count of followers.

Given the following and follower count of an account as 
X
X and 
Y
Y respectively, find whether it is a spam account.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
X
X and 
Y
Y — the following and follower count of an account, respectively.
Output Format
For each test case, output on a new line, YES, if the account is spam and NO otherwise.

You may print each character of the string in uppercase or lowercase. For example, the strings YES, yes, Yes and yES are identical.

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
4
1 10
10 1
11 1
97 7
NO
NO
YES
YES
Explanation:
Test case 
1
1: The following count is 
1
1 while the follower count is 
10
10. Since the following count is not more than 
10
10 times the follower count, the account is not spam.

Test case 
2
2: The following count is 
10
10 while the follower count is 
1
1. Since the following count is not more than 
10
10 times the follower count, the account is not spam.

Test case 
3
3: The following count is 
11
11 while the follower count is 
1
1. Since the following count is more than 
10
10 times the follower count, the account is spam.

Test case 
4
4: The following count is 
97
97 while the follower count is 
7
7. Since the following count is more than 
10
10 times the follower count, the account is spam.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>10*y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}

