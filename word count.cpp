g#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 0;
    string s;
    int words = 1;

    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' && s[i+!] != ' ') {
            words++;
        }
    }


    cout << words << endl;

    return 0;
}
