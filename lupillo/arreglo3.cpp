#include <iostream>

#define tama  12
using namespace std; 


int main(){

    int total =0 ; 

    int arre [tama] = {1,2,3,4,5,6,7,8,9,10}; 

    for (int i = 0 ; i < tama ; i++){

        total += arre[i] ;  
        
    }
    cout << total << endl; 

    return 0;
}