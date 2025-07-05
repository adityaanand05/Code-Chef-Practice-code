/*Time Complexity
A sorting algorithm 
A
A is said to have more time complexity than a sorting algorithm 
B
B if it uses more number of comparisons for sorting the same array than algorithm 
B
B.

Given that algorithm 
A
A uses 
X
X comparisons to sort an array and algorithm 
B
B uses 
Y
Y comparisons to sort the same array, find whether algorithm 
A
A has more time complexity.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
X
X and 
Y
Y — the number of comparisons used by algorithms 
A
A and 
B
B to sort the array respectively.
Output Format
For each test case, output on a new line, YES, if the algorithm 
A
A has more time complexity than 
B
B and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

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
9 9
15 7
10 19
21 20
NO
YES
NO
YES
Explanation:
Test case 
1
1: The number of comparisons used by algorithm 
A
A is 
9
9 and that used by 
B
B is also 
9
9. Since the number of comparisons used by 
A
A is not more than that of 
B
B, 
A
A does not have more time complexity than 
B
B.

Test case 
2
2: The number of comparisons used by algorithm 
A
A is 
15
15 and that used by 
B
B is 
7
7. Since the number of comparisons used by 
A
A is more than that of 
B
B, 
A
A does have more time complexity than 
B
B.

Test case 
3
3: The number of comparisons used by algorithm 
A
A is 
10
10 and that used by 
B
B is 
19
19. Since the number of comparisons used by 
A
A is not more than that of 
B
B, 
A
A does not have more time complexity than 
B
B.

Test case 
4
4: The number of comparisons used by algorithm 
A
A is 
21
21 and that used by 
B
B is 
20
20. Since the number of comparisons used by 
A
A is more than that of 
B
B, 
A
A does have more time complexity than 
B
B*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}