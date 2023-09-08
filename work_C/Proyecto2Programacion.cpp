//Proyecto realizado por Gabriela Sanchez
#include "stdio.h"
#include "iostream"
#include "math.h"
#define PI 3.14159265
#include "string"
using namespace std;

//Declaracion de funciones
void Dibujar(string,float, float, float);
void DibujarDos(float,float,string);
void Suma (float,float);
void Resta (float,float);
void Multiplicacion (float,float);
void Division (float,float);
void Raiz(float);
void Exponente(float, float);
void Promedio(float,float);
void Hipotenusa(float,float);
void AreaCirculo(float);

int main()

{

	   //Creacion de variables
	   float Num1, Num2;
       int Opcion; 
       float Resultado;
       string Signo;
       string Operacion;
       
	   cout<<                           "============Menu=============\n";
       cout<<                           "|      Opciones:            |\n";
       cout<<                           "|      1. Suma              |\n";
       cout<<                           "|      2. Resta             |\n";
       cout<<                           "|      3. Multiplicacion    |\n";
       cout<<                           "|      4. Division          |\n";
       cout<<                           "|      5. Raiz              |\n";
       cout<<                           "|      6. Exponente         |\n";
       cout<<                           "|      7. Promedio          |\n";
       cout<<                           "|      8. Hipotenusa        |\n";
       cout<<                           "|      9. Area de circulo   |\n";
       cout<<                           "|      0. Salir.            |\n";
       cout<<                           "=============================\n";
       
	   cout<<"Elija una opcion: \n";
	   cin>>Opcion;

     if (Opcion==0)//opcion de salir
	      {
	     	cout << "\nGracias por utilizar la calculadora. :) \n";
	     	system ("Pause");
	      }

    while (Opcion !=0)//mientras sea diferente a 0   
	    { 
	   	  switch(Opcion)
              {
		        case 1://Suma    
	            cout <<"Primer numero: \n";
		        cin>>Num1;
		        cout <<"Segundo numero: \n";
		        cin>>Num2; 
		        Suma(Num1,Num2);		
                break;
       
                case 2://Resta
                cout <<"Primer numero: \n";
		        cin>>Num1;
		        cout <<"Segundo numero: \n";
		        cin>>Num2; 
		        Resta(Num1,Num2);
                break;
           
                case 3://Multiplicacion
                cout <<"Primer numero: \n";
		        cin>>Num1;
                cout <<"Segundo numero: \n";
		        cin>>Num2; 
		        Multiplicacion(Num1,Num2);
                break;
           
                case 4://Division
                cout <<"Primer numero: \n";
		        cin>>Num1;
                cout <<"Segundo numero numero: \n";
		        cin>>Num2; 
		        Division(Num1,Num2);
                break;
           
                case 5://Raiz
                cout <<"Primer numero: \n";
		        cin>>Num1;
		        Raiz(Num1);
                break;
		       
		       case 6://Exponente
		       cout<<"Elija una opcion \n";
		       cout <<"Base: \n";
		       cin>>Num1;
               cout <<"Potencia: \n";
		       cin>>Num2; 
		       Exponente(Num1,Num2);
		       break;
		      
		       case 7://Promedio
		       cout <<"Primer numero: \n";
		       cin>>Num1;
		       cout <<"Segundo numero: \n";
		       cin>>Num2; 
		       Promedio(Num1,Num2);
		       break;
		      
		       case 8:///Hipotenusa
		       cout <<"Cateto A: \n";
		       cin>>Num1;
		       cout <<"Cateto B: \n";
		       cin>>Num2; 
		       Hipotenusa(Num1,Num2);
		       break;
		              
		       case 9://Area de circulo
		       cout <<"Radio: \n";
		       cin>>Num1;
		       AreaCirculo(Num1);
		       break;   

               default:
		       cout<<"Opcion invalida \n";
              
            }

	   	   	
	   system ("Pause");	
	   system("cls");
	   
	   cout<<                           "============Menu=============\n";
       cout<<                           "|      Opciones:            |\n";
       cout<<                           "|      1. Suma              |\n";
       cout<<                           "|      2. Resta             |\n";
       cout<<                           "|      3. Multiplicacion    |\n";
       cout<<                           "|      4. Division          |\n";
       cout<<                           "|      5. Raiz              |\n";
       cout<<                           "|      6. Exponente         |\n";
       cout<<                           "|      7. Promedio          |\n";
       cout<<                           "|      8. Hipotenusa        |\n";
       cout<<                           "|      9. Area de circulo   |\n";
       cout<<                           "|      0. Salir.            |\n";
       cout<<                           "=============================\n";
      
	   cout<<"Elija una opcion: \n";
	   cin>>Opcion;
	   
	   
	   if (Opcion==0)//opcion de salir
	   {
	   	cout << "\nGracias por utilizar la calculadora. :) \n";
	   	system ("Pause");
	   }

    }

}

	   	   	
//Definicion de funciones

void Dibujar(string Signo, float Num1, float Num2, float Resultado)
{

cout<<"                 _______________________________________\n";
cout<<"                |              CALCULADORA              |\n";
cout<<"                |_______________________________________|\n";
cout<<"                |"<<Num1<<"                             |\n";
cout<<"                |"<<Signo<<"                            |\n";
cout<<"                |"<<Num2<<"                             |\n";
cout<<"                |=                                      |\n";
cout<<"                |"<<Resultado<<                        "|\n";
cout<<"                |_______________________________________|\n";  
cout<<"                |   C   |   v   |   %   |   /   |       |\n";  
cout<<"                |-------|-------|-------|-------|       |\n";
cout<<"                |   7   |   8   |   9   |   x   |       |\n";
cout<<"                |-------|-------|-------|-------|       |\n";
cout<<"                |   4   |   5   |   6   |   -   |       |\n";
cout<<"                |-------|-------|-------|-------|       |\n";
cout<<"                |   1   |   2   |   3   |   +   |       |\n";
cout<<"                |-------|-------|-------|-------|-------|\n";
cout<<"                |   p   |   0   |   .   |   ^   |   =   |\n";
cout<<"                |_______|_______|_______|_______|_______|\n";

}

void DibujarDos(string Signo, float Num1, float Resultado)
{

cout<<"                 _______________________________________\n";
cout<<"                |              CALCULADORA              |\n";
cout<<"                |_______________________________________|\n";
cout<<"                |"<<Signo<<"                            |\n";
cout<<"                |"<<Num1<<"                             |\n";
cout<<"                |=                                      |\n";
cout<<"                |"<<Resultado<<"                        |\n";
cout<<"                |_______________________________________|\n";  
cout<<"                |   C   |   v   |   %   |   /   |       |\n";  
cout<<"                |-------|-------|-------|-------|       |\n";
cout<<"                |   7   |   8   |   9   |   x   |       |\n";
cout<<"                |-------|-------|-------|-------|       |\n";
cout<<"                |   4   |   5   |   6   |   -   |       |\n";
cout<<"                |-------|-------|-------|-------|       |\n";
cout<<"                |   1   |   2   |   3   |   +   |       |\n";
cout<<"                |-------|-------|-------|-------|-------|\n";
cout<<"                |   p   |   0   |   .   |   ^   |   =   |\n";
cout<<"                |_______|_______|_______|_______|_______|\n";

}


void Suma (float Num1, float Num2)
{
	string Signo="+";
    float Resultado;
	Resultado=Num1+Num2;
	Dibujar(Signo,Num1, Num2, Resultado);	
}

void Resta (float Num1, float Num2)
{
	string Signo="-";
    float Resultado;
	Resultado=Num1-Num2;
	Dibujar(Signo, Num1, Num2, Resultado);	
}

void Multiplicacion (float Num1, float Num2)
{
	    
	string Signo="*";
    float Resultado;
	Resultado=Num1*Num2;
	Dibujar(Signo, Num1,Num2, Resultado);	
}

void Division (float Num1, float Num2)
{
	    
	string Signo="/";
    float Resultado;
	Resultado=Num1/Num2;
	Dibujar(Signo,Num1, Num2, Resultado);	
}

void Raiz (float Num1)
{
	string Signo="v";
    float Resultado;
	Resultado= sqrt(Num1);
	DibujarDos(Signo, Num1, Resultado);
	}

void Exponente(float Num1, float Num2)
{
	string Signo="^";
    float base=Num1;
    float ResultadoPotencia;
    ResultadoPotencia=Num1;
    for (float i=1;i<Num2;i++)
    {
    ResultadoPotencia=ResultadoPotencia*base;    
    }
    Dibujar(Signo, Num1,Num2, ResultadoPotencia);
}	

void Promedio(float Num1, float Num2)
{
	string Signo="X¯";
	float Resultado;
	Resultado = (Num1+ Num2)/2;
	Dibujar(Signo, Num1, Num2, Resultado);
	}
	
void Hipotenusa (float Num1,float Num2)
{
    string Signo="*, +";
	float Resultado;
	Resultado = sqrt(pow(Num1,2)+pow(Num2,2));
	Dibujar(Signo, Num1, Num2, Resultado);
	}
	
void AreaCirculo (float Num1)
{
	string Signo="A"; 
	float Resultado;
	Resultado = PI*Num1*Num1;
	DibujarDos(Signo, Num1, Resultado);
}
