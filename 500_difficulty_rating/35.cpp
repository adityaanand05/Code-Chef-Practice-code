/*Four Tickets
Four friends want to attend a concert. Each ticket costs 
X
X rupees.
They have decided to go to the concert if and only if the total cost of the tickets does not exceed 
1000
1000 rupees.

Determine whether they will be going to the concert or not.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single integer 
X
X, the cost of each ticket.
Output Format
For each test case, output YES if they will be going to the concert, NO otherwise.

You can print each character in uppercase or lowercase. For example, the strings YES, yes, Yes, and yES, are all considered identical.

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
≤
1000
1≤X≤1000
Sample 1:
Input
Output
4
100
500
250
1000
YES
NO
YES
NO
Explanation:
Test case 
1
1: The total cost of all tickets is 
100
⋅
4
=
400
100⋅4=400 which is 
≤
1000
≤1000. Thus, they will go to the concert.

Test case 
2
2: The total cost of all tickets is 
500
⋅
4
=
2000
500⋅4=2000 which is 
>
1000
>1000. Thus, they will not go to the concert.

Test case 
3
3: The total cost of all tickets is 
250
⋅
4
=
1000
250⋅4=1000 which is 
≤
1000
≤1000. Thus, they will go to the concert.

Test case 
4
4: The total cost of all tickets is 
1000
⋅
4
=
4000
1000⋅4=4000 which is 
>
1000
>1000. Thus, they will not go to the concert.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x*4<=1000){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}