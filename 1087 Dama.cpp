#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1=0, x2=0, y1=0, y2=0;
    
    while(true){
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == 0) break;
        
        int dx = abs(x2 - x1);
        int dy = abs(y2 - y1);
        
        if (x1 == x2 && y1 == y2) cout << 0 << endl;
        else if (x1 == x2 || y1 == y2) cout << 1 << endl;
        else if (dx == dy) cout << 1 << endl;
        else if (dx != dy) cout << 2 << endl;
        
        
    }
    
    return 0;
}