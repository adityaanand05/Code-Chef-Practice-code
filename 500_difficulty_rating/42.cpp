/*Waiting Time
Chef is eagerly waiting for a piece of information. His secret agent told him that this information would be revealed to him after 
K
K weeks.

X
X days have already passed and Chef is getting restless now. Find the number of remaining days Chef has to wait for, to get the information.

It is guaranteed that the information has not been revealed to the Chef yet.

Input Format
The first line of input will contain an integer 
T
T — the number of test cases. The description of 
T
T test cases follows.
The first and only line of each test case contains two space-separated integers 
K
K and 
X
X, as described in the problem statement.
Output Format
For each test case, output the number of remaining days that Chef will have to wait for.

Constraints
1
≤
T
≤
500
1≤T≤500
1
≤
K
≤
10
1≤K≤10
1
≤
X
<
7
⋅
K
1≤X<7⋅K
Sample 1:
Input
Output
4
1 5
1 6
1 1
1 2
2
1
6
5
Explanation:
Test case 
1
1: The information will be revealed to the Chef after 
1
1 week, which is equivalent to 
7
7 days. Chef has already waited for 
5
5 days, so he needs to wait for 
2
2 more days in order to get the information.

Test case 
2
2: The information will be revealed to the Chef after 
1
1 week, which is equivalent to 
7
7 days. Chef has already waited for 
6
6 days, so he needs to wait for 
1
1 more day in order to get the information.

Test case 
3
3: The information will be revealed to the Chef after 
1
1 week, which is equivalent to 
7
7 days. Chef has already waited for 
1
1 day, so he needs to wait for 
6
6 more days in order to get the information.

Test case 
4
4: The information will be revealed to the Chef after 
1
1 week, which is equivalent to 
7
7 days. Chef has already waited for 
2
2 days, so he needs to wait for 
5
5 more days in order to get the information.

Did you like the problem?
83 users found this helpful
C++

	}


*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
	    int k,x,ans;
	    cin>>k>>x;
	    k=k*7;
	    ans= k-x;
	    cout<<ans<<endl;
	    
	}
    return 0;
}