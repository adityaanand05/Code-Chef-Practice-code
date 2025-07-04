/*Ageing
Chef's current age is 
20
20 years, while Chefina's current age is 
10
10 years.
Determine Chefina's age when Chef will be 
X
X years old.

Note: Assume that Chef and Chefina were born on same day and same month (just different year).

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single integer 
X
X, the age of Chef.
Output Format
For each test case, output Chefina's age when Chef will be 
X
X years old.

Constraints
1
≤
T
≤
25
1≤T≤25
25
≤
X
≤
50
25≤X≤50
Sample 1:
Input
Output
4
25
36
50
44
15
26
40
34
Explanation:
Test case 
1
1: Chefina is 
10
10 years old when Chef is 
20
20 years old. Thus, when Chef would be 
25
25, Chefina would be 
15
15.

Test case 
2
2: Chefina is 
10
10 years old when Chef is 
20
20 years old. Thus, when Chef would be 
36
36, Chefina would be 
26
26.

Test case 
3
3: Chefina is 
10
10 years old when Chef is 
20
20 years old. Thus, when Chef would be 
50
50, Chefina would be 
40
40.

Test case 
4
4: Chefina is 
10
10 years old when Chef is 
20
20 years old. Thus, when Chef would be 
44
44, Chefina would be 
34
34.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<x-10<<endl;
        
    }
    return 0;
}