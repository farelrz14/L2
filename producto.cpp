#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
       cout << "BEBIDAS CALIENTES" << endl;
       cout << "*****************" << endl; 
       cout << "1 - Capuccino" << endl; 
       cout << "2 - Expresso" << endl;
       cout << "3 - Chocolate Caliente" << endl;
       cout << endl;

       cout << "Ingrese una opcion: ";
       cin >> opcionProducto;
        
        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L40.00", 1, 40); 
            break;
        case 2:
            agregarProducto("1 Expresso - L30.00", 1, 30); 
            break;
        case 3:
            agregarProducto("1 Chocolate caliente - L30.00", 1, 30); 
            break;
        default:
           {
             cout <<"opcion no valida";
             return;    
             break;
           } 
        }
        
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");

        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Granita de Cafe" << endl; 
        cout << "2 - Te frio" << endl;
        cout << "3 - Granita de Bandera" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Granita de Cafe - L35.00", 1, 35); 
            break;
        case 2:
            agregarProducto("1 Te frio - L35.00", 1, 35); 
            break;
        case 3:
            agregarProducto("1 Granita de Bandera - L35.00", 1, 35); 
            break;
        default:
           {
             cout <<"opcion no valida";
             return;    
             break;
           } 
        }
        
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");
        
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Chilena" << endl; 
        cout << "2 - Galleta de Mantequilla" << endl;
        cout << "3 - Pastel de Chocolate" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        
        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Chilena - L25.00", 1, 25); 
            break;
        case 2:
            agregarProducto("1 Galleta de Mantequilla - L20.00", 1, 20); 
            break;
        case 3:
            agregarProducto("1 Pastel de Chocolate - L25.00", 1, 25); 
            break;
        default:
           {
             cout <<"opcion no valida";
             return;    
             break;
           } 
        }
        
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");

        break;
    }
    default:
        break;
    }


}
