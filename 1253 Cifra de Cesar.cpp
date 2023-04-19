#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=0;
    cin >>a ;
    
    for (int i=0;i<a;i++){
        int m=0;
        string s1, s2;
        
        cin >> s1;
        cin >> m;
        
        for (int j=0;j<s1.size();j++){
            char c = s1[j]-m;
            if (c < 'A') {
                c = 'Z' - ('A' - c) + 1;
            }
            s2.push_back(c);
        }
        
        for (int j=0;j<s2.size();j++){
            cout << s2[j];
        }
        
        cout << endl;
        
    }

    return 0;
}