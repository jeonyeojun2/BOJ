#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        bool isValid = true;

        stack<char> st;

        for (char c : s)
        {
            if (c == '(') // 여는 괄호면 스택에 넣기
                st.push(c);
            else if (c == ')') // 닫는 괄호면 스택에서 pop
            {
                if (!st.empty()) // 스택이 비어있지 않으면 pop
                    st.pop();
                else // 비어있으면 잘못된 괄호
                {
                    isValid = false;
                    break;
                }
            }
        }

        if (isValid && st.empty()) // 스택이 비어있으면 올바른 괄호
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}