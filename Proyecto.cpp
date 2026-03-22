// Sistema de Control de Ventas de una Tienda
# include <iostream>
using namespace std;
string nombres[10];
double precios[10];
int n = 0;

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

bool NombreVal(string nombre)
{
    for(int i = 0; i < nombre.length(); i++)
    {
        if(isalpha(nombre[i]) || nombre[i] == ' ')
        {
            return true; 
        }
    }
    return false; 
}

bool PrecioVal(string precio)
{
    for(int i = 0; i < precio.length(); i++)
    {
        if(!isdigit(precio[i]) && precio[i] != '.')
        {
            return false;
        }
    }
    return true;
}

void Registro(){
    
    cout << "Ingrese el número de productos a registrar: ";
    cin >> n;
    nombres[n];
    for (int i = 0; i < n; i++){
        string nombre;
        do
        {
            cout << "Ingrese el nombre del producto " << (i+1) << ":"<< endl;
            cin >> nombre;
            NombreVal (nombre);
            if (NombreVal(nombre) == false){
                cout << "El nombre debe contener solo letras" << endl;
            }

        } while (!NombreVal(nombre));
        nombres[i] = nombre;
    } 
    
    precios[n];
    for (int i = 0; i < n; i++){
        string precio;
        double preci;
        do {
            cout << "Ingrese el precio (" << nombres[i] << "):" << endl;
            cin >> precio;
            PrecioVal (precio);
            if (PrecioVal(precio) == false){
                cout << "El precio no debe contener letras" << endl;
            }
            preci = stod(precio);
        } while (!PrecioVal(precio));
        precios [i] = preci;
    } 
}

void Mostrar (){
    if(n == 0)
    {
        cout << "No hay productos registrados." << endl;
        return;
    }

    for (int i = 0; i < n; i++){
        cout << i + 1 << ". " << nombres[i] << " - $" << precios[i] << endl;
    }

    cout << "===== LISTA DE PRODUCTOS =====";
}

void Opcion (int opcion){
    switch (opcion)
    {
    case 1:
        Registro();
        break;
    case 2:
        Mostrar();
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