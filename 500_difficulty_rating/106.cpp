/*The Mango Truck
You are given that a mango weighs 
X
X kilograms and a truck weighs 
Y
Y kilograms. You want to cross a bridge that can withstand a weight of 
Z
Z kilograms.

Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.

Input Format
First line will contain 
T
T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, three integers 
X
,
Y
,
Z
X,Y,Z - the weight of mango, the weight of truck and the weight the bridge can withstand respectively.
Output Format
For each test case, output in a single line the maximum number of mangoes that you can load in the truck.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
X
≤
Y
≤
Z
≤
100
1≤X≤Y≤Z≤100
Sample 1:
Input
Output
4
2 5 11
4 10 20
1 1 1
6 40 90
3
2
0
8
Explanation:
Test case 
1
1: You can load 
3
3 mangoes at maximum. The total weight is 
3
×
2
+
5
=
11
≤
11
3×2+5=11≤11. Thus, the truck can safely cross the bridge with 
3
3 mangoes. If you load 
4
4 mangoes, the total weight is 
4
×
2
+
5
=
13
>
11
4×2+5=13>11.

Test case 
2
2: You can load 
2
2 mangoes at maximum. The total weight is 
2
×
4
+
10
=
18
≤
20
2×4+10=18≤20. Thus, the truck can safely cross the bridge with 
2
2 mangoes.

Test case 
3
3: You can load 
0
0 mangoes at maximum. The total weight is 
0
×
1
+
1
=
1
≤
1
0×1+1=1≤1. Thus, the truck can safely cross the bridge only if there are 
0
0 mangoes.

Test case 
4
4: You can load 
8
8 mangoes at maximum. The total weight is 
6
×
8
+
40
=
88
≤
90
6×8+40=88≤90. Thus, the truck can safely cross the bridge with 
8
8 mangoes.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int m=0;
        while(m*x+y<=z){
            m++;
        }
        cout<<m-1<<endl;
        
    }
}


//AI answer
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        // Calculate the maximum number of mangoes using the formula (z - y) / x
        int max_mangoes = (z - y) / x;
        cout << max_mangoes << endl;
    }
    return 0;
}