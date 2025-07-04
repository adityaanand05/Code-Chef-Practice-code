/*Chess Time
Chef has recently started playing chess, and wants to play as many games as possible.

He calculated that playing one game of chess takes at least 
20
20 minutes of his time.

Chef has 
N
N hours of free time. What is the maximum number of complete chess games he can play in that time?

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single line containing a single integer, 
N
N.
Output Format
For each test case, output on a new line the maximum number of complete chess games Chef can play in 
N
N hours.

Constraints
1
≤
T
≤
10
1≤T≤10
1
≤
N
≤
10
1≤N≤10
Sample 1:
Input
Output
4
1
10
7
3
3
30
21
9
Explanation:
Test case 
1
1: If every game Chef plays takes 
20
20 minutes, he can play 
3
3 games in one hour.

Test case 
2
2: If every game Chef plays takes 
20
20 minutes, he can play 
30
30 games in 
10
10 hours.

Test case 
3
3: If every game Chef plays takes 
20
20 minutes, he can play 
21
21 games in 
7
7 hours.

Test case 
4
4: If every game Chef plays takes 
20
20 minutes, he can play 
9
9 games in 
3
3 hours.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<x*3<<endl;
    }
}