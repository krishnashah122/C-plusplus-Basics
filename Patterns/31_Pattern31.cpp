// 31.    1      1
//        12    21
//        123  321
//        12344321

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
           cout << col;
        }
        for(int space = 1; space <= 2*(n-row); space++){
            cout << " ";
        }
        for(int col = row; col >= 1; col--){
            cout << col;
        }
        cout << endl;
    }
    return 0;
}