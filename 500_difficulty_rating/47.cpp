/*Bidding
Alice, Bob and Charlie are bidding for an artifact at an auction.
Alice bids 
A
A rupees, Bob bids 
B
B rupees, and Charlie bids 
C
C rupees (where 
A
A, 
B
B, and 
C
C are distinct).

According to the rules of the auction, the person who bids the highest amount will win the auction.
Determine who will win the auction.

Input Format
The first line contains a single integer 
T
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains three integers 
A
A, 
B
B, and 
C
C, — the amount bid by Alice, Bob, and Charlie respectively.
Output Format
For each test case, output who (out of Alice, Bob, and Charlie) will win the auction.

You may print each character of Alice, Bob, and Charlie in uppercase or lowercase (for example, ALICE, aliCe, aLIcE will be considered identical).

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
A
,
B
,
C
≤
1000
1≤A,B,C≤1000
A
A, 
B
B, and 
C
C are distinct.
Sample 1:
Input
Output
4
200 100 400
155 1000 566
736 234 470
124 67 2
Charlie
Bob
Alice
Alice
Explanation:
Test Case 
1
1: Charlie wins the auction since he bid the highest amount.

Test Case 
2
2: Bob wins the auction since he bid the highest amount.

Test Case 
3
3: Alice wins the auction since she bid the highest amount.

Test Case 
4
4: Alice wins the auction since she bid the highest amount.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x>y&&x>z){
            cout << "Alice" <<endl;
        }else if(y>z&&y>x){
            
            cout << "Bob" <<endl;
        }else{
            cout <<"Charlie"<<endl;
        }
        
    }
}

