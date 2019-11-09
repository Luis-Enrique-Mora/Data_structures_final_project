#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H
#include "NodeList.h"
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
					cout<<"Cedula:       "<<aux->getEmployee()->getId()<<endl;
					cout<<"Nombre:       "<<aux->getEmployee()->getName()<<endl;
					cout<<"Direccion:    "<<aux->getEmployee()->getAddress()<<endl;
					cout<<"Telefono:     "<<aux->getEmployee()->getTelephone()<<endl;
					cout<<"Profesion:    "<<aux->getEmployee()->getProfession()<<endl;
					cout<<"Puesto:       "<<aux->getEmployee()->getJob()<<endl;
					cout<<"Contratacion: "<<aux->getEmployee()->getHiring_date()<<endl;
					cout<<"Salario:      "<<aux->getEmployee()->getSalary()<<endl;
					cout<<"*-----------------------------------------------------*"<<endl;
					aux = aux->getNext();
				}
				
			}
			else
			{
				cout<<"Lista de empleados vacia"<<endl;
			}
		}
		
		bool searchEmployee(int id)
		{
			NodeList *aux;
			Employee *person;
			if(!empty())
			{
				aux=head;
				
				person = aux->getEmployee();
				while(aux!=NULL && person->getId()!= id)
				{	
					aux=aux->getNext();
					if(aux == NULL)
					{break;}
					person = aux->getEmployee();
					
				}
				if(aux != NULL)
				{
					if(person->getId() == id)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
				
				
			}
			else
			{
				return false;
			}
			
		}
		
		void searchEmployeeByName(string name)
		{
			NodeList *aux;
			Employee *person;
			if(!empty())
			{
				aux=head;
				
				person = aux->getEmployee();
				while(aux!=NULL && person->getName()!= name)
				{	
					aux=aux->getNext();
					if(aux == NULL)
					{break;}
					person = aux->getEmployee();
					
				}
				if(aux != NULL)
				{
					cout<<"-----------------------------------"<<endl;
					cout<<"Cedula:        "<<person->getId()<<endl;
					cout<<"Nombre:        "<<person->getName()<<endl;
					cout<<"Direccion:     "<<person->getAddress()<<endl;
					cout<<"Telefono:      "<<person->getTelephone()<<endl;
					cout<<"Profesion:     "<<person->getProfession()<<endl;
					cout<<"Puesto:        "<<person->getJob()<<endl;
					cout<<"departamento:  "<<person->getDepartment()<<endl;
					cout<<"Contratacion:  "<<person->getHiring_date()<<endl;
					cout<<"Salario:       "<<person->getSalary()<<endl;
					cout<<"-----------------------------------"<<endl;
				}
				else
				{
					cout<<"No esxiste el empleado "<<name<<endl;
				}
				
				
			}
			else
			{
				cout<<"No hay datos en la lista"<<endl;
			}
		}
};
#endif
