/*MATH1 Enrolment
For the upcoming semester, the admins of your university decided to keep a total of 
X
X seats for the MATH-1 course. A student interest survey was conducted by the admins and it was found that 
Y
Y students were interested in taking up the MATH-1 course.

Find the minimum number of extra seats that the admins need to add into the MATH-1 course to make sure that every student who is interested in taking the course would be able to do so.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two-space separated integers on a single line, 
X
X and 
Y
Y — the current number of seats up for enrolment and the number of students interested in taking up the course in the upcoming semester, respectively.
Output Format
For each test case, output on a new line the minimum number of seats required to be added.

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
≤
10
5
1≤X,Y≤10 
5
 
Sample 1:
Input
Output
4
1 1
12 34
50 49
49 50
0
22
0
1
Explanation:
Test case 
1
1: Exactly 
1
1 seat is available for enrolment, and exactly 
1
1 student is interested in taking up the course, hence addition of more seats is not required.

Test case 
2
2: 
12
12 seats are available for enrolment but 
34
34 students are interested in taking up the course, hence the admins would have to add 
34
−
12
=
22
34−12=22 more seats to make sure that every student interested in the course gets a seat.

Test case 
3
3: 
50
50 seats are available for enrolment and 
49
49 students are interested in taking up the course, hence addition of more seats is not required.

Test case 
4
4: 
49
49 seats are available for enrolment, but 
50
50 students are interested in taking up the course, hence the admins would have to add 
50
−
49
=
1
50−49=1 more seat to make sure that every student interested in the course gets a seat.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout << y-x <<endl;
        }else{
            
            cout << 0 <<endl;
        }
        
    }
}