// Lab1P3_GabrielaMontes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib.>
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
    while (resp != 3)
    {
        double respuesta = 0.0;
        float x1 = 0;
        float s1 = 0;
        float e1 = 0;
        double x2 = 0;
        double s2 = 0;
        double e2 = 0;
        long double x3 = 0;
        long double s3 = 0;
        long double e3 = 0;
        int n = 0;
        double a = 0;
        double b = 0;
        int p = 0;
        double temp = 0.0;
        switch (resp)
        {
        case 1:
            cout << "Ha entrado en la opcion 1: Error numerico\n";
            cout << "Ingrese N: \n";
            cin >> n;
            x1 = 1 / (float)n;
            x2 = 1 / (double)n;
            x3 = 1 / (long double)n;
            for (size_t i = 0; i < n; i++)
            {
                s1 = s1 + x1;
                s2 = s2 + x2;
                s3 = s3 + x3;

            }
            e1 = abs((float)1.0 - s1);
            e2 = abs((double)1.0 - s2);
            e3 = abs((long double)1.0 - s3);
            cout << "Usando Double: " << endl << "E: " << e2 << endl;
            cout << "Usando Float: " << endl << "E: " << e1 << endl;
            cout << "Usando long Double: " << endl << "E: " << e3 << endl;

            break;
        case 2:

            cout << "Ha entrado en la opcion 2: Division en 2 entradas\n";
            cout << "Ingrese P: \n";
            cin >> p;
            cout << "Ingrese A: \n";
            cin >> a;
            cout << "Ingrese B: \n";
            cin >> b;

            for (size_t i = 0; i < p; i++)
            {
                if (b > 0)
                {
                    temp = a / b;
                    respuesta = respuesta + temp;
                    b--;
                }

            }
            cout << "M= " << respuesta << endl;
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
