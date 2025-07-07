/*Chef and Chocolates
Chef wants to gift 
C
C chocolates to Botswal on his birthday. However, he has only 
X
X chocolates with him.
The cost of 
1
1 chocolate is 
Y
Y rupees.

Find the minimum money in rupees Chef needs to spend so that he can gift 
C
C chocolates to Botswal.

Input Format
First line will contain 
T
T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, three integers 
C
,
X
,
C,X, and 
Y
Y.
Output Format
For each test case, output in a single line answer, the minimum money in rupees Chef needs to spend.

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
C
≤
100
1≤C≤100
0
≤
X
≤
C
0≤X≤C
1
≤
Y
≤
100
1≤Y≤100
Sample 1:
Input
Output
2
7 5 5
10 1 1
10
9
Explanation:
Test Case 
1
1: Chef has to gift a total of 
7
7 chocolates out of which he has 
5
5 chocolates. Thus, Chef needs to buy 
2
2 more chocolates, which costs him 
10
10 rupees.

Test Case 
2
2: Chef has to gift a total of 
10
10 chocolates out of which he has 
1
1 chocolate. Thus, Chef needs to buy 
9
9 more chocolates, which costs him 
9
9 rupees.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        cout<<(x-y)*z<<endl;
        
    }
}
