/*Bucket and Water Flow
Alice has a bucket of water initially having 
W
W litres of water in it. The maximum capacity of the bucket is 
X
X liters.

Alice turned on the tap and the water starts flowing into the bucket at a rate of 
Y
Y litres/hour. She left the tap running for exactly 
Z
Z hours. Determine whether the bucket has been overflown, filled exactly, or is still left unfilled.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of a single line of input containing four space-separated integers 
W
,
 
X
,
 
Y
,
 
Z
W, X, Y, Z.
Output Format
For each test case, print the answer on a new line:

If the bucket has overflown print overflow
If it is exactly filled print filled
If it is still unfilled, print unfilled
You may print each character of the string in uppercase or lowercase (for example, the strings filled, FIlled, fiLLed, and FILLED will all be treated as identical).

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
1000
1≤W,X,Y,Z≤1000
Subtasks
Subtask 1 (100 points):
Original constraints.
Sample 1:
Input
Output
4
1 2 3 4 
10 70 10 6 
2 100 4 3
3 3 2 1
overFlow
filled
Unfilled
overflow
Explanation:
Test case 
1
1: Initially the bucket had 
1
1 litre of water, we then added 
3
3 litres of water for 
4
4 hours. Thus, the total bucket inflow was 
1
+
3
×
4
=
13
1+3×4=13 litres. Since this is greater than the capacity of 
2
2 litres, the bucket will OVERFLOW

Test case 
2
2: Initially the bucket had 
10
10 litres of water, we then added 
10
10 litres of water for 
6
6 hours. Thus, the total bucket inflow was 
10
+
10
×
6
=
70
10+10×6=70 litres. Since this is equal to the capacity of 
70
70 litres, the bucket will be FILLED

Test case 
3
3: Initially the bucket had 
2
2 litres of water, we then added 
4
4 litres of water for 
3
3 hours. Thus, the total bucket inflow was 
2
+
4
×
3
=
14
2+4×3=14 litres. Since this is lesser than the capacity of 
100
100 litres, the bucket will be UNFILLED.

Test case 
4
4: Initially the bucket had 
3
3 litres of water, we then added 
2
2 litres of water for 
1
1 hours. Thus, the total bucket inflow was 
3
+
2
×
1
=
5
3+2×1=5 litres. Since this is more than the capacity of 
3
3 litres, the bucket will OVERFLOW.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(w+y*z>x){
            cout << "overFlow" <<endl;
        }else if(w+y*z==x){
            
            cout << "filled" <<endl;
        }else if(w+y*z<x){
            
            cout << "Unfilled" <<endl;
        }
        
    }
}