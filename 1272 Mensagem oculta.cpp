#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, c = 0;
    string s;
    getline(cin, s);
    n = stoi(s);
    
    for (int k = 0; k < n; k++) {
        getline(cin, s);
        c = s.size();
        vector<char> s2;
        
        for (int i = 0; i < c; i++) {
            if (!isalpha(s[i])) {
                s.erase(s.begin());
                c--;
                i--;
            } else {
                break;
            }
        }
        
        for (int i = 0; i < c; i++) {
            if (i == 0) {
                s2.push_back(s[i]);
            }
            if (!isalpha(s[i]) && isalpha(s[i+1])) {
                s2.push_back(s[i+1]);
            }
        }
        
        if (s2[0] == ' ') {
            s2.erase(s2.begin());
        }
        
        for (int i = 0; i < s2.size(); i++) {
            cout << s2[i];
        }
        cout << endl;
    }
    
    return 0;
}
