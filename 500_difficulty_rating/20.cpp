/*Reach the Target
There is a cricket match going on between two teams 
A
A and 
B
B.

Team 
B
B is batting second and got a target of 
X
X runs. Currently, team 
B
B has scored 
Y
Y runs. Determine how many more runs Team 
B
B should score to win the match.

Note: The target score in cricket matches is one more than the number of runs scored by the team that batted first.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
X
X and 
Y
Y, the target for team 
B
B and the current score of team 
B
B respectively.
Output Format
For each test case, output how many more runs team 
B
B should score to win the match.

Constraints
1
≤
T
≤
10
1≤T≤10
50
≤
Y
<
X
≤
200
50≤Y<X≤200
Sample 1:
Input
Output
4
200 50
100 99
130 97
53 51
150
1
33
2
Explanation:
Test case 
1
1: The target is 
200
200 runs and team 
B
B has already made 
50
50 runs. Thus, the team needs to make 
200
−
50
=
150
200−50=150 runs more, to win the match.

Test case 
2
2: The target is 
100
100 runs and team 
B
B has already made 
99
99 runs. Thus, the team needs to make 
100
−
99
=
1
100−99=1 runs more, to win the match.

Test case 
3
3: The target is 
130
130 runs and team 
B
B has already made 
97
97 runs. Thus, the team needs to make 
130
−
97
=
33
130−97=33 runs more, to win the match.

Test case 
4
4: The target is 
53
53 runs and team 
B
B has already made 
51
51 runs. Thus, the team needs to make 
53
−
51
=
2
53−51=2 runs more, to win the match.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<x-y<<endl;
        
    }
    return 0;
}