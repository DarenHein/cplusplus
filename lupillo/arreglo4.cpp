#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() 
{
    string texto;
    int aux = 0, igual = 0;
    
    cout << "\n --------------------------------------";
    cout << "\n |    Ingrese la palabra a evaluar:   |";
    cout << "\n --------------------------------------";
    cout << "\n";
    getline(cin >> ws, texto);
    system("cls");
    	
    ::string s = texto;
    s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
 
    std::cout << s;
    
   
    for(int ind = s.length() - 1; ind >= 0; ind--) {
        if(s[ind] == s[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(s.length() == igual) {
        cout << "------------------------------------------------" << endl;
        cout << "| Esooo companiere, la palabra es un Palindromo |" << endl;
        cout << "------------------------------------------------" << endl;
    } else {
        cout << "------------------------------------------------" << endl;
        cout << "| Muuuuy mal, Intentemos con otra palabra      |" << endl;
        cout << "------------------------------------------------" << endl;
    }
    
    return 0;
}