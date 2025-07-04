/*Best of Two
Chef took an examination two times. In the first attempt, he scored 
X
X marks while in the second attempt he scored 
Y
Y marks. According to the rules of the examination, the best score out of the two attempts will be considered as the final score.

Determine the final score of the Chef.

Input Format
The first line contains a single integer 
T
T — the number of test cases. Then the test cases follow.
The first line of each test case contains two integers 
X
X and 
Y
Y — the marks scored by Chef in the first attempt and second attempt respectively.
Output Format
For each test case, output the final score of Chef in the examination.

Constraints
1
≤
T
≤
1000
1≤T≤1000
0
≤
X
,
Y
≤
100
0≤X,Y≤100
Sample 1:
Input
Output
4
40 60
67 55
50 50
1 100
60
67
50
100
Explanation:
Test Case 1: The best score out of the two attempts is 
60
60.

Test Case 2: The best score out of the two attempts is 
67
67.

Test Case 3: The best score out of the two attempts is 
50
50.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout << x <<endl;
        }else{
            
            cout << y <<endl;
        }
        
    }
    return 0;
}