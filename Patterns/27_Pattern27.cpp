// 27.   1 2 3 4  17 18 19 20
//         5 6 7  14 15 16
//           8 9  12 13
//             10 11

#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    int leftElement, rightElement;
    leftElement = 1;
    rightElement = n * n + 1;
    for (int row = n; row > 0; row--) {
        for (int space = n; space > row; space--)
            cout << " ";
        for (int column = 1; column <= row; column++) {
            cout << leftElement << " ";
            leftElement++;
        }
        for (int column = 1; column <= row; column++) {
            cout << rightElement;
            if (column < row){
                cout << " ";
            }
            rightElement++;
        }
        rightElement = rightElement - (row - 1) * 2 - 1;
        cout << endl;
    }
}