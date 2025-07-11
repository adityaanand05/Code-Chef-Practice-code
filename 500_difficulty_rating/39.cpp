/*Get Subscription
Chef wants to conduct a lecture for which he needs to set up an online meeting of exactly 
X
X minutes.

The meeting platform supports a meeting of maximum 
30
30 minutes without subscription and a meeting of unlimited duration with subscription.

Determine whether Chef needs to take a subscription or not for setting up the meet.

Input Format
First line will contain 
T
T, the number of test cases. Then the test cases follow.
Each test case contains a single integer 
X
X - denoting the duration of the lecture.
Output Format
For each test case, print in a single line, YES if Chef needs to take the subscription, otherwise print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

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
Sample 1:
Input
Output
4
50
3
30
80
YES
NO
NO
YES
Explanation:
Test Case 
1
1: Without subscription, the platform allows only 
30
30 minutes of duration. Since Chef needs to conduct a lecture of 
50
50 minutes, he needs to buy the subscription.

Test Case 
2
2: Without subscription, the platform allows 
30
30 minutes of duration. Since Chef needs to conduct a lecture of 
3
3 minutes only, he does not need to buy the subscription.

Test Case 
3
3: Without subscription, the platform allows 
30
30 minutes of duration. Since Chef needs to conduct a lecture of 
30
30 minutes only, he does not need to buy the subscription.

Test Case 
4
4: Without subscription, the platform allows only 
30
30 minutes of duration. Since Chef needs to conduct a lecture of 
80
80 minutes, he needs to buy the subscription.*/


#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>30){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}