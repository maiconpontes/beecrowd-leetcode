#include <bits/stdc++.h>
using namespace std;

long long fat (int n);

int main() {
        int n=0,m=0;
        while(cin >> n >> m){
            
            long long total =0;
            
            total += fat(n);
            total += fat(m);
            
            cout << total << endl;
            
            
        }
        return 0;
}

long long fat(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fat(n - 1);
    }

}