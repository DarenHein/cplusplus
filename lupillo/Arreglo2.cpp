#include <iostream>

#define tama  10
using namespace std; 


int main(){

    int arre [tama]; 

    for (int i = 0 ; i < tama ; i++){

        arre[i] = 2 + (2 * i); 
        cout << i  <<  arre [i]  << endl ; 
    }


    return 0;
}