/*Chef and Wire Frames
Chef has a rectangular plate of length 
N
c
m
Ncm and width 
M
c
m
Mcm. He wants to make a wireframe around the plate. The wireframe costs 
X
X rupees per cm.

Determine the cost Chef needs to incur to buy the wireframe.

Input Format
First line will contain 
T
T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers 
N
,
M
,
N,M, and 
X
X — the length of the plate, width of the plate, and the cost of frame per cm.
Output Format
For each test case, output in a single line, the price Chef needs to pay for the wireframe.

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
M
,
X
≤
1000
1≤N,M,X≤1000
Sample 1:
Input
Output
3
10 10 10
23 3 12
1000 1000 1000
400
624
4000000
Explanation:
Test case 
1
1: The total length of the frame is 
2
⋅
10
+
2
⋅
10
=
40
2⋅10+2⋅10=40 cms. Since the cost is 
10
10 per cm, the total cost would be 
10
⋅
40
=
400
10⋅40=400.

Test case 
2
2: The total length of the frame is 
2
⋅
23
+
2
⋅
3
=
52
2⋅23+2⋅3=52 cms. Since the cost is 
12
12 per cm, the total cost would be 
52
⋅
12
=
624
52⋅12=624.

Test case 
3
3: The total length of the frame is 
2
⋅
1000
+
2
⋅
1000
=
4000
2⋅1000+2⋅1000=4000 cms. Since the cost is 
1000
1000 per cm, the total cost would be 
4000
⋅
1000
=
4000000
4000⋅1000=4000000.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        cout<<(2*x+2*y)*z<<endl;
        
    }
}