/*Who is taller!
Alice and Bob were having an argument about which of them is taller than the other. Charlie got irritated by the argument, and decided to settle the matter once and for all.

Charlie measured the heights of Alice and Bob, and got to know that Alice's height is 
X
X centimeters and Bob's height is 
Y
Y centimeters. Help Charlie decide who is taller.

It is guaranteed that 
X
≠
Y
X=Y.

Input Format
The first line of input will contain an integer 
T
T — the number of test cases. The description of 
T
T test cases follows.
The first and only line of each test case contains two integers 
X
X and 
Y
Y, as described in the problem statement.
Output Format
For each test case, output on a new line 
A
A if Alice is taller than Bob, else output 
B
B. The output is case insensitive, i.e, both 
A
A and 
a
a will be accepted as correct answers when Alice is taller.

Constraints
1
≤
T
≤
1000
1≤T≤1000
100
≤
X
,
Y
≤
200
100≤X,Y≤200
X
≠
Y
X=Y
Sample 1:
Input
Output
2
150 160
160 150
B
A
Explanation:
Test case 
1
1: In this case, 
150
<
160
150<160 so Bob is taller than Alice.

Test case 
2
2: In this case, 
160
>
150
160>150 so Alice is taller than Bob.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout << "A" <<endl;
        }else{
            
            cout << "B" <<endl;
        }
        
    }
    return 0;
}