// 26.   1 1 1 1 1 1
//       2 2 2 2 2
//       3 3 3 3
//       4 4 4
//       5 5
//       6

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n-row+1; col++){
            cout << row << " ";
        }
        cout << endl;
    }
    return 0;
}