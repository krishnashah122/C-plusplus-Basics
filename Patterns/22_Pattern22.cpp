// 22.    1
//        0 1
//        1 0 1
//        0 1 0 1
//        1 0 1 0 1

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
            if((row+col)%2 == 0){
                cout << "1 ";
            }else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}