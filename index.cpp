#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Edad = 0, Usuario = 0, Dispositivos;
    double Compra = 0, Dinero = 1000, SaldoR = 0, CompraN = 0,SaldoRr = 0;
    cout << "Porfavor ingrese su edad" << endl;
    cin >> Edad;

    if (Edad < 16)
    {
        cout << "No puede seguir ya que no tiene la edad suficiente" << endl;
        return 0;
    }

    cout << "Porfavor digite que tipo de usuario es:" << endl;
    cout << "Estudiante=1" << endl;
    cout << "Profesor=2" << endl;
    cout << "Ver todos=3" << endl;
    cin >> Usuario;

    if (Usuario == 1)
    {
        cout << "Su descuento como estudiante es de 20%" << endl;
        cout << "Seleccione que desea" << endl;
        cout << "1. Laptop basica: $900" << endl;
        cout << "2. Tablet estudiantil: $600" << endl;
        cout << "3. Chromebook: $700" << endl;
        cin >> Dispositivos;

        switch (Dispositivos)
        {
        case 1:
        {
            Compra = (900 * 0.20);
            CompraN = (900 - Compra);
            SaldoR = (CompraN - Dinero);
            SaldoRr = (SaldoR * -1);
            if (Compra > Dinero)
            {
                cout << "Su compra no se puede realizar por saldo insuficiente intente mas tarde" << endl;
                cout << "Su saldo faltante es de:" << SaldoRr << endl;
                return 0;
            }
            cout << "Saldo disponible: " << Dinero << endl;
            cout << "Su compra a sido exitosa. Usted compro: Laptop basica" << endl;
            cout << "Su saldo restante es de:" << SaldoRr << endl;
            return 0;
        }
        case 2:
        {
            Compra = (600 * 0.20);
            CompraN = (600 - Compra);
            SaldoR = (CompraN - Dinero);
            SaldoRr = (SaldoR * -1);
            if (Compra > Dinero)
            {
                cout << "Su compra no se puede realizar por saldo insuficiente intente mas tarde" << endl;
                cout << "Su saldo faltante es de:" << SaldoRr << endl;
                return 0;
            }
            cout << "Saldo disponible: " << Dinero << endl;
            cout << "Su compra a sido exitosa. Usted compro: Tablet estudiantil" << endl;
            cout << "Su saldo restante es de:" << SaldoRr << endl;
            return 0;
        }
        case 3:
        {
            Compra = (700 * 0.20);
            CompraN = (700 - Compra);
            SaldoR = (CompraN - Dinero);
            SaldoRr = (SaldoR * -1);
            if (Compra > Dinero)
            {
                cout << "Su compra no se puede realizar por saldo insuficiente intente mas tarde" << endl;
                cout << "Su saldo faltante es de:" << SaldoRr << endl;
                return 0;
            }
            cout << "Saldo disponible: " << Dinero << endl;
            cout << "Su compra a sido exitosa. Usted compro: Chromebook" << endl;
            cout << "Su saldo restante es de:" << SaldoRr << endl;
            return 0;
        }

        break;

        default:
            cout << "Porfavor ingrese un valor correcto";
            break;
        }
    }
    else if (Usuario == 2)
    {
        cout << "Su descuento como Profesional es de 10%" << endl;
        cout << "Seleccione que desea" << endl;
        cout << "1. Laptop Avanzada: $1500" << endl;
        cout << "2. Tablet Pro: $1200" << endl;
        cout << "3. Estacion de Trabajo: $2000" << endl;
        cin >> Dispositivos;

        switch (Dispositivos)
        {
        case 1:
        {
            Compra = (1500 * 0.1);
            CompraN = (1500 - Compra);
            SaldoR = (CompraN - Dinero);
            SaldoRr = (SaldoR * -1);
            if (CompraN > Dinero)
            {
                cout << "Su compra no se puede realizar por saldo insuficiente intente mas tarde" << endl;
                cout << "Su saldo faltante es de:" << SaldoRr << endl;
                return 0;
            }
            cout << "Saldo disponible: " << Dinero << endl;
            cout << "Su compra a sido exitosa. Usted compro: Laptop avanzada" << endl;
            cout << "Su saldo restante es de:" << SaldoRr << endl;
            return 0;
        }
        case 2:
        {
            Compra = (1200 * 0.1);
            CompraN = (1200 - Compra);
            SaldoR = (CompraN - Dinero);
            SaldoRr = (SaldoR * -1);
            if (CompraN > Dinero)
            {
                cout << "Su compra no se puede realizar por saldo insuficiente intente mas tarde" << endl;
                cout << "Su saldo faltante es de:" << SaldoRr << endl;
                return 0;
            }
            cout << "Saldo disponible: " << Dinero << endl;
            cout << "Su compra a sido exitosa. Usted compro: Tablet Pro" << endl;
            cout << "Su saldo restante es de:" << SaldoRr << endl;
            return 0;
        }
        case 3:
        {
            Compra = (2000 * 0.1);
            CompraN = (2000 - Compra);
            SaldoR = (CompraN - Dinero);
            SaldoRr = (SaldoR * -1);
            if (CompraN > Dinero)
            {
                cout << "Su compra no se puede realizar por saldo insuficiente intente mas tarde" << endl;
                cout << "Su saldo faltante es de:" << SaldoRr << endl;
                return 0;
            }
            cout << "Saldo disponible: " << Dinero << endl;
            cout << "Su compra a sido exitosa. Usted compro: Estacion de Trabajo" << endl;
            cout << "Su saldo restante es de:" << SaldoRr << endl;
            return 0;
        }

        break;

        default:
            cout << "Porfavor ingrese un valor correcto";
            break;
        }
    }

    else if (Usuario == 3)
    {
        cout << "Seleccione que desea" << endl;
        cout << "1. Laptop basica: $900" << endl;
        cout << "2. Tablet estudiantil: $600" << endl;
        cout << "3. Chromebook: $700" << endl;
        cout << "4. Laptop Avanzada: $1500" << endl;
        cout << "5. Tablet Pro: $1200" << endl;
        cout << "6. Estacion de Trabajo: $2000" << endl;
    }

    return 0;
}