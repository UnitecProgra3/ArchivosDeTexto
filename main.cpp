#include <iostream>
#include <fstream>

using namespace std;

void escribirNumeros(string nombre_archivo,int cant)
{
    ofstream out(nombre_archivo.c_str());
    for(int i=0;i<cant;i++)
    {
        cout<<"Ingrese un numero: ";
        int num;
        cin>>num;
        out<<num<<' ';
    }
    out.close();
}

int getMayor(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    int mayor=0;
    int num;
    while((in>>num) != NULL)
    {
        cout<<num<<endl;
        if(mayor<num)
            mayor=num;
    }
    in.close();
    return mayor;
}

int main()
{
    //escribirNumeros("numeros",5);
    cout<<"El mayor es: "<<getMayor("numeros");

    return 0;
}
