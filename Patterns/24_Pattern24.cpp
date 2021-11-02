// 24.    *        *
//        **      **
//        * *    * *
//        *  *  *  *
//        *   **   *
//        *   **   *
//        *  *  *  *
//        * *    * *
//        **      **
//        *        *

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row = 1; row <= 2*n; row++){
        int column = row > n? 2*n-row+1 : row;
        for(int col = 1; col <= column; col++){
            if(col == 1 || col == column){    
                cout << "*";
            }else{
                cout << " ";
            }
        }
        int spc = row > n? 2*row-2*n-2 : 2*n-2*(row);
        for(int space = 1; space <= spc; space++){
            cout << " ";
        }
        for(int col = 1; col <= column; col++){
            if(col == 1 || col ==column){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}