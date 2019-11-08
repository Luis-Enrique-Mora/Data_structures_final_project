#include<iostream>
#include "NodeTree.h"
#include "BinTree.h"
#include "conio.h"
using namespace std;

int main (int argc, char *argv[]) {
	
	BinTree *tree = new BinTree();
	Employee *employee;
	NodeList *list;
	int valor = 0;
	int opc =0;
	do
	{
		system("cls");
		cout<<"1)insertar nodo"<<endl;
		cout<<"2)recorrer arbol"<<endl;
		cout<<"inserte opcion: "<<endl;
		cin>>opc;
		switch(opc)
		{
		case 1:
			
			cout<<"Insertar valor entero del nodo"<<endl;
			cin>>valor;
			employee = new Employee(valor,"luis","nicoya","888888","ing","data","1","2020",0.0);
			list = new NodeList(employee);
			tree->insert(new NodeTree(valor,list));
			break;
			
		case 2:
			tree->recorrer(2);
			getch();
			break;
		}
		
		
		
	}while(opc !=0);
	
	return 0;
}

