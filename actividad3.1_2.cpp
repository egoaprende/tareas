#include <iostream>
#include <string>

using namespace std;


class Usuario {
protected:
    string username;
    string password;
    string email;

public:
    Usuario(string user, string pass, string mail) : username(user), password(pass), email(mail) {}

    void registrarse() {
        cout << username << " se ha registrado con el email: " << email << endl;
    }

    void iniciarSesion() {
        cout << username << " ha iniciado sesion." << endl;
    }
};


class Administrador : public Usuario {
private:
    string emailAdministrador;

public:
    Administrador(string user, string pass, string mail, string emailAdmin) 
    : Usuario(user, pass, mail), emailAdministrador(emailAdmin) {}

    void editarProducto() {
        cout << "Administrador " << username << " ha editado un producto." << endl;
    }

    void eliminarProducto() {
        cout << "Administrador " << username << " ha eliminado un producto." << endl;
    }

    void agregarProducto() {
        cout << "Administrador " << username << " ha agregado un producto." << endl;
    }
};


class Cliente : public Usuario {
private:
    string informacionTarjetaCredito;

public:
    Cliente(string user, string pass, string mail, string tarjeta)
        : Usuario(user, pass, mail), informacionTarjetaCredito(tarjeta) {}

    void comprarProducto() {
        cout << "Cliente " << username << " ha comprado un producto con la tarjeta: " << informacionTarjetaCredito << endl;
    }
};


int main() {

    Usuario usuario("JuanPerez", "12345", "juan@hotmail.com");
    Administrador admin("Admin1", "adminpass", "admin@gmail.com", "admin@carrion.com");
    Cliente cliente("MariaGomez", "cliente123", "maria@hotmail.com", "****-****-****-1234");

    usuario.registrarse();
    usuario.iniciarSesion();

    admin.iniciarSesion();
    admin.agregarProducto();
    admin.editarProducto();
    admin.eliminarProducto();

    cliente.iniciarSesion();
    cliente.comprarProducto();

    return 0;
}
