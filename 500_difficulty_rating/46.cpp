/*Rain in Chefland
In Chefland, precipitation is measured using a rain gauge in millimetre per hour.

Chef categorises rainfall as:

LIGHT, if rainfall is less than 
3
3 millimetre per hour.
MODERATE, if rainfall is greater than equal to 
3
3 millimetre per hour and less than 
7
7 millimetre per hour.
HEAVY if rainfall is greater than equal to 
7
7 millimetre per hour.
Given that it rains at 
X
X millimetre per hour on a day, find whether the rain is LIGHT, MODERATE, or HEAVY.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single integer 
X
X — the rate of rainfall in millimetre per hour.
Output Format
For each test case, output on a new line, whether the rain is LIGHT, MODERATE, or HEAVY.

You may print each character in lowercase or uppercase. For example, LIGHT, light, Light, and liGHT, are all identical.

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
20
1≤X≤20
Sample 1:
Input
Output
4
1
20
3
7
LIGHT
HEAVY
MODERATE
HEAVY
Explanation:
Test case 
1
1: The rate of precipitation is less than 
3
3. Thus, the rain is LIGHT.

Test case 
2
2: The rate of precipitation is greater than equal to 
7
7. Thus, the rain is HEAVY.

Test case 
3
3: The rate of precipitation is greater than equal to 
3
3 and less than 
7
7. Thus, the rain is MODERATE.

Test case 
4
4: The rate of precipitation is greater than equal to 
7
7. Thus, the rain is HEAVY.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<3){
            cout << "LIGHT" <<endl;
        }else if(x>=3&&x<7){
            
            cout << "MODERATE" <<endl;
        }else{
            cout<<"HEAVY"<<endl;
        }
        
    }
}
