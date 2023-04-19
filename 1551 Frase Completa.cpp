#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    
    for (int a = 0; a < x; a++) {
        int counter=0;
        string s;
        getline(cin, s);
        vector<char> vet;
        
        for (char c : s) {
            if (isalpha(c)){
                if (find(vet.begin(), vet.end(), c) == vet.end()) {
                    vet.push_back(c);
                    counter++;
                }
            }
        }
        
        if (counter==26) cout << "frase completa" << endl;
        else if (counter >=13) cout << "frase quase completa" << endl;
        else cout << "frase mal elaborada" << endl;
        
        
    }
    
    return 0;
}
