/*Fever
Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be 
X
X °F.

A person is said to have fever if his body temperature is strictly greater than 
98
98 °F.

Determine if Chef has fever or not.

Input Format
The first line contains a single integer 
T
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer 
X
X - the body temperature of Chef in °F.
Output Format
For each test case, output YES if Chef has fever. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints
1
≤
T
≤
10
1≤T≤10
94
≤
X
≤
103
94≤X≤103
Sample 1:
Input
Output
3
98
100
96
NO
YES
NO
Explanation:
Test Case 1: Since 
X
=
98
X=98 is not greater than 
98
98, Chef does not have fever.

Test Case 2: Since 
X
=
100
X=100 is greater than 
98
98, Chef has fever.

Test Case 3: Since 
X
=
96
X=96 is not greater than 
98
98, Chef does not have fever.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>98){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}