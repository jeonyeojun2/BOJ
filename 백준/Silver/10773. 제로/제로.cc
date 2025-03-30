#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    int sum = 0;
    int stacksize;

    stack<int> st;

    for (int i = 0; i < n; i++)
    {

        cin >> k;

        if (k != 0)
        {
            st.push(k);
        }
        else
        {
            st.pop();
        }
    }

    stacksize = st.size();
    for (int i = 0; i < stacksize; i++)
    {
        sum += st.top();
        st.pop();
    }

    cout << sum;
}