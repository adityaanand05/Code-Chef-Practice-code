/*Multivitamin Tablets
The doctor prescribed Chef to take a multivitamin tablet 
3
3 times a day for the next 
X
X days.

Chef already has 
Y
Y multivitamin tablets.

Determine if Chef has enough tablets for these 
X
X days or not.

Input Format
The first line contains a single integer 
T
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers 
X
X and 
Y
Y — the number of days Chef needs to take tablets and the number of tablets Chef already has.
Output Format
For each test case, output YES if Chef has enough tablets for these 
X
X days. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints
1
≤
T
≤
2000
1≤T≤2000
1
≤
X
≤
100
1≤X≤100
0
≤
Y
≤
1000
0≤Y≤1000
Sample 1:
Input
Output
4
1 10
12 0
10 29
10 30
YES
NO
NO
YES
Explanation:
Test Case 1: Chef has 
10
10 tablets and Chef needs 
3
3 tablets for 
1
1 day. Therefore Chef has enough tablets.

Test Case 2: Chef has 
0
0 tablets and Chef needs 
36
36 tablets for 
12
12 days. Therefore Chef does not have enough tablets.

Test Case 3: Chef has 
29
29 tablets and Chef needs 
30
30 tablets for 
10
10 days. Therefore Chef does not have enough tablets.

Test Case 4: Chef has 
30
30 tablets and Chef needs 
30
30 tablets for 
10
10 days. Therefore Chef has enough tablets.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(3*x<=y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}