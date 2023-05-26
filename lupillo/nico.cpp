#include <iostream>
#include <cmath>
using namespace std; 

int main(){
	float sistemas[3],metodologia[3],ingles[3],inovacion[3],estructura[3];
	float promedio[4];
	float final[4];
	float suma=0;
	float suma2=0;
	float suma3=0;
	float suma4=0;
	float suma5=0;
	float suma6=0;
	float suma7=0;
	float suma8=0;
	float suma9=0;
	float suma0=0;
	string nombre;
	cout<<"ingrese su nombre"<<"\n";
	cin>>nombre;
	
	cout<<"ingrese las calificaciones de sistemas"<<"\n";
	for(int i = 0 ; i < 3 ; i ++){
			cout<<"ingrese la calificacion "<<i+1<<"\n";
			cin>>sistemas[i];
				while(sistemas[i] >=11 || sistemas[i]<=-1 ){
				cout<<"ingrese la otra calificacion "<<"\n";
				cin>>sistemas[i];
				}
			suma=suma+sistemas[i];
	}
	promedio[0]=suma/3;
		
		
	cout<<"ingrese las calificaciones de metodologia"<<"\n";
	for(int i = 0 ; i < 3 ; i ++){
			cout<<"ingrese la calificacion "<<i+1<<"\n";
			cin>>metodologia[i];
				while(metodologia[i] >=11 || metodologia[i]<=-1 ){
				cout<<"ingrese la otra calificacion "<<"\n";
				cin>>metodologia[i];
				}
			suma2=suma2+metodologia[i];
	}
	promedio[1]=suma2/3;
	
	
	cout<<"ingrese las calificaciones de ingles III"<<"\n";
	for(int i = 0 ; i < 3 ; i ++){
			cout<<"ingrese la calificacion "<<i+1<<"\n";
			cin>>ingles[i];
				while(ingles[i] >=11 || ingles[i]<=-1 ){
				cout<<"ingrese la otra calificacion "<<"\n";
				cin>>ingles[i];
				}
			suma3=suma3+ingles[i];
	}
	promedio[2]=suma3/3;
	
	
	cout<<"ingrese las calificaciones de inovacion"<<"\n";
	for(int i = 0 ; i < 3 ; i ++){
			cout<<"ingrese la calificacion "<<i+1<<"\n";
			cin>>inovacion[i];
				while(inovacion[i] >=11 || inovacion[i]<=-1 ){
				cout<<"ingrese la otra calificacion "<<"\n";
				cin>>inovacion[i];
				}
			suma4=suma4+ingles[i];
	}
	promedio[3]=suma4/3;
	
	
	cout<<"ingrese las calificaciones de estructura de datos "<<"\n";
	for(int i = 0 ; i < 3 ; i ++){
			cout<<"ingrese la calificacion "<<i+1<<"\n";
			cin>>estructura[i];
				while(estructura[i] >=11 || estructura[i]<=-1 ){
				cout<<"ingrese la otra calificacion "<<"\n";
				cin>>estructura[i];
				}
			suma5=suma5+ingles[i];
	}
	promedio[4]=suma5/3;
	
	
	suma7=(sistemas[0]+metodologia[0]+ingles[0]+inovacion[0]+estructura[0]);
	final[0]=suma7/5;
	suma8=(sistemas[1]+metodologia[1]+ingles[1]+inovacion[1]+estructura[1]);
	final[1]=suma8/5;
	suma9=(sistemas[2]+metodologia[2]+ingles[2]+inovacion[2]+estructura[2]);
	final[2]=suma9/5;
	suma7=(sistemas[3]+metodologia[3]+ingles[3]+inovacion[3]+estructura[3]);
	final[3]=suma0/5;
	
	
 	cout<< "\n" ; 
    cout<< "   \t\t        Parcial 1 \t\t Parcial 2 \t\t Parcial 3 \t\t Califiacion final de matera \t\t Promedio final por parcial" << endl; 
    cout<< "\n metodologia ";
    cout<< "   \t\t  "<<sistemas[0]; 
    cout<< "   \t\t   "<<sistemas[1];   
    cout<< "   \t\t   "<<sistemas[2]; 
    cout<< "   \t\t   "<<promedio[0]; 
    cout<< "   \t\t   "<<final[0]<<endl; 
                                                                                                             
    
    cout<< "\n" ; 
    cout<< "   \t\t        Parcial 1 \t\t Parcial 2 \t\t Parcial 3 \t\t Califiacion final de matera \t\t Promedio final por parcial" << endl; 
    cout<< "\n metodologia ";
    cout<< "   \t\t  "<<metodologia[0]; 
    cout<< "   \t\t   "<<metodologia[1];   
    cout<< "   \t\t   "<<metodologia[2]; 
    cout<< "   \t\t   "<<promedio[1]; 
    cout<< "   \t\t   "<<final[1]<<endl; 
                                                                                                         
    cout<< "\n" ; 
    cout<< "   \t\t        Parcial 1 \t\t Parcial 2 \t\t Parcial 3 \t\t Califiacion final de matera \t\t Promedio final por parcial" << endl; 
    cout<< "\n ingles ";
    cout<< "   \t\t  "<<ingles[0]; 
    cout<< "   \t\t   "<<ingles[1];   
    cout<< "   \t\t   "<<ingles[2]; 
    cout<< "   \t\t   "<<promedio[2]; 
    cout<< "   \t\t   "<<final[2]<<endl; 
                                                                                                 
    
    cout<< "\n" ; 
    cout<< "   \t\t        Parcial 1 \t\t Parcial 2 \t\t Parcial 3 \t\t Califiacion final de matera \t\t Califiacion final por parcial" << endl; 
    cout<< "\n ingles ";
    cout<< "   \t\t  "<<estructura[0]; 
    cout<< "   \t\t   "<<estructura[1];   
    cout<< "   \t\t   "<<estructura[2]; 
    cout<< "   \t\t   "<<promedio[3]; 
    cout<< "   \t\t   "<<final[3]<<endl;
    return 0;
}