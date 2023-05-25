// actividad 3 de la semana dos 
// 3 RREGLOS DE LAS CALIFICAIONES DE LOS 3 PARCIALES QUE LEVAMOS 
// primera materia -> Sistemas Operativos 
// segunda materia -> Ingles 3 
// tercera materia -> Estructura de datos 
// cuarta ,materia -> Inovacio y tecnologia de la informacion 
// quitan materia  -> Metodologia agil del desarollo del sistema 
#include <iostream>

using namespace std; 

int main(){

    float materia1[3]; // Sistemas Operativos 
    int acum = 0 ; 
    float suma = 0; 
    float materia2[3]; // Ingles 3 
    int acum2 = 0 ;
    float suma2 = 0 ;  
    float materia3[3]; // Estructura de datos
    int acum3 = 0 ; 
    float suma3 = 0 ; 
    float materia4[3]; // Inovacion y tecnologia de la informacion
    int acum4 = 0 ; 
    float suma4 =0 ; 
    float materia5[3]; // Metodologia agil del desarollo del sistema 
    int acum5 = 0 ; 
    float suma5 = 0 ; 
    float parciales[5]; 
    float Profinal[1]; 
    float suma6 = 0 ; 
    int superacum = 0 ; 
    string nombre ; 
    int op ; 

    do{

        cout << "\n\tHola al programa Calificaiones " << endl ; 
        cout << "\nMateria -> Sistemas Operativos " << endl ; 
        cout << "Ingresa el nombre del alumno -> " ; 
        cin >> nombre ; 
        for (int i = 0 ; i < 3 ; i ++){
            cout << "Ingresa la calificaion del parcial -> " << i + 1 << " ; " ; 
            cin >> materia1[i]; 
            if (materia1[i] <= 5 ){
                acum += 1 ; 
            }
            else if (materia1[i] > 10){
                cout << "Califiacion no valida favor de ingresar una calificaion valida -> " ; 
                cin >> materia1[i]; 
            }

            suma = suma + materia1[i]; 

        }

        suma =  suma / 3 ; 
        parciales[0] = suma ; 
        

        
        cout << "\nMateria -> Ingles 3 "<< endl ; 
        for (int i = 0 ; i < 3 ; i ++ ){
            cout << "Ingresa la calificaion del parcial -> " << i + 1 << " ; " ; 
            cin >> materia2[i]; 
            if (materia2[i] <= 5 ){
                acum2 += 1 ; 
            }
            else if (materia2[i] > 10){
                cout << "Califiacion no valida favor de ingresar una calificaion valida -> " ; 
                cin >> materia2[i]; 
            }

            suma2 = suma2 + materia2[i]; 
        }
        suma2 =  suma2 / 3 ; 
        parciales[1] = suma2 ; 




        cout << "\nMateria -> Estructura de datos "<< endl ; 
        for (int i = 0 ; i < 3 ; i ++ ){
            cout << "Ingresa la calificaion del parcial -> " << i + 1 << " ; " ; 
            cin >> materia3[i]; 
            if (materia3[i] <= 5 ){
                acum3 += 1 ; 
            }
            else if (materia3[i] > 10){
                cout << "Califiacion no valida favor de ingresar una calificaion valida -> " ; 
                cin >> materia3[i]; 
            }

            suma3 = suma3 + materia3[i]; 
        }
        suma3 =  suma3 / 3 ; 
        parciales[2] = suma3 ; 



        cout << "\nMateria -> Inovacio y tecnologia de la informacion "<< endl ; 
        for (int i = 0 ; i < 3 ; i ++ ){
            cout << "Ingresa la calificaion del parcial -> " << i + 1 << " ; " ; 
            cin >> materia4[i]; 
            if (materia4[i] <= 5 ){
                acum4 += 1 ; 
            }
            else if (materia4[i] > 10){
                cout << "Califiacion no valida favor de ingresar una calificaion valida -> " ; 
                cin >> materia4[i]; 
            }

            suma4 = suma4 + materia4[i]; 
        }
        suma4 =  suma4 / 3 ; 
        parciales[3] = suma4 ;


        cout << "\nMateria -> Metodologia agil del desarollo del sistema"<< endl ; 
        for (int i = 0 ; i < 3 ; i ++ ){
            cout << "Ingresa la calificaion del parcial -> " << i + 1 << " ; " ; 
            cin >> materia5[i]; 
            if (materia5[i] <= 5 ){
                acum5 += 1 ; 
            }
            else if (materia5[i] > 10){
                cout << "Califiacion no valida favor de ingresar una calificaion valida -> " ; 
                cin >> materia5[i]; 
            }

            suma5 = suma5 + materia5[i]; 
        }
        suma5 =  suma5 / 3 ; 
        parciales[4] = suma5 ; 


        for (int i = 0 ; i < 5 ; i ++){

            suma6 =  suma6 + parciales[i]; 
             
        }
        suma6 =  suma6 / 5 ; 

        Profinal[0] = suma6; 

        superacum =  acum + acum2 + acum3 + acum4 + acum5; 

        // mostrar la tabla de calificaiones 

        cout << "\n" ; 
        cout << "   \t\t        Parcial 1 \t Parcial 2 \t Parcial 3 \t Califiacion final " << endl; 
        cout << "\n Sistemas Operativos "  ;
        cout << "\t  "<<materia1[0] ; 
        cout << "   \t\t   "<<materia1[1] ;   
        cout << "   \t\t   "<<materia1[2] ; 
        cout << "   \t\t   "<<parciales[0] << endl ; 

        cout << "\n Ingles 3            "  ;
        cout << "\t  "<<materia2[0] ; 
        cout << "   \t\t   "<<materia2[1] ;   
        cout << "   \t\t   "<<materia2[2] ; 
        cout << "   \t\t   "<<parciales[1] << endl ; 

        cout << "\n Estructura de datos "  ;
        cout << "\t  "<<materia3[0] ; 
        cout << "   \t\t   "<<materia3[1] ;   
        cout << "   \t\t   "<<materia3[2] ; 
        cout << "   \t\t   "<<parciales[2] << endl ; 

        cout << "\n Inovacion y Tecnolo "  ;
        cout << "\t  "<<materia4[0] ; 
        cout << "   \t\t   "<<materia4[1] ;   
        cout << "   \t\t   "<<materia4[2] ; 
        cout << "   \t\t   "<<parciales[3] << endl ; 

        cout << "\n Metodologia        "  ;
        cout << "\t  "<<materia5[0] ; 
        cout << "   \t\t   "<<materia5[1] ;   
        cout << "   \t\t   "<<materia5[2] ; 
        cout << "   \t\t   "<<parciales[4] << endl ; 


         cout << "\n Promedio Final    "  ;
        cout << "\t  " ; 
        cout << "   \t\t   ";   
        cout << "   \t\t   "; 
        cout << "   \t\t   "<< Profinal[0] << endl ; 

        cout << "\n"; 
        cout << "Nota el alumno tiene -> " << superacum << " Reporbadas " << endl;
        cout << "\n";  

        
         




       cout << "Deseas Repetir la operacion -> 1- si , 2 - no -> ; " ; 
       cin >> op ;  
    }while(op != 2); 

    return 0; 
}