/*Biryani classes
According to a recent survey, Biryani is the most ordered food. Chef wants to learn how to make world-class Biryani from a MasterChef. Chef will be required to attend the MasterChef's classes for 
X
X weeks, and the cost of classes per week is 
Y
Y coins. What is the total amount of money that Chef will have to pay?

Input Format
The first line of input will contain an integer 
T
T — the number of test cases. The description of 
T
T test cases follows.
The first and only line of each test case contains two space-separated integers 
X
X and 
Y
Y, as described in the problem statement.
Output Format
For each test case, output on a new line the total amount of money that Chef will have to pay.

Constraints
1
≤
T
≤
1
0
4
1≤T≤10 
4
 
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
1 10
1 15
2 10
2 15
10
15
20
30
Explanation:
Test case 
1
1: Chef will be required to attend the MasterChef's classes for 
1
1 week and the cost of classes per week is 
10
10 coins. Hence, Chef will have to pay 
10
10 coins in total.

Test case 
2
2: Chef will be required to attend the MasterChef's classes for 
1
1 week and the cost of classes per week is 
15
15 coins. Hence, Chef will have to pay 
15
15 coins in total.

Test case 
3
3: Chef will be required to attend the MasterChef's classes for 
2
2 weeks and the cost of classes per week is 
10
10 coins. Hence, Chef will have to pay 
20
20 coins in total.

Test case 
4
4: Chef will be required to attend the MasterChef's classes for 
2
2 weeks and the cost of classes per week is 
15
15 coins. Hence, Chef will have to pay 
30
30 coins in total.

*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        cout << x*y<<endl;
        
        
    }
}
