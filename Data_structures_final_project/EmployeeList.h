#ifndef LISTNODE_H
#define LISTNODE_H
#include "NodeList.h"
class EmployeeList
{
	private:
		NodeList *head;
		int counter;
	
	public:
		
		EmployeeList()
		{
			this->head = NULL;
			counter = 0;
		}
		
		EmployeeList(int counter)
		{
			this->counter = counter;
		}
		
		bool empty()
		{
			return this->head == NULL;
		}
		
		void insertNewNode(NodeList *node)
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
					cout<<"*----------------------------------------------------------------*"<<endl;
					cout<<"Cedula: "<<aux->getEmployee()->getId()<<                        "*"<<endl;
					cout<<"Nombre: "<<aux->getEmployee()->getName()<<                      "*"<<endl;
					cout<<"Direccion: "<<aux->getEmployee()->getAddress()<<                "*"<<endl;
					cout<<"Telefono: "<<aux->getEmployee()->getTelephone()<<               "*"<<endl;
					cout<<"Profesion: "<<aux->getEmployee()->getProfession()<<             "*"<<endl;
					cout<<"Puesto: "<<aux->getEmployee()->getJob()<<                       "*"<<endl;
					cout<<"Fecha de contratacion: "<<aux->getEmployee()->getHiring_date()<<"*"<<endl;
					cout<<"Salario: "<<aux->getEmployee()->getSalary()<<                   "*"<<endl;
					aux = aux->getNext();
					cout<<"*--------------------------------------------------------------- *"<<endl;
				}
				
			}
			else
			{
				cout<<"Lista de empleados vacia"<<endl;
			}
		}
};
#endif
