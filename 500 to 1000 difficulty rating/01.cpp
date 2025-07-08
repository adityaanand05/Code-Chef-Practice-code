/*Greater Average
You are given 
3
3 numbers 
A
,
B
,
A,B, and 
C
C.

Determine whether the average of 
A
A and 
B
B is strictly greater than 
C
C or not?

NOTE: Average of 
A
A and 
B
B is defined as 
(
A
+
B
)
2
2
(A+B)
​
 . For example, average of 
5
5 and 
9
9 is 
7
7, average of 
5
5 and 
8
8 is 
6.5
6.5.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of 
3
3 integers 
A
,
B
,
A,B, and 
C
C.
Output Format
For each test case, output YES if average of 
A
A and 
B
B is strictly greater than 
C
C, NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as identical).

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
A
,
B
,
C
≤
10
1≤A,B,C≤10
Sample 1:
Input
Output
5
5 9 6
5 8 6
5 7 6
4 9 8
3 7 2
YES
YES
NO
NO
YES
Explanation:
Test case 
1
1: The average value of 
5
5 and 
9
9 is 
7
7 which is strictly greater than 
6
6.

Test case 
2
2: The average value of 
5
5 and 
8
8 is 
6.5
6.5 which is strictly greater than 
6
6.

Test case 
3
3: The average value of 
5
5 and 
7
7 is 
6
6 which is not strictly greater than 
6
6.

Test case 
4
4: The average value of 
4
4 and 
9
9 is 
6.5
6.5 which is not strictly greater than 
8
8.

Test case 
5
5: The average value of 
3
3 and 
7
7 is 
5
5 which is strictly greater than 
2
2.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((double)(a+b)/2>c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}