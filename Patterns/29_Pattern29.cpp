// 29.    a
//        B c
//        D e F
//        g H i J
//        k L m N o

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    int asciiCode = 97;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
            if(asciiCode%2 == 0){    
                char element = toupper(char(asciiCode++));
                cout << element << " ";
            }else{
                cout << char(asciiCode++) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}