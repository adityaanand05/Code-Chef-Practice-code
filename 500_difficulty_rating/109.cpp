/*Miami GP
Chef has finally got the chance of his lifetime to drive in the 
F
1
F1 tournament. But, there is one problem. Chef did not know about the 107% rule and now he is worried whether he will be allowed to race in the main event or not.

Given the fastest finish time as 
X
X seconds and Chef's finish time as 
Y
Y seconds, determine whether Chef will be allowed to race in the main event or not.

Note that, Chef will only be allowed to race if his finish time is within 107% of the fastest finish time.

Input Format
First line will contain 
T
T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, two space separated integers 
X
X and 
Y
Y denoting the fastest finish time and Chef's finish time respectively.
Output Format
For each test case, output 
YES
YES if Chef will be allowed to race in the main event, else output 
NO
NO.

You may print each character of the string in uppercase or lowercase (for example, the strings 
YeS
YeS, 
yEs
yEs, 
yes
yes and 
YES
YES will all be treated as identical).

Constraints
1
≤
T
≤
2
⋅
10
4
1≤T≤2⋅10 
4
 
1
≤
X
≤
Y
≤
200
1≤X≤Y≤200
Sample 1:
Input
Output
4
1 2
15 16
15 17
100 107
NO
YES
NO
YES
Explanation:
Test case 
1
1: The fastest car finished in 
1
1 second. Thus, Chef should have finished on or before 
1.07
1.07 seconds to ensure qualification but he finished in 
2
2 seconds. Hence, Chef will not be allowed to race in the main event.

Test case 
2
2: The fastest car finished in 
15
15 seconds. Thus, Chef should have finished on or before 
16.05
16.05 seconds to ensure qualification and he managed to finish in 
16
16 seconds. Hence, Chef will be allowed to race in the main event.

Test case 
3
3: The fastest car finished in 
15
15 seconds. Thus, Chef should have finished on or before 
16.05
16.05 seconds to ensure qualification but he finished in 
17
17 seconds. Hence, Chef will not be allowed to race in the main event.

Test case 
4
4: The fastest car finished in 
100
100 seconds. Thus, Chef should have finished on or before 
107
107 seconds to ensure qualification and he finished just in time for qualification. Hence, Chef will be allowed to race in the main event.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x * 1.07 >= y) {
            cout << "YES" << endl;
        } else {

            cout << "NO" << endl;
        }

    }
}