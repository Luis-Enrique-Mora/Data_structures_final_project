#include<iostream>
#include "NodeTree.h"
#include "BinTree.h"
#include "conio.h"
#include "EmployeeList.h"
using namespace std;

int main (int argc, char *argv[]) 
{
	
	EmployeeList *listEmployee = new EmployeeList();
	Employee *employee;
	BinTree *tree = new BinTree();
	NodeList *list;
	
	int id = 0;
	string name = "";
	string address = "";
	string telephone = "";
	string profession = "";
	string job = "";
	string department="";
	string hiring_date ="";
	float salary = 0.0;
	
	char opc ='0';
	char opc2 = '0';
	do
	{
		system("cls");
		cout<<"1)insertar nodo"<<endl;
		cout<<"2)Mostrar lista"<<endl;
		cout<<"3)Eliminar"<<endl;
		cout<<"4)Busqueda"<<endl;
		cout<<"5)Modificar"<<endl;
		cout<<"6)Ordenar por nombre"<<endl;
		cout<<"7)Ordenar por cedula"<<endl;
		cout<<"8)Eliminar lista"<<endl;
		cout<<"0)Salir"<<endl;
		
		cout<<"inserte opcion: "<<endl;
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
				
				if(listEmployee->searchEmployee(id) !=  true)
				{
					employee = new Employee(id,name,address,telephone,profession,job,department,hiring_date,salary);
					list = new NodeList(employee);
					listEmployee->insertNewEmployee(list);
					tree->insert(new NodeTree(id,list));
				}
				else
				{
					system("cls");
					cout<<"El usuario existe en la lista"<<endl;
					getch();
				}
				
					
				
				
				break;
				
			case '2':
				listEmployee->printList();
				getch();
				break;
				
			case '3':
				
				break;
			case '4':
					do{
						system("cls");
						cout<<"****Busquedas*****"<<endl;
						cout<<"1)Buscar por cedula"<<endl;
						cout<<"2)Buscar por nombre"<<endl;
						cout<<"3)balancear arbol"<<endl;
						cout<<"4)Verificar cantidad de niveles"<<endl;
						cout<<"0)Salir"<<endl;
						
						cout<<"inserte opcion: "<<endl;
						cin>>opc2;
						switch(opc2)
						{
							case '1':
								
								break;
							case '2':
								
								cout<<"Ingrese el nombre del empleado"<<endl;
								cin>>name;
								listEmployee->searchEmployeeByName(name);
								getch();
								break;
							case '3':
								
								break;
							case '4':
								
								break;
								
							default:
								cout<<"Ingrese una opcion valida"<<endl;
								break;
						}
						
					}while(opc2 != '0');
				
				break;
			case '5':
				
				break;
			case '6':
				
				break;
			case '7':
				listEmployee->sortById();
				break;
			case '8':
				
				break;
			
			default:
				system("cls");
				cout<<"Ingrese una opcion valida"<<endl;
				getch();
				break;
		}
		
		
		
	}while(opc !='0');
	
	return 0;
}

