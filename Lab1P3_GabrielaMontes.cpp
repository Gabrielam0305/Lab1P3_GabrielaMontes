// Lab1P3_GabrielaMontes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int resp;
    cout << "Menu\n";
    cout << "1. Error numerico\n";
    cout << "2. Division\n";
    cout << "3. salida\n";
    cout << "Ingrese su respuesta: ";
    cin >> resp;
    while (resp!=3)
    {
        switch (resp)
        {
        case 1:
            cout << "1. Error numerico\n";
                break;
        case 2:
            cout << "2. Division\n";
            break;

        default:
            break;
        }
        cout << "Menu\n";
        cout << "1. Error numerico\n";
        cout << "2. Division\n";
        cout << "3. salida\n";
        cin >> resp;
    }
    cout << "Fin \n";

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
