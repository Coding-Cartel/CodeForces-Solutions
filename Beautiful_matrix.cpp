#include<iostream>
using namespace std;

int main(){

    int A[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> A[i][j];
        }
    }
    int pos_j, pos_i;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(A[i][j] == 1){
                pos_j = j;
                pos_i = i;
            }
        }
    }

    if(pos_j>2)
        pos_j = pos_j - 2;
    else
        pos_j = 2 - pos_j;
    
    if(pos_i>2)
        pos_i = pos_i - 2;
    else
        pos_i = 2 - pos_i;

    cout << pos_i+pos_j << endl;

    return 0;
}