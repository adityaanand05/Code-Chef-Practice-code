/*Fill the Bucket
Chef has a bucket having a capacity of 
K
K liters. It is already filled with 
X
X liters of water.

Find the maximum amount of extra water in liters that Chef can fill in the bucket without overflowing.

Input Format
The first line will contain 
T
T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space separated integers 
K
K and 
X
X - as mentioned in the problem.
Output Format
For each test case, output in a single line, the amount of extra water in liters that Chef can fill in the bucket without overflowing.

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
<
K
≤
1000
1≤X<K≤1000
Sample 1:
Input
Output
2
5 4
15 6
1
9
Explanation:
Test Case 
1
1: The capacity of the bucket is 
5
5 liters but it is already filled with 
4
4 liters of water. Adding 
1
1 more liter of water to the bucket fills it to 
(
4
+
1
)
=
5
(4+1)=5 liters. If we try to fill more water, it will overflow.

Test Case 
2
2: The capacity of the bucket is 
15
15 liters but it is already filled with 
6
6 liters of water. Adding 
9
9 more liters of water to the bucket fills it to 
(
6
+
9
)
=
15
(6+9)=15 liters. If we try to fill more water, it will overflow.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<x-y<<endl;
        
    }
}
