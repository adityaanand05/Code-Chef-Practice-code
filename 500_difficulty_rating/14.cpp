/*IPL Ticket Rush
DAIICT college students want to attend an IPL match.

A total of 
N
N students from the college want to go while only 
M
M tickets are available for the match.

Determine how many students won't be able to book tickets.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
N
N and 
M
M — the number of students wants to go and the total number of tickets available, respectively.
Output Format
For each test case, output on a new line the number of students who won't be able to book tickets.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
,
M
≤
1
0
5
1≤N,M≤10 
5
 
Sample 1:
Input
Output
4
5 3
5 7
4 1
8 8
2
0
3
0
Explanation:
Test case 
1
1: There are 
5
5 students who want to go, and only 
3
3 tickets are available. Hence 
2
2 students won't be able to get tickets.

Test case 
2
2: There are 
5
5 students who want to go, and 
7
7 tickets are available. So, every one of them will get the tickets.

Test case 
3
3: There are 
4
4 students who want to go, and only 
1
1 ticket is available. Hence 
3
3 students won't be able to get tickets.

Test case 
4
4: There are 
8
8 students who want to go, and 
8
8 tickets are available. So, every one of them will get the tickets.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y>=x){
            cout << 0 <<endl;
        }else{
            
            cout << x-y <<endl;
        }
        
    }
    return 0;
}