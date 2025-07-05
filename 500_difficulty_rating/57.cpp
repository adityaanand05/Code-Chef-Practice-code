/*Chef and Chapters
This semester, Chef took 
X
X courses. Each course has 
Y
Y units and each unit has 
Z
Z chapters in it.

Find the total number of chapters Chef has to study this semester.

Input Format
The first line will contain 
T
T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers 
X
,
Y
,
X,Y, and 
Z
Z.
Output Format
For each test case, output in a single line the total number of chapters Chef has to study this semester.

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
,
Y
,
Z
≤
1000
1≤X,Y,Z≤1000
Sample 1:
Input
Output
3
1 1 1
2 1 2
1 2 3
1
4
6
Explanation:
Test case 
1
1: There is only 
1
1 course with 
1
1 unit. The unit has 
1
1 chapter. Thus, the total number of chapters is 
1
1.

Test case 
2
2: There are 
2
2 courses with 
1
1 unit each. Thus, there are 
2
2 units. Each unit has 
2
2 chapters. Thus, the total number of chapters is 
4
4.

Test case 
3
3: There is only 
1
1 course with 
2
2 units. Each unit has 
3
3 chapters. Thus, the total number of chapters is 
6
6.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        cout<<x*y*z<<endl;
    }    
}