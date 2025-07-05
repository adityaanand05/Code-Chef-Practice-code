/*Couple Game
There are 
G
G girl and 
B
B boy students at IIT (BHU) such that 
B
>
G
B>G.

If ICM were a team game where teams could only be of size 
2
2, having exactly 
1
1 girl student and 
1
1 boy student, what would be the minimum number of boy students from IIT (BHU) who would not be able to participate?

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers 
G
G and 
B
B, the number of girl and boy students at IIT (BHU) respectively.
Output Format
For each test case, output a single integer on a new line, the minimum number of boy students from IIT (BHU) who would not be able to participate.

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
G
<
B
≤
100
1≤G<B≤100
Sample 1:
Input
Output
3
1 3
2 4
3 10
2
2
7
Explanation:
Test case 
1
1: There is only 
1
1 girl and 
3
3 boys. So, one team can be formed, and minimum 
2
2 boys will be left behind.

Test case 
2
2: There are 
2
2 girls and 
4
4 boys. So, maximum 
2
2 teams can be formed, and minimum 
2
2 boys will be left behind.

Test case 
3
3: There are 
3
3 girls and 
10
10 boys. So, maximum 
3
3 teams can be formed, and minimum 
7
7 boys will be left behind.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<y-x<<endl;
        
    }
}