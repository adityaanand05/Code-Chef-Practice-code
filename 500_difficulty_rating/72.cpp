/*Reach Home
Chef is hungry and wants to reach home.

Chef can travel up to 
5
5 kilometres on 
1
1 litre of fuel on his motorcycle.
Currently, his motorcycle is filled with 
X
X litres of fuel and his home is 
Y
Y kilometres away.

Determine whether Chef can reach his home on his motorcycle or not.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers 
X
X and 
Y
Y — the amount of fuel in Chef’s motorcycle and the distance to Chef’s home in kilometres.
Output Format
For each test case, output YES, if Chef can reach home on his motorcycle. Otherwise output NO.

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
X
,
Y
≤
1000
1≤X,Y≤1000
Sample 1:
Input
Output
4
2 10
3 17
4 2
6 45
YES
NO
YES
NO
Explanation:
Test case 
1
1: With 
2
2 litres of fuel, Chef can go up to 
10
10 kilometres. Since his home is 
10
10 kilometres away, he can reach his home on his motorcycle.

Test case 
2
2: With 
3
3 litres of fuel, Chef can go up to 
15
15 kilometres. Since his home is 
17
17 kilometres away, he cannot reach his home on his motorcycle.

Test case 
3
3: With 
4
4 litres of fuel, Chef can go up to 
20
20 kilometres. Since his home is 
2
2 kilometres away, he can reach his home on his motorcycle.

Test case 
4
4: With 
6
6 litres of fuel, Chef can go up to 
30
30 kilometres. Since his home is 
45
45 kilometres away, he cannot reach his home on his motorcycle.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x*5>=y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}