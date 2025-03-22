#include<iostream>
using namespace std;

int main(){
    char alph = 'a';
    int skp = 4;

    do
    {
        cout << alph << endl;
        alph += skp;
    } 
    
    while (alph <='z');
    
}