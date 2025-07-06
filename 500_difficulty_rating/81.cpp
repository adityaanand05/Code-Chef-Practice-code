/*Is it hot or cold
Chef considers the climate HOT if the temperature is above 
20
20, otherwise he considers it COLD. You are given the temperature 
C
C, find whether the climate is HOT or COLD.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case contains a single integer, the temperature 
C
C.
Output Format
For each test case, print on a new line whether the climate is HOT or COLD.

You may print each character of the string in either uppercase or lowercase (for example, the strings hOt, hot, Hot, and HOT will all be treated as identical).

Constraints
1
≤
T
≤
50
1≤T≤50
0
≤
C
≤
40
0≤C≤40
Sample 1:
Input
Output
2
21
16
HOT
COLD
Explanation:
Test case 
1
1: The temperature is 
21
21, which is more than 
20
20. So, Chef considers the climate HOT.

Test case 
2
2: The temperature is 
16
16, which is not more than 
20
20. So, Chef considers the climate COLD.

Did you like the problem?
75 users found this helpful
C++




*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>20){
            cout << "HOT" <<endl;
        }else{
            
            cout << "COLD" <<endl;
        }
        
    }
}

