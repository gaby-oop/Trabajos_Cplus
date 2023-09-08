//Proyecto 1- Elaborado por Gabriela Sanchez, Korina Montero, Manuel Morales, Marta Chaves, Sebastian Bones.

#include "stdio.h"
#include "iostream"
#include "math.h"
#define PI 3.14159265

using namespace std;
int main() 
{
//Creaci�n de las variables
float num1, num2;
int opcion; 
float resultado;

		
//Ingreso de datos 
cout<<"======Menu de Opciones======"<<endl;
cout<<"Ingrese la opcion de la operacion que desea realizar: "<<endl;
cout<<"1. Para Suma"<<endl;
cout<<"2. Para Resta"<<endl;
cout<<"3. Para Multiplicacion"<<endl;
cout<<"4. Para Division"<<endl;
cout<<"5. Para Raiz"<<endl;
cout<<"6. Para Exponente"<<endl;
cout<<"7. Para Promedio"<<endl;
cout<<"8. Para Hipotenusa"<<endl;
cout<<"9. Para Area de circulo"<<endl;
cout << "\n" << endl;
cin>>opcion;
cout<<"======================="<<endl;

switch(opcion)
   {
	case 1:
	cout<<"Ingrese un numero: "<< endl;
	cin>>num1;
	cout<<"Ingrese otro numero: "<< endl;
	cin>>num2;	
    resultado=num1+num2;
    cout<<"El resultado de la suma es: "<<resultado<< endl;
   break;
	
	case 2:
	cout<<"Ingrese un numero: "<< endl;
	cin>>num1;
	cout<<"Ingrese otro numero: "<< endl;
	cin>>num2;	
    resultado= num1-num2;
    cout<<"El resultado de la resta es: "<<resultado<< endl;
   break;
	
	case 3:
	cout<<"Ingrese un numero: "<< endl;
	cin>>num1;
	cout<<"Ingrese otro numero: "<< endl;
	cin>>num2;	
    resultado= num1*num2;
    cout<<"El resultado de la multiplicacion es: "<<resultado<< endl;
   break;
	
	case 4:
	cout<<"Ingrese un numero: "<< endl;
	cin>>num1;
	cout<<"Ingrese otro numero: "<< endl;
	cin>>num2;	
    resultado= num1/num2;
    cout<<"El resultado de la division es: "<<resultado<< endl;
   break;
    
    case 5:
	cout<<"Ingrese un numero:"<< endl;
	cin>>num1;
    resultado= sqrt(num1);
    cout<<"La raiz cuadra de "<<num1<<" es:"<<resultado<< endl;
   break;
     
    case 6:
    cout<<"Ingrese la base: " << endl;
    cin>>num1;
    cout<<"Ingrese el exponente: " << endl;
    cin>>num2;
    resultado = pow(num1,num2);
    cout << num1 << " elevado a la " << num2 << " es igual a: " << resultado << endl;
   break;
     
    case 7:
    cout<<"Ingrese la Primer Nota: " << endl;
    cin>>num1;
    cout<<"Ingrese la Segunda Nota: " << endl;
    cin>>num2;
	resultado = (num1+ num2)/2;
	cout<<"Promedio Obtenido es: " <<resultado << endl;
   break;
    
    case 8:
    cout<<"Calcula la Hipotenusa de un Triangulo por medio del Teorema de Pitagoras"<<endl<<endl;
    cout<<"Ingrese el valor del cateto A: " << endl;
    cin>>num1;
    cout<<"Ingrese el valor del cateto B: " << endl;
    cin>>num2;
	resultado = sqrt(pow(num1,2)+pow(num2,2));
	cout<<"La hipotenusa es: " <<resultado << endl;
   break;
    
    case 9:
    cout<<"Calcula el area de un circulo"<<endl<<endl;
    cout<<"Ingrese el valor del radio: " << endl;
    cin>>num1;
    resultado = PI*num1*num1;
	cout<<"El area del circulo es: " <<resultado << endl;
   break;
      
    }
		
   system("pause");
   return 0;		
}
