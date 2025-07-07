/*Monopoly in Chefland
Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.

There are exactly 
3
3 companies in the market each of whose revenues are denoted by 
R
1
R 
1
​
 , 
R
2
R 
2
​
  and 
R
3
R 
3
​
  respectively. A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors.

Given the revenue of the 
3
3 companies, help Chef determine if any of them has a monopolistic advantage.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single line of input containing three space separated integers 
R
1
R 
1
​
 , 
R
2
R 
2
​
  and 
R
3
R 
3
​
  denoting the revenue of the three companies respectively.
Output Format
For each test case, output 
YES
YES if any of the companies has a monopolistic advantage over its competitors, else output 
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
1000
1≤T≤1000
1
≤
R
1
,
R
2
,
R
3
≤
10
1≤R 
1
​
 ,R 
2
​
 ,R 
3
​
 ≤10
Sample 1:
Input
Output
4
1 1 1
1 2 4
2 10 3
1 2 3
No
Yes
Yes
No
Explanation:
Test case 1: All the companies have equal revenue so none have a monopolistic advantage.

Test case 2: The third company has a monopolistic advantage as 
1
+
2
<
4
1+2<4.

Test case 3: The second company has a monopolistic advantage as 
2
+
3
<
10
2+3<10.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y<z||x+z<y||y+z<x){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}