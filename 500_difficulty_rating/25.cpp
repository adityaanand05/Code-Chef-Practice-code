/*Chef On Date
Chef and his girlfriend went on a date. Chef took 
X
X dollars with him, and was quite sure that this would be enough to pay the bill. At the end, the waiter brought a bill of 
Y
Y dollars. Print "YES" if Chef has enough money to pay the bill, or "NO" if he has to borrow from his girlfriend and leave a bad impression on her.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single line of input, containing two space-separated integers 
X
X and 
Y
Y.
Output Format
For each test case, output on a new line "YES" if Chef has enough money to pay the bill and "NO" otherwise.

You may print each character of the string in either uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

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
100
1≤X,Y≤100
Sample 1:
Input
Output
4
1 1
1 2
2 1
50 100
YES
NO
YES
NO
Explanation:
Test case 
1
1: Since the money Chef has is equal to the bill, he will be able to pay the bill.

Test case 
2
2: Since the money Chef has is less than the bill, he will have to borrow from his girlfriend and leave a bad impression on her.

Test case 
3
3: Since the money Chef has is greater than the bill, he will be able to pay the bill.

Test case 
4
4: Since the money Chef has is less than the bill, he will have to borrow from his girlfriend and leave a bad impression on her.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>=y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}