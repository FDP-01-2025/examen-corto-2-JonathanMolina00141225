#include <iostream>
using namespace std;

int main(){
    int Edad = 0, Usuario = 0, Dispositivos;
    double Compra = 0, Dinero = 1000, SaldoR = 0;
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

    switch (Usuario)
    {
    case 1 :
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
            SaldoR = (Compra - Dinero);
            if (Compra > Dinero)
            {
                cout << "Su compra no se puede realizar por saldo insuficiente intente mas tarde" << endl;
            }
            cout << "Saldo disponible: " << Dinero << endl;
            cout << "Su compra se a podido completar :)" << endl;
            cout << "Su saldo restante es de:" << SaldoR << endl;
            return 0;
        }
        case 2:
        {
            Compra = (600 * 0.20);
            SaldoR = (Compra - Dinero);
            if (Compra > Dinero)
            {
                cout << "Su compra no se puede realizar por saldo insuficiente intente mas tarde" << endl;
            }
            cout << "Saldo disponible: " << Dinero << endl;
            cout << "Su compra se a podido completar :)" << endl;
            cout << "Su saldo restante es de:" << SaldoR << endl;
        }
        case 3:
        {
            Compra = (700 * 0.20);
            SaldoR = (Compra - Dinero);
            if (Compra > Dinero)
            {
                cout << "Su compra no se puede realizar por saldo insuficiente intente mas tarde" << endl;
            }
            cout << "Saldo disponible: " << Dinero << endl;
            cout << "Su compra se a podido completar :)" << endl;
            cout << "Su saldo restante es de:" << SaldoR << endl;
        }

        break;

        default:
            cout << "Porfavor ingrese un valor correcto";
            break;
        }
        break;

        case 2 :
        /* code */
        break;  
         case 3 :
        /* code */
        break;
    default:
        break;
    }
}