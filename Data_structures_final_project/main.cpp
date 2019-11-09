#include<iostream>
#include "NodeTree.h"
#include "BinTree.h"
#include "conio.h"
#include "EmployeeList.h"
using namespace std;

int main (int argc, char *argv[]) {
	
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
	do
	{
		system("cls");
		cout<<"1)insertar nodo"<<endl;
		cout<<"2)recorrer arbol"<<endl;
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
			
			
				employee = new Employee(id,name,address,telephone,profession,job,department,hiring_date,salary);
				list = new NodeList(employee);
				listEmployee->insertNewEmployee(list);
				tree->insert(new NodeTree(id,list));
			
			
			break;
			
		case '2':
			tree->recorrer(2);
			getch();
			break;
		}
		
		
		
	}while(opc !='0');
	
	return 0;
}

