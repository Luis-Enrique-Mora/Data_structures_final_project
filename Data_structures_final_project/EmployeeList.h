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
					cout<<"*------------------------------------------*"<<endl;
					cout<<"Cedula:       "<<aux->getEmployee()->getId()<<endl;
					cout<<"Nombre:       "<<aux->getEmployee()->getName()<<endl;
					cout<<"Direccion:    "<<aux->getEmployee()->getAddress()<<endl;
					cout<<"Telefono:     "<<aux->getEmployee()->getTelephone()<<endl;
					cout<<"Profesion:    "<<aux->getEmployee()->getProfession()<<endl;
					cout<<"Puesto:       "<<aux->getEmployee()->getJob()<<endl;
					cout<<"Contratacion: "<<aux->getEmployee()->getHiring_date()<<endl;
					cout<<"Salario:      "<<aux->getEmployee()->getSalary()<<endl;
					cout<<"*------------------------------------------*"<<endl;
					aux = aux->getNext();
				}
				
			}
			else
			{
				cout<<"Lista de empleados vacia"<<endl;
			}
		}
		
		void modify(Employee *employee, int id)
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
						aux->setEmployee(employee);
						cout<<"Employee modified!"<<endl;
					}
				}
				
				
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
					cout<<"------------------------------"<<endl;
					cout<<"Cedula:        "<<person->getId()<<endl;
					cout<<"Nombre:        "<<person->getName()<<endl;
					cout<<"Direccion:     "<<person->getAddress()<<endl;
					cout<<"Telefono:      "<<person->getTelephone()<<endl;
					cout<<"Profesion:     "<<person->getProfession()<<endl;
					cout<<"Puesto:        "<<person->getJob()<<endl;
					cout<<"departamento:  "<<person->getDepartment()<<endl;
					cout<<"Contratacion:  "<<person->getHiring_date()<<endl;
					cout<<"Salario:       "<<person->getSalary()<<endl;
					cout<<"------------------------------"<<endl;
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
		
		void deleteNode(int id)
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
					NodeList *temp = aux;
					NodeList *prev = aux->getPrevious();
					aux = aux->getNext();
					prev->setNext(aux);
					delete temp;
				}
				else
				{
					cout<<"No esxiste el empleado "<<id<<endl;
				}
				
				
			}
			else
			{
				cout<<"No hay datos en la lista"<<endl;
			}
		}
		
		void sortById() 
		{
			NodeList *temp = head->getNext();
			NodeList *previous = NULL;
			NodeList *next = temp;
			
			int id = 0;
			string name = "";
			string address = "";
			string telephone = "";
			string profession = "";
			string job = "";
			string department="";
			string hiring_date ="";
			float salary = 0.0;
			
			int id2 = 0;
			string name2 = "";
			string address2 = "";
			string telephone2 = "";
			string profession2 = "";
			string job2 = "";
			string department2="";
			string hiring_date2 ="";
			float salary2 = 0.0;
			
			while(temp != NULL)
			{
				next = temp;
				previous = temp->getPrevious();
				
				
				
				while(previous->getEmployee()->getId() > next->getEmployee()->getId() )
				{	
					//si el anterior es mayor al siguiente van a intercambiar valores
					id = previous->getEmployee()->getId();
					name = previous->getEmployee()->getName();
					address = previous->getEmployee()->getAddress();
					telephone = previous->getEmployee()->getTelephone();
					profession = previous->getEmployee()->getProfession();
					job = previous->getEmployee()->getJob();
					department= previous->getEmployee()->getDepartment();
					hiring_date =previous->getEmployee()->getHiring_date();
					salary = previous->getEmployee()->getSalary();
					
					id2 = next->getEmployee()->getId();
					name2 = next->getEmployee()->getName();
					address2 = next->getEmployee()->getAddress();
					telephone2 = next->getEmployee()->getTelephone();
					profession2 = next->getEmployee()->getProfession();
					job2 = next->getEmployee()->getJob();
					department2 = next->getEmployee()->getDepartment();
					hiring_date2 =next->getEmployee()->getHiring_date();
					salary2 = next->getEmployee()->getSalary();
					
					next->setEmployee(new Employee(id,name,address,telephone,profession,job,department,hiring_date,salary));
					
					previous->setEmployee(new Employee(id2,name2,address2,telephone2,profession2,job2,department2,hiring_date2,salary2));
					
					//si el nodo anterior del anterior == NUll cabeza = anterior
					if(previous->getPrevious() == NULL)
					{
						head = previous;
					}
					
					/*si el anterior del anterior es nulo quiere decir que es el fin de la lista entonces sale del while,
					sino se devulve para atras para comprobar que haya otro mayor que el siguiente para cambiarlos de posicion*/
					if (previous->getPrevious() == NULL || next == NULL)
					{
						break;
					}
					else
					{
						previous = previous->getPrevious();
						next = next->getPrevious();
					}
					
				}
				temp = temp->getNext();
			}
		}
		
		void sortByName() 
		{
			NodeList *temp = head->getNext();
			NodeList *previous = NULL;
			NodeList *next = temp;
			
			int id = 0;
			string name = "";
			string address = "";
			string telephone = "";
			string profession = "";
			string job = "";
			string department="";
			string hiring_date ="";
			float salary = 0.0;
			
			int id2 = 0;
			string name2 = "";
			string address2 = "";
			string telephone2 = "";
			string profession2 = "";
			string job2 = "";
			string department2="";
			string hiring_date2 ="";
			float salary2 = 0.0;
			
			while(temp != NULL)
			{
				next = temp;
				previous = temp->getPrevious();
				
				
				
				while(previous->getEmployee()->getName().compare(next->getEmployee()->getName()) > 0  )
				{	
					//si el anterior es mayor al siguiente van a intercambiar valores
					id = previous->getEmployee()->getId();
					name = previous->getEmployee()->getName();
					address = previous->getEmployee()->getAddress();
					telephone = previous->getEmployee()->getTelephone();
					profession = previous->getEmployee()->getProfession();
					job = previous->getEmployee()->getJob();
					department= previous->getEmployee()->getDepartment();
					hiring_date =previous->getEmployee()->getHiring_date();
					salary = previous->getEmployee()->getSalary();
					
					id2 = next->getEmployee()->getId();
					name2 = next->getEmployee()->getName();
					address2 = next->getEmployee()->getAddress();
					telephone2 = next->getEmployee()->getTelephone();
					profession2 = next->getEmployee()->getProfession();
					job2 = next->getEmployee()->getJob();
					department2 = next->getEmployee()->getDepartment();
					hiring_date2 =next->getEmployee()->getHiring_date();
					salary2 = next->getEmployee()->getSalary();
					
					next->setEmployee(new Employee(id,name,address,telephone,profession,job,department,hiring_date,salary));
					
					previous->setEmployee(new Employee(id2,name2,address2,telephone2,profession2,job2,department2,hiring_date2,salary2));
					
					//si el nodo anterior del anterior == NUll cabeza = anterior
					if(previous->getPrevious() == NULL)
					{
						head = previous;
					}
					
					/*si el anterior del anterior es nulo quiere decir que es el fin de la lista entonces sale del while,
					sino se devulve para atras para comprobar que haya otro mayor que el siguiente para cambiarlos de posicion*/
					if (previous->getPrevious() == NULL || next == NULL)
					{
						break;
					}
					else
					{
						previous = previous->getPrevious();
						next = next->getPrevious();
					}
					
				}
				temp = temp->getNext();
			}
		}
};
#endif
