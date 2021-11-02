// 28.    E                                       
//        D E
//        C D E
//        B C D E
//        A B C D E
//   OR
//        e
//        d e
//        c d e
//        b c d e
//        a b c d e

#include <iostream>
using namespace std;

int main(){
    char character;
    cout << "Enter a character ";
    cin >> character;
    int asciiCode = int(character);
    int n;
    if(asciiCode > 65 && asciiCode < 91){
        n = asciiCode - 64;
    }else{
        n = asciiCode - 96;
    }
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
            cout << char(asciiCode-row+col) << " ";
        }
        cout << endl;
    }
    return 0;
}