// 1.  *****
//     *****
//     *****
//     *****
//     *****

#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout << "Enter the no. of rows ";
    cin >> n1;
    cout << "Enter the no. of columns ";
    cin >> n2;
    for(int row=0; row<n1; row++){
        for(int col=0; col<n2; col++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}