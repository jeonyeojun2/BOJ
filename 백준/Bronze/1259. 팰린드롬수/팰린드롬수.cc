// 1259
#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    while (true) {
        cin >> input;
        if (input == "0") break;

        if (isPalindrome(input)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}