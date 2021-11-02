// 17.      1
//         212
//        32123
//       4321234
//        32123
//         212
//          1

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row = 1; row < 2*n; row++){
        int spc = row > n ? row - n : n - row;
        for(int space = 1; space <= spc; space++){
            cout << " ";
        }
        int column = row > n ? 2*n-row : row;
        for(int col = column; col >= 1; col--){
            cout << col;
        }
        for(int col = 2; col <= column; col++){
            cout << col;
        }
        cout << endl;
    }
    return 0;
}