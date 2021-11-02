// 5.  *
//     **
//     ***
//     ****
//     *****
//     ****
//     ***
//     **
//     *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row = 0; row < 2 * n; row++){
        int columns = row > n ? 2 * n - row : row;
        for(int col = 0; col < columns; col++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}