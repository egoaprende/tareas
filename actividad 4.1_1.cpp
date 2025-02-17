#include <iostream>
#include <vector>
using namespace std;

class Alumno {
public:
    string nombre;
    float nota;

    Alumno(string n, float no) : nombre(n), nota(no) {}

    void mostrar() const {
        cout << "Nombre: " << nombre << ", Nota: " << nota << endl;
    }
};

int main() {
    vector<Alumno> alumnos;
    int opcion;

    do {
        cout << "\n"<<"Menu:"<<"\n";

        cout << "1 Agregar alumno"<<"\n";
        
        cout << "2 Mostrar alumnos"<<"\n";
        
        cout << "3 Promedio de notas"<<"\n";
        
        cout << "4 Alumno con nota menor"<<"\n";
        
        cout << "5 Alumno con nota mayor"<<"\n";
        
        cout << "6 Vaciar lista"<<"\n";
        
        cout << "7 Salir"<<"\n";
        
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre;
                float nota;
                cout << "Nombre: ";
                cin >> nombre;
                cout << "Nota: ";
                cin >> nota;
                alumnos.push_back(Alumno(nombre, nota));
                break;
            }
            case 2:
                if (alumnos.empty()) {
                    cout << "No hay alumnos.\n";
                } else {
                    for (const auto& a : alumnos) a.mostrar();
                }
                break;
            case 3:
                if (alumnos.empty()) {
                    cout << "No hay alumnos para calcular el promedio.\n";
                } else {
                    float suma = 0;
                    for (const auto& a : alumnos) suma += a.nota;
                    cout << "Promedio: " << suma / alumnos.size() << endl;
                }
                break;
            case 4:
                if (alumnos.empty()) {
                    cout << "No hay alumnos.\n";
                } else {
                    const Alumno* menor = &alumnos[0];
                    for (const auto& a : alumnos) if (a.nota < menor->nota) menor = &a;
                    cout << "Menor: " << menor->nombre << " (" << menor->nota << ")\n";
                }
                break;
            case 5:
                if (alumnos.empty()) {
                    cout << "No hay alumnos.\n";
                } else {
                    const Alumno* mayor = &alumnos[0];
                    for (const auto& a : alumnos) if (a.nota > mayor->nota) mayor = &a;
                    cout << "Mayor: " << mayor->nombre << " (" << mayor->nota << ")\n";
                }
                break;
            case 6:
                cout << "Saliendo";
                break;
            default:
                cout << "invalida";
        }

    } while (opcion != 6);

    return 0;
}