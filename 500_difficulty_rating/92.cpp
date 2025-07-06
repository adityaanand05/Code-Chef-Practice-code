/*Tyre problem
There are 
N
N bikes and 
M
M cars on the road.

Each bike has 
2
2 tyres.
Each car has 
4
4 tyres.
Find the total number of tyres on the road.

Input Format
The first line will contain 
T
T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers 
N
,
M
N,M.
Output Format
For each test case, output in a single line, the total number of tyres on the road.

Constraints
1
≤
T
≤
1000
1≤T≤1000
0
≤
N
,
M
≤
100
0≤N,M≤100
Sample 1:
Input
Output
2
2 1
3 0
8
6
Explanation:
Test Case 
1
1: There are 
2
2 bikes and 
1
1 car. Each bike has 
2
2 tyres, so there are 
2
⋅
2
=
4
2⋅2=4 bike tyres. Similarly, each car has 
4
4 tyres, so there are 
1
⋅
4
=
4
1⋅4=4 car tyres. Adding the tyres of all vehicles, we get 
4
+
4
=
8
4+4=8 tyres in total.

Test Case 
2
2: There are 
3
3 bikes and 
0
0 cars. Each bike has 
2
2 tyres, so there are 
3
⋅
2
=
6
3⋅2=6 bike tyres. There are no cars, so there are 
0
⋅
4
=
0
0⋅4=0 car tyres. Adding the tyres of all vehicles, we get 
6
+
0
=
6
6+0=6 tyres in total.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<(x*2)+(y*4)<<endl;
        
    }
}