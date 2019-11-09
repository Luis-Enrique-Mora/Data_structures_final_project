#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H
#include "NodeList.h"
#include "BinTree.h"
class EmployeeList
{
	private:
		NodeList *head;
		NodeTree *nodeTree;
		int counter;
		
	public:
		
		EmployeeList()
		{
			this->head = NULL;
			this->nodeTree = NULL;
			this->counter = 0;
		}
		
		EmployeeList(int counter)
		{
			this->counter = counter;
			this->head = NULL;
			this->nodeTree = NULL;
		}
		
		bool empty()
		{
			return this->head == NULL;
		}
		
		void insertNewEmployee(NodeList *node)
		{
			if(!empty())
			{
				node->setNext(head);
				head->setPrevious(node);
				head = node;
			}
			else
			{
				head = node;
			}
		}
		
		void printList()
		{
			NodeList *aux = NULL;
			aux = head;
			
			if (!empty()) 
			{
				
				while(aux != NULL)
				{
					cout<<"*----------------------------------------------------*"<<endl;
					cout<<"Cedula: "<<aux->getEmployee()->getId()<<endl;
					cout<<"Nombre: "<<aux->getEmployee()->getName()<<endl;
					cout<<"Direccion: "<<aux->getEmployee()->getAddress()<<endl;
					cout<<"Telefono: "<<aux->getEmployee()->getTelephone()<<endl;
					cout<<"Profesion: "<<aux->getEmployee()->getProfession()<<endl;
					cout<<"Puesto: "<<aux->getEmployee()->getJob()<<endl;
					cout<<"Fecha de contratacion: "<<aux->getEmployee()->getHiring_date()<<endl;
					cout<<"Salario: "<<aux->getEmployee()->getSalary()<<endl;
					cout<<"*-----------------------------------------------------*"<<endl;
					aux = aux->getNext();
				}
				
			}
			else
			{
				cout<<"Lista de empleados vacia"<<endl;
			}
		}
};
#endif
