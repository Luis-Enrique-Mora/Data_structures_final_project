#ifndef BINTREE_H
#define BINTREE_H
#include "NodeTree.h"
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
			this->root = setPosition(this->root,node);
		}
		
		NodeTree *setPosition(NodeTree *aux, NodeTree *node)
		{
			if(aux == NULL)
			{
				aux = node;
			}
			else
			{
				if(node->getValue() < aux->getValue())
				{
					aux->setLeft(setPosition(aux->getLeft(),node));
				}
				else
				{
					aux->setRight(setPosition(aux->getRight(),node));
				}
			}
			counter ++;
			return aux;
		}
		
};
#endif
