#include <iostream>
#include <fstream>
using namespace std;

//DEFINO N PARA UTILIZARLO EN EL ARREGLO
const int N = 100;


int main() 
{

   int a[N];
   int aux,n,i,AUX1;
   char r;

   //ABRO EL ARCHIVO
  ofstream datos;
  string nombreArchivo;
  cout<<"INGRESA EL NOMBRE DEL ARCHIVO: ";
  cin.ignore();
  getline(cin,nombreArchivo);
  datos.open(nombreArchivo.c_str(),ios::app);
  
do
  {
  cout<<"Ingresa el tamaño del arreglo: ";
  cin>>n;
  datos<<"El arreglo original es: ";
  for(int i=0;i<n;i++)
  {
    cout<<"Ingresa un numero positivo de la posición ["<<i<<"] : ";
    cin>>a[i];
    AUX1=AUX1+a[i];
    datos<<"["<<a[i]<<"]";
  }

  //cout<<"La suma es: "<<AUX1<<endl;
  datos<<"\nLa suma es: "<<AUX1<<endl;
  for (int i=0; i<n; i++)
    {  

        aux=a[i];
        int p=i;
        while (p>0)
        {
           if (a[p-1]>aux)
            {
                a[p]=a[p-1];
                a[p-1]=aux;
            }
            p--;
        }
        
    }
    //cout<<"Los valores ordenados son: ";
    datos<<"Los valores ordenados son: ";
    for (int i=0; i<n; i++)
    {
      //cout<<"["<<a[i]<<"]";
      datos<<"["<<a[i]<<"]";
    }
  datos<<endl;
  datos<<"Los elementos totales son: "<<n;
  datos<<endl;
  cout<<"\nDESEA AGREGAR OTRO DATO s/n: ";
  cin>>r;
  cin.ignore();
  }while(r=='s');

  //CIERRO ARCHIVO
  datos.close();

    return 0;
}