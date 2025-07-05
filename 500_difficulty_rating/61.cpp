/*Final Population
There were initially 
X
X million people in a town, out of which 
Y
Y million people left the town and 
Z
Z million people immigrated to this town.

Determine the final population of town in millions.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case consists of three integers 
X
X, 
Y
Y and 
Z
Z.
Output Format
For each test case, output the final population of the town in millions.

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
,
Y
,
Z
≤
10
1≤X,Y,Z≤10
Y
≤
X
Y≤X
Sample 1:
Input
Output
4
3 1 2
2 2 2
4 1 8
10 1 10
4
2
11
19
Explanation:
Test case 
1
1: The initial population of the town was 
3
3 million, out of which 
1
1 million people left and 
2
2 million people entered the town. So, final population 
=
3
−
1
+
2
=
4
=3−1+2=4 million.

Test case 
2
2: The initial population of the town was 
2
2 million, out of which 
2
2 million left and 
2
2 million immigrated. The final population is thus 
2
+
2
−
2
=
2
2+2−2=2 million.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        cout<<x-y+z<<endl;
    }
}