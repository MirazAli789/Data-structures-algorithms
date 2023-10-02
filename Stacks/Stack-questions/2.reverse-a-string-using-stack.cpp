//given a string, you have to reverse that string using a stack.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "c++";
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch); // pushing the characters into the stack
    }
    string ans = ""; // creating an emty string.
    while (!s.empty())
    {
        char ch = s.top(); // storing the top of the stack in a char.
        ans.push_back(ch); // appending the top of the stack in the ans.
        s.pop();
    }
    cout << ans << endl;
    return 0;
}
