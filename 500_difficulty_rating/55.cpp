/*Sleep deprivation
A person is said to be sleep deprived if he slept strictly less than 
7
7 hours in a day.

Chef was only able to sleep 
X
X hours yesterday. Determine if he is sleep deprived or not.

Input Format
The first line contains a single integer 
T
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer 
X
X — the number of hours Chef slept.
Output Format
For each test case, output YES if Chef is sleep-deprived. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints
1
≤
T
≤
20
1≤T≤20
1
≤
X
≤
15
1≤X≤15
Sample 1:
Input
Output
3
4
7
10
YES
NO
NO
Explanation:
Test Case 1: Since 
4
<
7
4<7, Chef is sleep deprived.

Test Case 2: Since 
7
≥
7
7≥7, Chef is not sleep deprived.

Test Case 3: Since 
10
≥
7
10≥7, Chef is not sleep deprived.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<7){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}
