/*Insurance
Chef bought car insurance. The policy of the insurance is:

The maximum rebatable amount for any damage is Rs 
X
X lakhs.
If the amount required for repairing the damage is 
≤
X
≤X lakhs, that amount is rebated in full.
Chef's car meets an accident and required Rs 
Y
Y lakhs for repairing.

Determine the amount that will be rebated by the insurance company.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers 
X
X and 
Y
Y.
Output Format
For each test case, output the amount (in lakhs) that will be rebated by the insurance company.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
X
,
Y
≤
30
1≤X,Y≤30
Sample 1:
Input
Output
4
5 3
5 8
4 4
15 12
3
5
4
12
Explanation:
Test case 
1
1: The damages require only Rs 
3
3 lakh which is below the upper cap, so the entire Rs 
3
3 lakh will be rebated.

Test case 
2
2: The damages require Rs 
8
8
lakh which is above the upper cap, so only Rs 
5
5 lakh will be rebated.

Test case 
3
3: The damages require only Rs 
4
4 lakh which is equal to the upper cap, so the whole Rs 
4
4 lakh will be rebated.

Test case 
4
4: The damages require Rs 
15
15 lakh which is above the upper cap, so only Rs 
12
12 lakh will be rebated.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>=y){
            cout << y <<endl;
        }else{
            
            cout << x <<endl;
        }
        
    }
}
