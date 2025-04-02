#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, string, greater<string>> m;

    for (int i = 0; i < n; i++)
    {
        string name, action;
        cin >> name >> action;
        m[name] = action;
    }

    map<string, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second == "enter")
        {
            cout << it->first << "\n";
        }
    }
}