#include <iostream>
#include <strings.h>
using namespace std;

int main() {
  
    const char* semana[] = {"Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado"};
    const int dias = 7; 

    
    cout << "Días de la semana:" << endl;
    for (int i = 0; i < dias; ++i) {
        cout << i + 1 << ". " << semana[i] << endl; 
    }

  
    char diasc[20]; 
    cout << "Ingrese un día de la semana para conocer su posición: ";
    cin.getline(diasc, 20);

    
    int posicion = -1; 
    for (int i = 0; i < dias; ++i) {
 
        if (strcasecmp(diasc, semana[i]) == 0) { 
            posicion = i + 1; 
            break;
        }
    }

   
    if (posicion != -1) {
        cout << "La posición de " << diasc << " es: " << posicion << endl;
    } else {
        cout << "El día " << diasc << " no se encuentra en la lista." << endl;
    }

    return 0;
}