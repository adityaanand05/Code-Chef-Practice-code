/*Overspeeding Fine
Chef was driving on a highway at a speed of 
X
X km/hour.

To avoid accidents, there are fine imposed on overspeeding as follows:

No fine if the speed of the car 
≤
70
≤70 km/hour.
Rs 
500
500 fine if the speed of the car is strictly greater than 
70
70 and 
≤
100
≤100.
Rs 
2000
2000 fine if the speed of the car is strictly greater than 
100
100.
Determine the fine Chef needs to pay.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single integer 
X
X denoting the speed of Chef's car.
Output Format
For each test case, output the fine paid by Chef.

Constraints
1
≤
T
≤
200
1≤T≤200
1
≤
X
≤
200
1≤X≤200
Sample 1:
Input
Output
7
40
110
70
100
69
101
85
0
2000
0
500
0
2000
500
Explanation:
Test case 
1
1: The speed is 
≤
70
≤70. Thus, Chef does not need to pay any fine.

Test case 
2
2: The speed is greater than 
100
100. Thus, Chef needs to pay 
2000
2000 as fine.

Test case 
3
3: The speed is 
≤
70
≤70. Thus, Chef does not need to pay any fine.

Test case 
4
4: The speed is greater than 
70
70 and 
≤
100
≤100. Thus, Chef needs to pay 
500
500 as fine amount.

Test case 
5
5: The speed is 
≤
70
≤70. Thus, Chef does not need to pay any fine.

Test case 
6
6: The speed is greater than 
100
100. Thus, Chef needs to pay 
2000
2000 as fine.

Test case 
7
7: The speed is greater than 
70
70 and 
≤
100
≤100. Thus, Chef needs to pay 
500
500 as fine amount.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>70&&x<=100){
            cout << 500 <<endl;
        }else if(x>100){
            
            cout << 2000 <<endl;
        }else{
            cout<<0<<endl;
        }
        
    }
}

