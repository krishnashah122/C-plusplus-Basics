// 12.  * * * * *
//       * * * *
//        * * *
//         * *
//          *
//          *
//         * *
//        * * *
//       * * * *
//      * * * * *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row=1; row<=2*n; row++){
        int spc = row > n ? 2 * n - row : row;
        for(int space=1; space<=spc; space++){
            cout << " ";
        }
        int columns = row > n ? row - n : n - row + 1;
        for(int col=1; col<=columns; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}