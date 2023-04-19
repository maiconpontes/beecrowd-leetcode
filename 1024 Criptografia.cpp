#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, t = 0, h = 0;
    string s;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        getline(cin, s);
        t = s.size();
        vector<char> s2(t);
        h = t / 2;

        // 3 para direita
        for(int j = 0; j < t; j++) {
            if(isalpha(s[j])) {
                s2[j] = (s[j] + 3);
            } 
            else {
                s2[j] = s[j];
            }
}

        // inverte
        string s_inv(t, ' ');
        for(int j = 0; j < t; j++) {
            s_inv[j] = s2[t-j-1];
        }
    
        // 1 para esquerda
        for(int k = h; k < t; k++) {
            s_inv[k] = s_inv[k] -1;
        }

        for(int j = 0; j < t; j++) {
            cout << s_inv[j];
        }
        cout << endl;
    }

    return 0;
}
