// avance 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int tienda,decision;
    float costo,ct;
    string art,info,gen, clas, con,num;
    cout << "que desea realizar en la tienda 1-alta de articulo 2-modif de articulo 3-baja de articulo  4-lista de articulos  5-limpiar pantalla 6-salir \n" ;
    cin >> tienda;
    switch (tienda)
    {
    case 1:
        cin.ignore();
        cout << "ingrese el numero de articulo \n";
        getline(cin, num);
        cout << "ingrese el nombre del articulo \n";
        getline(cin, art);
        cout << "Descripcion,reseña \n";
        getline(cin, info);
        cout << "Genero \n";
        getline(cin, gen);
        cout << "clasificacion \n";
        getline(cin, clas);
        cout << "consola \n";
        getline(cin, con);
        cout << "costo \n";
        cin>> costo;
        ct = costo * 1.16;
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    default:
        cout << "opcion invalida \n";
        return main();
        break;
    }

    cout << "ocupas hacer algo mas 1-si 2-no  " << endl;
    cin >> decision;
    if(decision==1)
    {
        return main();
    }
    cout << "gracias que tenga un excelente dia  " << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
