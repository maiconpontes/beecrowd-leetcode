#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int m;
 
    while(cin>>m) {
        vector<int> vet(m);
        int n, soma = 0;
 
        for(int i=0;i<m;i++) {
            cin>>vet[i];
        }
 
        cin>>n;
        for(int i=m-1;i>=0;i-=n) {
            soma += vet[i];
        }
 
        bool flag = true;
 
        if (soma==1){
            cout << "Bad boy! I’ll hit you." << endl;
        }
        else if (soma==2){
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        }
        else{
            for (int i=2;i<=sqrt(soma);i++){
                if (soma%i==0){
                    flag = false;
                }
            }
 
            if (!flag){
                cout << "Bad boy! I’ll hit you." << endl;
            }
            else{
                cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
            }
        }
    }
    return 0;
}