/*Bone Appetit
Trick or treat, bags of sweets, ghosts are walking down the street

It's Halloween and Suri Bhai is out to get his treats.
There are two sectors in his neighborhood, "Bones" and "Blood". They have 
N
N and 
M
M people, respectively.

Each person in "Bones" will hand out 
X
X treats, and each person in "Blood" will hand out 
Y
Y treats.
How many treats does Suri Bhai get from visiting everyone in his neighborhood in total?

Input Format
The first line of input contains two space-separated integers 
N
N and 
M
M — the number of people in "Bones" and "Blood", respectively.
The second line of input contains two space-separated integers 
X
X and 
Y
Y — the number of treats handed out by each person in "Bones" and "Blood", respectively.
Output Format
For each test case output a single integer: the total number of treats Suri Bhai will receive.

Constraints
0
≤
N
,
M
≤
100
0≤N,M≤100
0
≤
X
,
Y
≤
1000
0≤X,Y≤1000
Sample 1:
Input
Output
4 2
5 6
32
Explanation:
"Bones" has 
4
4 people, each of who will give out 
5
5 treats, for a total of 
4
×
5
=
20
4×5=20 treats.
"Blood" has 
2
2 people, each of who will give out 
6
6 treats, for a total of 
2
×
6
=
12
2×6=12 treats.
The total number of treats is 
20
+
12
=
32
20+12=32.
Sample 2:
Input
Output
5 0
0 2
0
Explanation:
"Bones" has 
5
5 people, each of who will give out 
0
0 treats, for a total of 
5
×
0
=
0
5×0=0 treats.
"Blood" has 
0
0 people, each of who will give out 
2
2 treats, for a total of 
0
×
2
=
0
0×2=0 treats.
The total number of treats is 
0
+
0
=
0
0+0=0.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t,r;
    int x,y;
    cin>>t>>r;
    cin>>x>>y;
    cout<<(t*x)+(r*y);
    
    return 0;
}