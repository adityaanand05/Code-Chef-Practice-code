/*Candy Division
There are three friends and a total of 
N
N candies.
There will be a fight amongst the friends if all of them do not get the same number of candies.

Chef wants to divide all the candies such that there is no fight. Find whether such distribution is possible.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single integer 
N
N - the number of candies.
Output Format
For each test case, output YES, if we can distribute all the candies between the three friends equally. Otherwise output NO.

You can output each character of the answer in uppercase or lowercase. For example, the strings yEs, yes, Yes, and YES are considered the same.

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
≤
100
1≤N≤100
Sample 1:
Input
Output
4
3
4
2
6
YES
NO
NO
YES
Explanation:
Test case 
1
1: Chef can distribute all 
3
3 candies such that each friend gets 
1
1 candy. Since all three friends have same number of candies, there is no fight.

Test case 
2
2: There exist no way of distributing all candies such that all three friends have same number of candies.

Test case 
3
3: There exist no way of distributing all candies such that all three friends have same number of candies.

Test case 
4
4: Chef can distribute all 
6
6 candies such that each friend gets 
2
2 candies. Since all three friends have same number of candies, there is no fight.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%3==0){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}