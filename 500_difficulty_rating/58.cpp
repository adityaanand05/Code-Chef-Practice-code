/*Water Requirement
Finally, after purchasing a water cooler during the April long challenge, Chef noticed that his water cooler requires 
2
2 liters of water to cool for one hour.

How much water (in liters) would be required by the cooler to cool for 
N
N hours?

Input Format
The first line of input will contain an integer 
T
T — the number of test cases. The description of 
T
T test cases follows.
The first and only line of each test case contains an integer 
N
N, as described in the problem statement.
Output Format
For each test case, output the number of liters of water required by the water cooler to cool for 
N
N hours.

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
≤
1000
1≤N≤1000
Sample 1:
Input
Output
2
1
2
2
4
Explanation:
Test case 
1
1: As mentioned in the problem statement, 
2
2 liters of water is required by the water cooler to cool for 
1
1 hour.

Test case 
2
2: 
4
4 liters of water is required by the water cooler to cool for 
2
2 hours.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<x*2<<endl;
        
    }
}