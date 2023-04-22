#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x=0,y=0;
    
    cin >> x >> y;
    
    int matA[x][y];
    int matB[x][y];
    
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cin >> matA[i][j];
        }
    }
    
    int t =0;
    cin >> t;
    
    int cVivos = 0;
    for (int k=0;k<t;k++){
        //LIMPA MATB A CADA LOOP
        memset(matB, 0, sizeof(matB));
        
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                cVivos = 0;
                
                //CALCULA QUANTOS VIZINHOS ESTAO VIVOS NAS 8 DIRECOES
                if (i > 0 && j > 0 && matA[i-1][j-1] == 1) cVivos++;
                if (i > 0 && matA[i-1][j] == 1) cVivos++;
                if (i > 0 && j < y-1 && matA[i-1][j+1] == 1) cVivos++;
                if (j > 0 && matA[i][j-1] == 1) cVivos++;
                if (j < y-1 && matA[i][j+1] == 1) cVivos++;
                if (i < x-1 && j > 0 && matA[i+1][j-1] == 1) cVivos++;
                if (i < x-1 && matA[i+1][j] == 1) cVivos++;
                if (i < x-1 && j < y-1 && matA[i+1][j+1] == 1) cVivos++;
                
                //CONDICAO PARA NASCER
                if (cVivos == 3 && matA[i][j] == 0) matB[i][j] = 1;
                
                //CONDICOES PARA MORRER
                else if (matA[i][j] == 1 && cVivos < 2) matB[i][j] = 0;
                else if (matA[i][j] == 1 && cVivos > 3) matB[i][j] = 0;
                
                //CONDICAO PARA VIVER
                else if (matA[i][j] == 1 && (cVivos == 2 || cVivos == 3)) matB[i][j] = 1;
                
            }
        }
        //COPIA MATB PARA MATA PARA PROXIMA GERACAO
        memcpy(matA, matB, sizeof(matA));
    }
    
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cout << matB[i][j];
        }
        cout << endl;
    }

    return 0;
}