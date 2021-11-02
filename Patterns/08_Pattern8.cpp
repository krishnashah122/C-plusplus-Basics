// 8.      *
//        ***
//       *****
//      *******
//     *********

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    int columns = 1;
    for(int row=1; row<=n; row++){
        for(int space=1; space<=n-row; space++){
            cout << " ";
        }
        for(int col=1; col<=columns; col++){
            cout << "*";
        }
        columns += 2;
        cout << endl;
    }
    return 0;
}