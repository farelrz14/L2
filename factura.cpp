#include <iostream>

using namespace std;

double subtotal;
double impuesto;
double total;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    total = subtotal + impuesto;
}

void imprimirFactura()
{
    system("cls");
    cout << "*******";
    cout << "FACTURA";
    cout << "*******";
    cout << endl;

    cout << "productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "impuesto: " << impuesto << endl;
    cout << "total a pagar: " << total;
    cout << endl;
    cout << endl;
    system("pause");


}
