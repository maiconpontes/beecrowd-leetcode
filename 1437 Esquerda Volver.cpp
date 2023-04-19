#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int x=0;
    
    while(true){
        int cd =0, ce=0;
        cin >> x;
        if (x == 0) break;
        cin.ignore();
        string s = "";
        cin >> s;
        
        for (int i =0;i<s.size();i++){
            if (s[i] == 'D') cd++;
            else if (s[i] == 'E') ce++;
        }
        
        int a = abs(cd - ce);
        
        a %= 4;
        
        switch(a){
            case 0: 
                cout << "N" << endl;
                break;
            case 1: 
                if (cd > ce) cout << "L" << endl;
                else cout << "O" << endl;
                break;
            case 2: 
                cout << "S" << endl;
                break;
            case 3: 
                if (cd > ce) cout << "O" << endl;
                else cout << "L" << endl;
                break;
        }
    }
    
    return 0;
}