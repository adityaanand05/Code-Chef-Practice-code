/*Best Coupon
Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. 
X
X. Chef can use one of the following two coupons to avail a discount.

Get 
10
10 percent off on the bill amount
Get a flat discount of Rs. 
100
100 on the bill amount
What is the maximum discount Chef can avail?

Input Format
The first line contains a single integer 
T
T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains a single integer 
X
X - the bill amount before discount.
Output Format
For each testcase, output the maximum discount Chef can avail.

Constraints
1
≤
T
≤
100
1≤T≤100
100
≤
X
≤
10000
100≤X≤10000
X
X is a multiple of 
100
100.
Sample 1:
Input
Output
3
300
1300
1000
100
130
100
Explanation:
Test case 1: Using the second coupon, Chef can get a flat discount of Rs. 
100
100, which is maximum.

Test case 2: Using the first coupon, Chef can get a 
10
10 percent discount of Rs. 
130
130, which is maximum.

Test case 3: No matter which coupon Chef chooses Chef will get a discount of Rs. 
100
100.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x*0.1>x-(x-100)){
            cout << x*0.1 <<endl;
        }else{
            
            cout << 100 <<endl;
        }
        
    }
}
