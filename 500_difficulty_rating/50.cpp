/*Passes for Fair
There is a fair going on in Chefland. Chef wants to visit the fair along with his 
N
N friends. Chef manages to collect 
K
K passes for the fair. Will Chef be able to enter the fair with all his 
N
N friends?

A person can enter the fair using one pass, and each pass can be used by only one person.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single line containing two space-separated integers 
N
,
K
N,K.
Output Format
For each test case, print on a new line YES if Chef will be able to enter the fair with all his 
N
N friends and NO otherwise.

You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
,
K
≤
100
1≤N,K≤100
Sample 1:
Input
Output
4
5 8
6 3
2 2
1 2
YES
NO
NO
YES
Explanation:
Test case 
1
1: Chef needs 
5
5 passes for his friends and one pass for himself and he collected 
8
8 passes. Thus he will be able to enter the fair with all his friends.

Test case 
2
2: Chef needs 
6
6 passes for his friends and one pass for himself while he collected only 
3
3 passes. Thus he will not be able to enter the fair with all his friends, only three of them can enter the fair.

Test case 
3
3: Chef needs 
2
2 passes for his friends and one pass for himself while he collected only 
2
2 passes. Thus either Chef or one of his friends can't enter the fair.

Test case 
4
4: Chef needs a total of 
2
2 passes, one for himself and one for his friend. He collected 
2
2 passes. Thus he will be able to enter the fair with his friend.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}