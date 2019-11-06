#include<iostream>
#include "conio.h"
#include "EmployeeList.h"
#include "BinTree.h"
using namespace std;

int main (int argc, char *argv[]) {
	
	EmployeeList *list = new EmployeeList();
	int idNumber = 0;
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
				
				cout<<"Insertar valor entero del nodo"<<endl;
				break;
				
			case '2':
				
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
							cin>>idNumber;
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



