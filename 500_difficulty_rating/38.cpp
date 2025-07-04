/*Sum it
Bob received an assignment from his school: he has two numbers 
A
A and 
B
B, and he has to find the sum of these two numbers.
Alice, being a good friend of Bob, told him that the answer to this question is 
C
C.
Bob doesn't completely trust Alice and asked you to tell him if the answer given by Alice is correct or not.
If the answer is correct print "YES", otherwise print "NO" (without quotes).

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case consists of three space-separated integers 
A
,
B
,
A,B, and 
C
C.
Output Format
For each test case, output on a new line the answer: YES if Alice gave the right answer, and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase, i.e, the outputs Yes, YES, yEs and yes will be treated as equivalent.

Constraints
1
≤
T
≤
100
1≤T≤100
0
≤
A
,
B
,
C
≤
100
0≤A,B,C≤100
Sample 1:
Input
Output
3
1 2 3
4 5 9
2 3 6
YES
YES
NO
Explanation:
Test case 
1
1: 
1
+
2
=
3
1+2=3, so Alice's answer is correct.

Test case 
2
2: 
4
+
5
=
9
4+5=9, so Alice's answer is correct.

Test case 
3
3: 
2
+
3
=
5
2+3=5 which doesn't equal 
6
6, so Alice's answer is incorrect.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y==z){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}