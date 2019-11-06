#ifndef NODELIST_H
#define NODELIST_H
#include "Employee.h"
class NodeList
{
	private:
		Employee *employee;
		NodeList *next;
		NodeList *prev;
		
	public:
		NodeList()
		{
			this->employee=NULL;
			this->next=NULL;
			this->prev=NULL;
			
		}
		
		NodeList(Employee *employee)
		{
			this->employee = employee;
			next = NULL;
			prev = NULL;
		}
		
		~NodeList()
		{
			
		}
		
		void setEmployee(Employee *employee)
		{
			this->employee = employee;
		}
		
		Employee *getEmployee()
		{
			return this->employee;
		}
		
		NodeList* getNext()
		{
			return this->next;
		}
		
		NodeList *getPrevious()
		{
			return this->prev;
		}
		
		void setNext(NodeList *next)
		{
			this->next = next;
		}
		
		void setPrevious(NodeList *prev)
		{
			this->prev = prev;
		}
	
};
#endif
