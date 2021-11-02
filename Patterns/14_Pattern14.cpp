// 14.  *********
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
    for(int row=1; row<=n; row++){
        for(int space=1; space<=row; space++){
            cout << " ";
        }
        for(int col=1; col<2*(n-row+1); col++){
            if(row == 1 || col == 1 || col == 2*(n-row)+1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}