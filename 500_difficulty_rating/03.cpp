/*Clear Day
Chef classifies a day to be either rainy, cloudy, or clear.

In a particular week, Chef finds 
X
X days to be rainy and 
Y
Y days to be cloudy.
Find the number of clear days in the week.

Input Format
The first and only line of input will contain two space-separated integers 
X
X and 
Y
Y, denoting the number of rainy and cloudy days in the week.
Output Format
Output the number of clear days in the week.

Constraints
0
≤
X
,
Y
≤
7
0≤X,Y≤7
0
≤
X
+
Y
≤
7
0≤X+Y≤7
Sample 1:
Input
Output
2 3
2
Explanation:
There are 
7
7 days in a week. If there are 
2
2 rainy days and 
3
3 cloudy days, then the remaining 
7
−
2
−
3
=
2
7−2−3=2 days are clear.

Sample 2:
Input
Output
3 4
0
Explanation:
If there are 
3
3 rainy days and 
4
4 cloudy days, then the remaining 
7
−
3
−
4
=
0
7−3−4=0 days are clear.*/



#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    
    cout<<7-x-y;
    return 0;
}