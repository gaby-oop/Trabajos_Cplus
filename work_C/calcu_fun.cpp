#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;

//declaracion de funciones

  void Suma();
  void Resta();
  void Multiplicacion();
  void Division();
  void Raiz();
  void Exponente();
  void Promedio();

  
int main()
{
       int Opcion;

	   cout<<"======Menu de Opciones======\n";
       cout<<"Ingrese la opcion de la operacion que desea realizar:  \n";
       cout<<"1. Para Suma\n";
       cout<<"2. Para Resta\n";
       cout<<"3. Para Multiplicacion\n";
       cout<<"4. Para Division\n";
       cout<<"5. Para Raiz\n";
       cout<<"6. Para Exponente\n";
       cout<<"7. Para Promedio\n";
       cout<<"8. Para Hipotenusa\n";
       cout<<"9. Para Area de circulo\n";
       cout <<"0.Para salir.\n";
       cin>>Opcion;
       cout<<"=======================\n";
    
	while (Opcion !=0)    
	    {
		switch(Opcion)
        {
		   case 1://Suma
                system("cls");
				Suma (num1,num2);
                break;
       
           case 2://Resta
               system("cls");
               Resta();
               break;
           
           case 3://Multiplicacion
               system("cls");
               Multiplicacion();
               break;
           
           case 4://Division
               system("cls");
               Division();
               break;
           
           case 5://Raiz
               system ("cls");
		       Raiz();
		       break;
		       
		  case 6://Exponente
		      system("cls");
		      Exponente();
		      break;
		      
		  case 7://Promedio
		      system("cls");
		      Promedio();
		      break;
		              
		
   default: cout<<"Opcion invalida \n";
   system ("Pause");
   system("cls");
}
       cout<<"======Menu de Opciones======\n";//este menu 
       cout<<"Ingrese la opcion de la operacion que desea realizar:  \n";
       cout<<"1. Para Suma\n";
       cout<<"2. Para Resta\n";
       cout<<"3. Para Multiplicacion\n";
       cout<<"4. Para Division\n";
       cout<<"5. Para Raiz\n";
       cout<<"6. Para Exponente\n";
       cout<<"7. Para Promedio\n";
       cout<<"8. Para Hipotenusa\n";
       cout<<"9. Para Area de circulo\n";
       cout <<"0.Para salir.\n";
       cin>>Opcion;
       cout<<"=======================\n";

}
    system("cls");
	cout << "\n Gracias por utilizar la calculadora. :) \n";
}


//Operaciones de 
void Suma()
{         
          system("cls");		
          cout<<"\n\n Suma \n";
  	      int num1, num2, resultado;
  	      cout<<"Ingrese un numero: \n";
	      cin>>num1;
	      cout<<"Ingrese otro numero: \n";
	      cin>>num2;	
          resultado=num1+num2;
          cout<<"El resultado de la suma es: "<<resultado<< "\n";
          system("Pause");
          system("cls");
          
      }
        
void Resta()
 {  
          system("cls");		
          cout<<"\n\n Resta \n";
  	      int num1, num2, resultado;
  	      cout<<"Ingrese un numero: \n";
	      cin>>num1;
	      cout<<"Ingrese otro numero: \n";
	      cin>>num2;	
          resultado=num1-num2;
          cout<<"El resultado de la resta es: "<<resultado<< "\n";
          system("Pause");    
	      system("cls");
      }
      
void Multiplicacion()    
 {  
          system("cls");		
          cout<<"\n\n Multiplicacion \n";
  	      int num1, num2, resultado;
  	      cout<<"Ingrese un numero: \n";
	      cin>>num1;
	      cout<<"Ingrese otro numero: \n";
	      cin>>num2;	
          resultado=num1*num2;
          cout<<"El resultado de la multiplicacion es: "<<resultado<< "\n";
          system("Pause");  
		  system("cls");
      }
      
void Division()    
 {  
          system("cls");		
          cout<<"\n\n Division \n";
  	      int num1, num2, resultado;
  	      cout<<"Ingrese un numero: \n";
	      cin>>num1;
	      cout<<"Ingrese otro numero: \n";
	      cin>>num2;	
          resultado=num1/num2;
          cout<<"El resultado de la division es: "<<resultado<< "\n";
          system("Pause");     
          system("cls");
      }
      
void Raiz()    
 {  
        system("cls");		
        cout<<"Ingrese un numero: \n";
		int num1;
	    int resultado;
	    cin>>num1;
        resultado= sqrt(num1);
        cout<<"La raiz cuadra de "<<num1<<" es:"<<resultado<< "\n";
        system("Pause"); 
		system("cls");        
      }    
      
 void Exponente()
{
	system("cls");
  	cout<<"\n\n Potencia \n";
	int num1, num2;
	cout<<"Ingrese la base: ";
    cin>> num1;
    cout<<"Ingrese la potencia: ";
    cin>> num2;
    
    int base=num1;
    int resultadopotencia;
    resultadopotencia=num1;
    for (int i=1;i<num2;i++)
    {
    resultadopotencia=resultadopotencia*base;    
	cout << num1 << " elevado a la " << num2 << " es igual a: " << resultadopotencia << "\n";
    }
    	system("Pause"); 
    	system("cls");
    }
    
void Promedio()
{
    system("cls");
    cout<<"\n\n Promedio \n";
    int num1, num2, resultado;
	cout<<"Ingrese la Primer Nota: \n";
    cin>>num1;
    cout<<"Ingrese la Segunda Nota: \n";
    cin>>num2;
	resultado = (num1+ num2)/2;
	cout<<"Promedio Obtenido es: " <<resultado << "\n";
	system("Pause");
	system("cls");
}
