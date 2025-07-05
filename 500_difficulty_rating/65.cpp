/*Car Trip
Chef rented a car for a day.

Usually, the cost of the car is Rs 
10
10 per km. However, since Chef has booked the car for the whole day, he needs to pay for at least 
300
300 kms even if the car runs less than 
300
300 kms.

If the car ran 
X
X kms, determine the cost Chef needs to pay.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single integer 
X
X - denoting the number of kms Chef travelled.
Output Format
For each test case, output the cost Chef needs to pay.

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
5
800
3
299
301
300
8000
3000
3000
3010
3000
Explanation:
Test case 
1
1: The car runs for 
800
800 kms. Thus, he needs to pay 
800
⋅
10
=
8000
800⋅10=8000 rupees.

Test case 
2
2: The car runs for 
3
3 kms. However, since Chef booked the car for whole day, he needs to pay for at least 
300
300 kms. Thus, he needs to pay 
300
⋅
10
=
3000
300⋅10=3000 rupees.

Test case 
3
3: The car runs for 
299
299 kms. However, since Chef booked the car for whole day, he needs to pay for at least 
300
300 kms. Thus, he needs to pay 
300
⋅
10
=
3000
300⋅10=3000 rupees.

Test case 
4
4: The car runs for 
301
301 kms. Thus, he needs to pay 
301
⋅
10
=
3010
301⋅10=3010 rupees.

Test case 
5
5: The car runs for 
300
300 kms. Thus, he needs to pay 
300
⋅
10
=
3000
300⋅10=3000 rupees.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=300){
            cout << x*10 <<endl;
        }else{
            
            cout << 300*10 <<endl;
        }
        
    }
}
