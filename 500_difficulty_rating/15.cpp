/*Audible Range
Chef's dog binary hears frequencies starting from 
67
67 Hertz to 
45000
45000 Hertz (both inclusive).

If Chef's commands have a frequency of 
X
X Hertz, find whether binary can hear them or not.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single integer 
X
X - the frequency of Chef's commands in Hertz.
Output Format
For each test case, output on a new line YES, if binary can hear Chef's commands. Otherwise, print NO.

The output is case-insensitive. Thus, the strings YES, yes, yeS, and Yes are all considered the same.

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
≤
1
0
6
1≤X≤10 
6
 
Sample 1:
Input
Output
5
42
67
402
45000
45005
NO
YES
YES
YES
NO
Explanation:
Test case 
1
1: Chef's command has a frequency of 
42
42 Hertz which is less than 
67
67. Thus, it would not be audible to binary.

Test case 
2
2: Chef's command has a frequency of 
67
67 Hertz which lies in the range 
[
67
,
45000
]
[67,45000]. Thus, it would be audible to binary.

Test case 
3
3: Chef's command has a frequency of 
402
402 Hertz which lies in the range 
[
67
,
45000
]
[67,45000]. Thus, it would be audible to binary.

Test case 
4
4: Chef's command has a frequency of 
45000
45000 Hertz which lies in the range 
[
67
,
45000
]
[67,45000]. Thus, it would be audible to binary.

Test case 
5
5: Chef's command has a frequency of 
45005
45005 Hertz which is greater than 
45000
45000. Thus, it would not be audible to binary.

*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=67&&x<=45000){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}