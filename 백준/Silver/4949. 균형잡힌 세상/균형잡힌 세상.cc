#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;

    while (true) {
        getline(cin, line);
        if (line == ".") break; // 종료 조건

        stack<char> s;
        bool balanced = true;

        for (char ch : line) {
            if (ch == '(' || ch == '[') {
                s.push(ch);
            } else if (ch == ')') {
                if (s.empty() || s.top() != '(') {
                    balanced = false;
                    break;
                }
                s.pop();
            } else if (ch == ']') {
                if (s.empty() || s.top() != '[') {
                    balanced = false;
                    break;
                }
                s.pop();
            }
        }

        // 괄호가 남아있어도 불균형
        if (!s.empty()) balanced = false;

        cout << (balanced ? "yes" : "no") << '\n';
    }

    return 0;
}
