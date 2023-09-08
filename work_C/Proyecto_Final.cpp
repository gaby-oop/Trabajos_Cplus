#include "iostream"
#include "stdlib.h"
#include "string"

using namespace std;

//Declaracion de funciones
void Especialidades();
void Gracias();
void Oftalmologia(int);
void Odontologia(int);
void Dermatologia(int);
void Psicologia(int);

int main()
{
	system("COLOR F1");
    
	int NumAsegurado, Opcion, Fecha;
	string Contrasenia, Nombre, Apellido1,Apellido2;

	
	
	cout<<                      "\n------------------------------------------------\n";
	cout<<                      "\n* Bienvenido al Centro de Solicitudes de Citas * \n";
	cout<<                      "\n------------------------------------------------\n";
	
	//Ingreso de datos del paciente
	 
	cout<< "Ingresa su Nombre: \n";
    cin>>Nombre;
	
	cout<< "Ingresa su Primer Apellido: \n";
	cin>>Apellido1;
	
    cout<< "Ingresa su Segundo Apellido: \n";
	cin>>Apellido2;
	
	do
	{
		cout << "Digite su contrasena: \n";
		cin >> Contrasenia;
		
		if (Contrasenia != "Grupo02")
		{
		cout << "Contrasena incorrecta. Favor intente de nuevo. \n";
		}
	 
	} 
	while (Contrasenia != "Grupo02");
	
		
	cout<<                   "\n--------------------------------------------------\n";
	cout<<                    " * Bienvenido al Sistema " <<Nombre<< " " <<Apellido1<< " " <<Apellido2<< " *";
	cout<<                   "\n--------------------------------------------------\n";
	
	system("Pause");
	
	system("cls");
	//Menu de Especialidades
	   Especialidades();
	   cin>>Opcion;

     if (Opcion==0)//Opcion para salir
	      {
	      	system("cls");
	     	Gracias();	     
	      }
	      
	      while (Opcion !=0)//mientras sea diferente a 0   
	    { 
	   	  switch(Opcion)//consultar fechas y agendar citas
              {
		        case 1://Oftalmologia   
	            cout << "Ingrese la fecha para el mes de Agosto: \n";
		        cin >> Fecha;
		        Oftalmologia(Fecha);
                break;
       
                case 2://Odontologia
                cout << "Ingrese la fecha para el mes de Setiembre: \n";
		        cin >> Fecha;
				Odontologia(Fecha);  
                break;
		                  
                case 3://Dermatologia
                cout << "Ingrese la fecha para el mes de Octubre: \n";
		        cin >> Fecha;
				Dermatologia(Fecha);
			    break;
           
                case 4://Psicologia
                cout << "Ingrese la fecha para el mes de Noviembre: \n";
		        cin >> Fecha;
				Psicologia(Fecha);				
                break;
           
               default:
		       cout<<"Opcion invalida. \n";
		     }
		       
	   system ("Pause");	
	   system("cls");

       Especialidades();
	   cin>>Opcion;

     if (Opcion==0)//Opcion para salir
	      {
	      	system("cls");
	        Gracias();
	      }
	     
     }
}

//Definicion de Funciones

void Especialidades()
{
       cout<<                           "----------------------------------------------\n";
       cout<<                           "*       Especialidades Disponibles:          *\n";
       cout<<                           "*            1. Oftalmologia.                *\n";
       cout<<                           "*            2. Odontologia.                 *\n";
       cout<<                           "*            3. Dermatologia.                *\n";
       cout<<                           "*            4. Psicologia.                  *\n";
       cout<<                           "*            0. Salir.                       *\n";
       cout<<                           "----------------------------------------------\n";
	
	cout<<"Elija una Especialidad o Salir: \n";

}

void Gracias()
{
        cout << "\n-----------------------------------------------------------\n";
		cout << "\n* Gracias por utilizar el Centro de Solicitudes de Citas. *\n";
		cout << "\n-----------------------------------------------------------\n"; 

}

void Oftalmologia(int Fecha)
{
        if (Fecha <20)
		       {
		         cout <<"Su cita ha sido agendada. \n";
		       }
		       
		            else if(Fecha>21, Fecha<22 )
		               {
		                 cout <<"Su cita esta en espera.\n";
		               }
		       
		                      else
		                         {
		       	                   cout <<"Su cita no se pudo agendar por falta de espacio.\n";
		                         }	
}

void Odontologia (int Fecha)
{
	   if (Fecha <10)
		       {
		         cout <<"Su cita ha sido agendada. \n";
		       }
		           else if(Fecha>11, Fecha<12 )
		              {
		                cout <<"Su cita esta en espera.\n";
		              }
		       
		                    else
		                        {
		       	                  cout <<"Su cita no se pudo agendar por falta de espacio.\n";
		                        }
}

void Dermatologia (int Fecha)
{
       if (Fecha <18)
		       {
		         cout <<"Su cita ha sido agendada. \n";
		       }
		            else if(Fecha>19, Fecha<20 )
		              {
		                cout <<"Su cita esta en espera.\n";
		              }
		       
		                    else
		                     {
		       	               cout <<"Su cita no se pudo agendar por falta de espacio.\n";
		                     }
}

void Psicologia(int Fecha)
{
	   if (Fecha <25)
		       {
		         cout <<"Su cita ha sido agendada. \n";
		       }
		            else if(Fecha>26, Fecha<27 )
		              {
		                cout <<"Su cita esta en espera.\n";
		              }
		       
		                   else
		                    {
		       	              cout <<"Su cita no se pudo agendar por falta de espacio.\n";
		                    }
}
