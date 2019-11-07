/*
Notas y comentarios
ya esta lista la estructura basica de las clases
tambien esta listo el metodo insertar
falta todo lo demàs.
*/
#include<iostream>
#include "conio.h"
#include "EmployeeList.h"
#include "BinTree.h"
#include "Employee.h"
using namespace std;

int main (int argc, char *argv[]) {
	
	//object varables
	EmployeeList *list = new EmployeeList();
	Employee *employee=NULL;
	BinTree *tree = new BinTree();
	//employee variables
	int id;
	string name;
	string address;
	string telephone;
	string profession;
	string job;
	string department;
	string hiring_date;
	float salary;
	
	//menu variables
	char opc ='0';
	char opc2 = '0';
	
	do
	{
		system("cls");
		cout<<"1)Nuevo empleado    |"<<endl;
		cout<<"2)Mostrar lista     |"<<endl;
		cout<<"3)Eliminar empleado |"<<endl;
		cout<<"4)Buscar            |"<<endl;
		cout<<"5)Modificar         |"<<endl;
		cout<<"6)Ordenar           |"<<endl;
		cout<<"7)Eliminar lista    |"<<endl;
		cout<<"0)Cerrar            |"<<endl;
		cout<<"---------------------"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		
		switch(opc)
		{
			case '1':
				system("cls");
				cout<<"**********Formulario insertar empleado*********"<<endl;
				cout<<"Ingrese numero de cedula"<<endl;
				cin>>id;
				fflush(stdin);
				cout<<"Ingrese nombre"<<endl;
				cin>>name;
				fflush(stdin);
				cout<<"Ingrese direccion"<<endl;
				getline(cin,address);
				fflush(stdin);
				cout<<"Ingrese numero de telefono"<<endl;
				cin>>telephone;
				fflush(stdin);
				cout<<"Ingrese profesion"<<endl;
				cin>>profession;
				fflush(stdin);
				cout<<"Ingrese puesto"<<endl;
				cin>>job;
				fflush(stdin);
				cout<<"Ingrese departamento"<<endl;
				cin>>department;
				fflush(stdin);
				cout<<"Ingrese fecha de contratacion"<<endl;
				cin>>hiring_date;
				fflush(stdin);
				cout<<"Ingrese salario"<<endl;
				cin>>salary;
				fflush(stdin);
				
				employee = new Employee(id,name,address,telephone,profession,job,department,hiring_date,salary);
				if(tree->search(id) == false)
				{
					list->insertNewEmployee(new NodeList(employee));
				}
				else
				{
					cout<<"El empleado con el numero de cedula "<<id<<" ya esxiste en la lista"<<endl;
				}
				
				break;
				
			case '2':
				system("cls");
				list->printList();
				getch();
				break;
				
			case '3':
				
				getch();
				break;
				
			case '4':
//*****************************************switch 4 ***********************************************				
				do
				{
					system("cls");
					cout<<"1)Buscar por cedula               |"<<endl;
					cout<<"2)Buscar por nombre               |"<<endl;
					cout<<"3)Balancear arbol                 |"<<endl;
					cout<<"4)Verificar cantidad de niveles   |"<<endl;
					cout<<"0)Menu principal                  |"<<endl;
					cout<<"---------------------"<<endl;
					cout<<"Opcion: ";
					cin>>opc2;
					
					switch(opc2)
					{
						case '1':
							
							cout<<"Ingrese numero de cedula"<<endl;
							cin>>id;
							break;
							
						case '2':
							
							
							getch();
							break;
							
						case '3':
							
							getch();
							break;
							
						case '4':
							
							getch();
							break;
							
						default:
							
							cout<<"Selecione una opcion valida"<<endl;
							getch();
							break;
					}
					
				}while(opc2 !='0');
				
				break;
//*****************************************switch 4********************************************************
			case '5':
				
				getch();
				break;
				
			case '6':
				
				getch();
				break;
				
			case '7':
				
				getch();
				break;
				
			default:
				
				cout<<"Selecione una opcion valida"<<endl;
				getch();
				break;
		}
		
		
		
	}while(opc !='0');
	return 0;
}



