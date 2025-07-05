/*Good Investment or Not
Chef has invested his money at an interest rate of 
X
X percent per annum while the current inflation rate is 
Y
Y percent per annum.

An investment is called good if and only if the interest rate of the investment is at least twice of the inflation rate.
Determine whether the investment made by Chef is good or not.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two integers 
X
X and 
Y
Y, the interest rate and the current inflation rate respectively.
Output Format
For each test case, output YES if the investment is good, NO otherwise.

You can output any letter in any case. For example YES, yes, yES are all considered same.

Constraints
1
≤
T
≤
400
1≤T≤400
1
≤
X
,
Y
≤
20
1≤X,Y≤20
Sample 1:
Input
Output
5
7 4
6 3
2 4
10 10
20 1
NO
YES
NO
NO
YES
Explanation:
Test case 
1
1: The interest rate is 
7
7 and the current inflation rate is 
4
4. Since the interest rate is less than twice of current inflation rate, the investment is not good.

Test case 
2
2: The interest rate is 
6
6 and the current inflation rate is 
3
3. Since the interest rate is equal to twice of current inflation rate, the investment is good.

Test case 
3
3: The interest rate is 
2
2 and the current inflation rate is 
4
4. Since the interest rate is less than twice of current inflation rate, the investment is not good.

Test case 
4
4: The interest rate is 
10
10 and the current inflation rate is 
10
10. Since the interest rate is less than twice of current inflation rate, the investment is not good.

Test case 
5
5: The interest rate is 
20
20 and the current inflation rate is 
1
1. Since the interest rate is greater than twice of current inflation rate, the investment is good.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>=2*y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}