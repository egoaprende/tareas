#include <iostream>
#include <string>

using namespace std;


class Vehiculo {
protected:
    string matricula;
    string modelo;
    int potenciaCV;

public:
    Vehiculo(string mat, string mod, int pot) {
        matricula = mat;
        modelo = mod;
        potenciaCV = pot;
    }

    string getMatricula() { return matricula; }
    string getModelo() { return modelo; }
    int getPotenciaCV() { return potenciaCV; }
};


class Taxi : public Vehiculo {
private:
    string numeroLicencia;

public:
    Taxi(string mat, string mod, int pot, string numLic) : Vehiculo(mat, mod, pot) {
        numeroLicencia = numLic;
    }

    void setNumeroLicencia(string numLic) { numeroLicencia = numLic; }
    string getNumeroLicencia() { return numeroLicencia; }
};


class Autobus : public Vehiculo {
private:
    int numeroPlazas;

public:
    Autobus(string mat, string mod, int pot, int numPlazas) : Vehiculo(mat, mod, pot) {
        numeroPlazas = numPlazas;
    }

    void setNumeroPlazas(int numPlazas) { numeroPlazas = numPlazas; }
    int getNumeroPlazas() { return numeroPlazas; }
};


int main() {
    Vehiculo vehiculo("1234ABC", "Sedan", 120);
    Taxi taxi("5678DEF", "Toyota Prius", 100, "TX12345");
    Autobus autobus("9101GHI", "Mercedes Bus", 200, 50);


    cout << "Vehiculo: " << vehiculo.getMatricula() << " " << vehiculo.getModelo() << " " << vehiculo.getPotenciaCV() << "CV" << endl;
    cout << "Taxi: " << taxi.getMatricula() << " " << taxi.getModelo() << " " << taxi.getPotenciaCV() << "CV, Licencia: " << taxi.getNumeroLicencia() << endl;
    cout << "Autobus: " << autobus.getMatricula() << " " << autobus.getModelo() << " " << autobus.getPotenciaCV() << "CV, Plazas: " << autobus.getNumeroPlazas() << endl;

    return 0;
}
