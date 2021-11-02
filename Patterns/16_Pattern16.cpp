// 16.           1
//             1   1
//           1   2   1
//         1   3   3   1
//       1   4   6   4   1

#include <iostream>
using namespace std;
int fact(int n){
    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row = 0; row < n; row++){
        for(int space = 1; space < 2*n - 2*row; space++){
            cout << " ";
        }
        for(int col = 0; col <= row; col++){
            cout << fact(row)/(fact(col)*fact(row-col)) << "   ";
        }
        cout << endl;
    }
    return 0;
}