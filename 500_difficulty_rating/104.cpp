/*Battery Low
Chef's phone shows a Battery Low notification if the battery level is 
15
%
15% or less.

Given that the battery level of Chef's phone is 
X
%
X%, determine whether it would show a Battery low notification.

Input Format
First line will contain 
T
T, number of test cases. Then the test cases follow.
Each test case contains a single line of input, an integer 
X
X, denoting the battery level of the phone.
Output Format
For each test case, output in a single line 
Yes
Yes, if the battery level is 
15
%
15% or below. Otherwise, print 
No
No.

You may print each character of 
Yes
Yes and 
No
No in uppercase or lowercase (for example, 
YeS
YeS, 
YES
YES, 
yes
yes will be considered identical).

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
≤
100
1≤X≤100
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
3
15
3
65
Yes
Yes
No
Explanation:
Test Case 1: The battery level is 
15
15. Thus, it would show a battery low notification.

Test Case 2: The battery level is 
3
3, which is less than 
15
15. Thus, it would show a battery low notification.

Test Case 3: The battery level is 
65
65, which is greater than 
15
15. Thus, it would not show a battery low notification.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<=15){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}

