// cadenas de caracteres con como arreglos de caacteres que parecen strings 
#include <iostream>
#include <string.h> // ocuapamos esta libreria 

using namespace std ; 

int main (){
    char palabra[] = "Hola mundo" ; // hasta aqui todo bien 
    char palabra2[] = {'h','o','l','a'}; // es otra forma de llenar un arreglo 
    char palabra3[20]; 
    cout << palabra << endl; 
    cout << palabra2 << endl ; 
    
    // ahoa le pediremos al usuario que rellene la cadena de caracteres 
    // y vremos la direrndia entre : 
    // cin 
    // gets
    //cin.getLine 

    // el cin en una cadena de carateres al detectar salto de linea no impre completo el nombre 
    cout << "Ingresa tu nombre -> " ; 
    cin >>  palabra3 ; 
    cout << palabra3 << endl ; 
    // gets el gets toma memoria que no le corresponde del programa 
    cout << "ingresa tu nombre -> "; 
    gets(palabra3);
    cout << palabra3 << endl ; 
    // cin.getline(variable,dondetermina,que ara despues )
    cout << "Imgresa tu nombre -> "; 
    cin.getline(palabra3,20,'\n');  
    cout << palabra3 << endl ; 


    // nota importante 
    // hay problemas si ocupamos las 3 tecnicas de golpe hay que ocupar solo el cin.getline
    


    return 0 ; 
}