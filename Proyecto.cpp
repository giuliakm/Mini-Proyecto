// Sistema de Control de Ventas de una Tienda
# include <iostream>
using namespace std;

void Menu(){
    cout << "===== SISTEMA DE VENTAS =====" << endl;
    cout << "1. Registrar producto" << endl;
    cout << "2. Mostrar productos" << endl;
    cout << "3. Calcular total" << endl;
    cout << "4. Buscar producto" << endl;
    cout << "5. Producto mas caro" << endl;
    cout << "6. Mostrar estadísticas" << endl;
    cout << "7. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

void Opcion (int opcion){
    switch (opcion)
    {
    case 1:
        //Registro();
        break;
    case 2:
        //Mostar();
        break;
    case 3:
        //Calcular();
        break;
    case 4:
        //Buscar();
        break;
    case 5:
        //ProductoCaro();
        break;
    case 6:
        //Estadisticas();
        break;
    case 7:
        cout << "Saliendo del programa ..." << endl;
        break;
    default:
        cout << "Opción inválida" << endl;
        break;
    }
}

int main(){
    int opcion;
    do {
        Menu();
        cin >> opcion;

        Opcion (opcion);
    } while (opcion !=7);
}