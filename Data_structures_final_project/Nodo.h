#ifndef NODE_H
#define NODE_H
class Node
{
	private:
		Employee *employee;
		Nodo *next;
		Nodo *prev;
		
	public:
		Node()
		{
			this->employee=NULL;
			this->next=NULL;
			this->prev=NULL;
			
		}
		
		Node(Employee *employee)
		{
			this->employee = employee;
			next = NULL;
			prev = NULL;
		}
		
		~Node()
		{
			cout<<"Node class has been destroyed"<<endl;
		}
		
		void setEmployee(Employee *employee)
		{
			this->employee = employee;
		}
		
		Employee *getEmployee()
		{
			return this->employee;
		}
		
		Node* getNext()
		{
			return this->sig;
		}
		
		Node *getPrevious()
		{
			return this->prev;
		}
		
		void setNext(Node *next)
		{
			this->next = next;
		}
		
		void setPrevious(Node *prev)
		{
			this->prev = prev;
		}
	
};
#endif
