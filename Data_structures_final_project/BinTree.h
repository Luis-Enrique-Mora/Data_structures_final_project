#ifndef BINTREE_H
#define BINTREE_H
using namespace std;
class BinTree
{
	private:
		NodeTree *root;
		int counter;
		
	public:
		
		BinTree()
		{
			this->root = NULL;
			this->counter = 0;
		}
		
		~BinTree()
		{
			
		}
		
		int getCounter()
		{
			return counter;
		}
		
		void setRoot(NodeTree *root)
		{
			this->root = root;
		}
		
		NodeTree *getRoot()
		{
			return this->root;
		}
		
		void insert(NodeTree *node)
		{
			this->root = SetPosition(this->root,node);
		}
		
		NodeTree *SetPosition(NodeTree *aux, NodeTree *node)
		{
			if(aux == NULL)
			{
				aux = node;
			}
			else
			{
				if(node->getValue() < aux->getValue())
				{
					aux->setLeft(SetPosition(aux->getLeft(),node));
				}
				else
				{
					aux->setRight(SetPosition(aux->getRight(),node));
				}
			}
			counter ++;
			return aux;
		}
		void search(int id)
		{
			searchEmployee(this->root,id);
		}
		NodeTree *searchEmployee(NodeTree *node,int id)
		{
			if(node == NULL)
			{
				cout<<"No se encontró en la lista"<<endl;
				return NULL;
			}
			else
			{
				if(id == node->getValue())
				{
					Employee *person = node->getList()->getEmployee();
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
					if(id < node->getValue())
					{
						node->setLeft(searchEmployee(node->getLeft(),id));
					}
					else
					{
						node->setRight(searchEmployee(node->getRight(),id));
					}
				}
				
			}
			
			return node;
		}
		
		void recorrer(int tipo)
		{
			switch(tipo)
			{
			case 2:	//recorre orden
				mostrarEnOrden(this->root);
				break;
			case 3:
				recorridoPreorden(this->root);
				break;
				
			}
		}
		
		void mostrarEnOrden(NodeTree *aux)
		{
			if(aux!= NULL)
			{
				mostrarEnOrden(aux->getLeft());
				cout<<aux->getValue()<<", ";
				mostrarEnOrden(aux->getRight());
			}
		}
		
		void recorridoPreorden(NodeTree *node)
		{
			if(node != NULL)
			{
				cout<<"Nodo: "<<node->getValue();
				recorridoPreorden(node->getLeft());
				recorridoPreorden(node->getRight());
			}
		}
	
};
#endif
