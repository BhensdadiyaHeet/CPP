#include <iostream>
using namespace std;


int main (){

    // for (int i = 5; i > 0; --i) {

    //     for (int k = 0; k<= 5 - i; k++) {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= i; ++j) {
    //         cout << (j - 1)  %2 ;
    //     }
    //     cout << endl; 
    // }





    for (int i = 5; i > 0; --i) {

        for (int k = 0; k<= 5 - i; k++) {
            cout << " ";
        }

        for (int j = 0; j <= i; ++j) {
            cout << (j+1) %2 ;
        }
        cout << endl; 
    }
}