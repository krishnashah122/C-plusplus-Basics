// 30.    E D C B A
//        D C B A
//        C B A
//        B A
//        A
//   OR
//        e d c b a
//        d c b a
//        c b a
//        b a
//        a

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
        for(int col = 1; col <= n-row+1; col++){
            cout << char(asciiCode-col+1) << " ";
        }
        asciiCode--;
        cout << endl;
    }
    return 0;
}