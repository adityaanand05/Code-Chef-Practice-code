/*Chef gives Party
Chef wants to give a burger party to all his 
N
N friends i.e. he wants to buy one burger for each of his friends.

The cost of each burger is 
X
X rupees while Chef has a total of 
K
K rupees.

Determine whether he has enough money to buy a burger for each of his friends or not.

Input Format
The first line contains a single integer 
T
T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains the three integers 
N
N, 
X
X, and 
K
K - the number of Chef's friends, the cost of each burger, and the total money Chef has, respectively.
Output Format
For each test case, output YES if the Chef can give a party to all his 
N
N friends. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
,
X
≤
100
1≤N,X≤100
1
≤
K
≤
10000
1≤K≤10000
Sample 1:
Input
Output
4
5 10 70
5 10 40
10 40 400
14 14 150
YES
NO
YES
NO
Explanation:
Test case 
1
1: Chef has 
5
5 friends. The cost of buying a burger for each of them will be 
10
×
5
=
50
10×5=50 while Chef has 
70
70 rupees. Therefore, he can buy a burger for all of them.

Test case 
2
2: Chef has 
5
5 friends. The cost of buying a burger for each of them will be 
10
×
5
=
50
10×5=50 while Chef has 
40
40 rupees. Therefore, he can not buy a burger for all of them.

Test case 
3
3: Chef has 
10
10 friends. The cost of buying a burger for each of them will be 
40
×
10
=
400
40×10=400 and Chef has 
400
400 rupees. Therefore, he can buy a burger for all of them.

Test case 
4
4: Chef has 
14
14 friends. The cost of buying a burger for each of them will be 
14
×
14
=
196
14×14=196 while Chef has 
150
150 rupees. Therefore, he can not buy a burger for all of them.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x*y<=z){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}