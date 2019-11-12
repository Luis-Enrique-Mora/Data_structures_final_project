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
		//insert new node in the binary tree
		void insert(NodeTree *node)
		{
			NodeTree *temp = NULL;
			temp = &*node;
			this->root = SetPosition(this->root,temp);
		}
		//this method search a position for the incoming node
		NodeTree *SetPosition(NodeTree *aux, NodeTree *node)
		{
			if(aux == NULL)
			{
				aux = node;
			}
			else
			{	
				//this two methods travels around the tree to find the right position
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
		
		NodeTree *minValueNode(NodeTree *node)
		{
			NodeTree *current = node;
			
			while(current && current->getLeft() != NULL)
			{
				current = current->getLeft();
			}
			
			return current;
		}
		
		void Delete(int id)
		{
			deleteNode(this->root,id);
		}
		
		NodeTree* minimumKey(NodeTree* curr)
		{
			while(curr->getLeft() != nullptr) {
				curr = curr->getLeft();
			}
			return curr;
		}
		
		void searchKey(NodeTree* &curr, int id, NodeTree* &parent)
		{
			// traverse the tree and search for the key
			while (curr != nullptr && curr->getValue() != id)
			{
				// update parent node as current node
				parent = curr;
				
				// if given key is less than the current node, go to left subtree
				// else go to right subtree
				if (id < curr->getValue())
					curr = curr->getLeft();
				else
					curr = curr->getRight();
			}
		}
		
		void deleteNode(NodeTree*& aux, int id)
		{
			// pointer to store parent node of current node
			NodeTree* parent = NULL;
			
			// start with root node
			NodeTree* curr = aux;
			
			// search key in BST and set its parent pointer
			searchKey(curr, id, parent);
			
			// return if key is not found in the tree
			if (curr == NULL)
				return;
			
			// Case 1: node to be deleted has no children i.e. it is a leaf node
			if (curr->getLeft() == NULL && curr->getRight() == NULL)
			{
				// if node to be deleted is not a root node, then set its
				// parent left/right child to null
				if (curr != aux)
				{
					if (parent->getLeft() == curr)
					{
						parent->setLeft(NULL);
					}
						
					else
					{
						
					}
						parent->setRight(NULL);
				}
				// if tree has only root node, delete it and set root to null
				else
					aux = NULL;
				
				// deallocate the memory
				free(curr);	 // or delete curr;
			}
			
			// Case 2: node to be deleted has two children
			else if (curr->getLeft() && curr->getRight())
			{
				// find its in-order successor node
				NodeTree* successor  = minimumKey(curr->getRight());
				
				// store successor value
				int val = successor->getValue();
				NodeList *list = NULL;
				list = successor->getList();
				
				// recursively delete the successor. Note that the successor
				// will have at-most one child (right child)
				deleteNode(aux, successor->getValue());
				
				// Copy the value of successor to current node
				curr->setValue(val);
				curr->setList(list);
			}
			
			// Case 3: node to be deleted has only one child
			else
			{
				// find child node
				NodeTree* child = (curr->getLeft())? curr->getLeft(): curr->getRight();
				
				// if node to be deleted is not a root node, then set its parent
				// to its child
				if (curr != aux)
				{
					if (curr == parent->getLeft())
						parent->setLeft(child);
					else
						parent->setRight(child);
				}
				
				// if node to be deleted is root node, then set the root to child
				else
					aux = child;
				
				// deallocate the memory
				free(curr);
			}
		}
		// this method call searchEmployee method to print the user who is searched 
		void search(int id)
		{
			searchEmployee(this->root,id);
		}
		NodeTree *searchEmployee(NodeTree *node,int id)
		{
			//if this is null means could not find the Employee in the BST
			if(node == NULL)
			{
				cout<<"No se encontró en la lista"<<endl;
				return NULL;
			}
			else
			{	//if the Employee in found print all its information, else keep running the tree
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
		
		void show()
		{
			ShowInOrder(this->root);
		}
		
		void ShowInOrder(NodeTree *aux)
		{
			if(aux!= NULL)
			{
				ShowInOrder(aux->getLeft());
				cout<<aux->getValue()<<", ";
				ShowInOrder(aux->getRight());
			}
		}
		
	
};
#endif
