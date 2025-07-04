/*Tom and Jerry Chase
In a classic chase, Tom is running after Jerry as Jerry has eaten Tom's favourite food.

Jerry is running at a speed of 
X
X metres per second while Tom is chasing him at a speed of 
Y
Y metres per second. Determine whether Tom will be able to catch Jerry.

Note that initially Jerry is not at the same position as Tom.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
X
X and 
Y
Y — the speeds of Jerry and Tom respectively.
Output Format
For each test case, output on a new line, YES, if Tom will be able to catch Jerry. Otherwise, output NO.

You can print each character in uppercase or lowercase. For example NO, no, No, and nO are all considered the same.

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
10
1≤X,Y≤10
Sample 1:
Input
Output
4
2 3
4 1
1 1
3 5
YES
NO
NO
YES
Explanation:
Test case 
1
1: Jerry is running at the speed of 
2
2 metres per second while Tom is chasing him at the speed of 
3
3 metres per second. Since Jerry's speed is less than Tom's, Tom will eventually catch Jerry.

Test case 
2
2: Jerry is running at the speed of 
4
4 metres per second while Tom is chasing him at the speed of 
1
1 metres per second. Since Jerry's speed is higher than Tom's, Tom will never be able to catch Jerry.

Test case 
3
3: Jerry is running at the speed of 
1
1 metre per second while Tom is chasing him at the speed of 
1
1 metre per second. Since Jerry's speed is same as that of Tom's and both of them are not at the same position, Tom will never be able to catch Jerry.

Test case 
4
4: Jerry is running at the speed of 
3
3 metres per second while Tom is chasing him at the speed of 
5
5 metres per second. Since Jerry's speed is less than Tom's, Tom will eventually catch Jerry.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}