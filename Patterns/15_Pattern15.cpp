// 15.      *
//         * *
//        *   *
//       *     *
//      *       *
//       *     *
//        *   *
//         * *
//          *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row=1; row<2*n; row++){
        int spc = row > n ? row - n : n - row;
        for(int space=1; space<=spc; space++){
            cout << " ";
        }
        int columns = row > n ? 2 * (2 * n - row)  : 2 * row;
        for(int col=1; col<columns; col++){
            if(col == 1 || col == columns-1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}