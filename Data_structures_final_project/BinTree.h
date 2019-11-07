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
		
		bool search(int id)
		{
			return returnSearch(id,this->root);
		}
		
		bool returnSearch(int id, NodeTree *aux)
		{
			if(aux == NULL)
			{
				return false;
			}
			else
			{
				if(id == aux->getValue())
				{
					return true;
				}
				else if(id < aux->getValue())
				{
					aux->setLeft(aux->getLeft());
					returnSearch(id,aux);
				}
				else
				{
					aux->setRight(aux->getRight());
					returnSearch(id,aux);
				}
			}
			
			return false;
			
		}
		
};
#endif
