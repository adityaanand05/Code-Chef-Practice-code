/*Reach on Time
Chef has recently moved into an apartment. It takes 
30
30 minutes for Chef to reach office from the apartment.

Chef left for the office 
X
X minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single integer 
X
X.
Output Format
For each test case, output YES if Chef will reach on time, NO otherwise.

The output is case-insensitive. Thus, the strings YES, yes, yeS, and Yes are all considered the same.

Constraints
1
≤
T
≤
60
1≤T≤60
1
≤
X
≤
60
1≤X≤60
Sample 1:
Input
Output
6
30
60
14
29
31
42
YES
YES
NO
NO
YES
YES
Explanation:
Test case 1: Chef leaves 
30
30 minutes before he is supposed to reach, so he will reach the office exactly on time since it takes 
30
30 minutes to commute.

Test case 2: Chef will reach 
30
30 minutes early.

Test case 3: Chef will reach 16 minutes late.*/


#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=30){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}