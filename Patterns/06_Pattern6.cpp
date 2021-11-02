// 6.       *
//         **
//        ***
//       ****
//      *****

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row=0; row<n; row++){
        for(int space=0; space<n-row; space++){
            cout << " ";
        }
        for(int col=0; col<=row; col++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}