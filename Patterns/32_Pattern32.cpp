// 32.      4 4 4 4 4 4 4  
//          4 3 3 3 3 3 4   
//          4 3 2 2 2 3 4   
//          4 3 2 1 2 3 4   
//          4 3 2 2 2 3 4   
//          4 3 3 3 3 3 4   
//          4 4 4 4 4 4 4

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row = 1; row < 2*n; row++){
        for(int col = 1; col < 2*n; col++){
            int element = n - min(min(row, col), min(2*n-row, 2*n-col)) + 1;
            cout << element;
        }
        cout << endl;
    }
    return 0;
}