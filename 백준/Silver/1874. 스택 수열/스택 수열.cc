#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin >> n;

    stack<int> st;
    vector<char> operations;
    int current = 1;

    for (int i = 0; i < n; i++)
    {
        int target;
        cin >> target;

        // target 숫자가 나올 때까지 push
        while (current <= target)
        {
            st.push(current);
            operations.push_back('+');
            current++;
        }

        // 스택의 top이 target이라면 pop
        if (st.top() == target)
        {
            st.pop();
            operations.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    for (char op : operations)
    {
        cout << op << '\n';
    }
}