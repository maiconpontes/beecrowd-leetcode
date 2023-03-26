#include <bits/stdc++.h>

using namespace std;

int main() {


     int n=0,t=0;
     string s;
     cin >> n;
     cin.ignore();

     for(int i=0;i<n;i++){
         getline(cin,s);
         t = s.size();
         vector<char> s2(t);

         for(int j=0;j<t;j++){
            s2[j] = s[t-j-1];
         }

         for(int j=0;j<t;j++){
            cout<< s2[j];
         }
     }


    return 0;
}
