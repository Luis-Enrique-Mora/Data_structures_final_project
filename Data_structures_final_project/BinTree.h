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
		NodeTree *search( int id)
		{
			NodeTree *node = searchEmployee(this->root,id);
			if(node == NULL)
			{
				return NULL;
			}
			else
			{
				return node;
			}
		}
		NodeTree *searchEmployee(NodeTree *node,int id)
		{
			if(node == NULL)
			{
				return NULL;
			}
			else
			{
				if(id == node->getValue())
				{
					return node;
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
