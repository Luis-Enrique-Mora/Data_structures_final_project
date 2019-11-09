#ifndef NODETREE_H
#define NODETREE_H
#include "NodeList.h"
class NodeTree
{
	private:
		int value;
		NodeList *list;
		NodeTree *left;
		NodeTree *right;
		
	public:
		NodeTree()
		{
			this->value = 0;
			this->right = NULL;
			this->left = NULL;
			this->list = NULL;
		}
		
		NodeTree(int value, NodeList *list)
		{
			this->value = value;
			this->right = NULL;
			this->left = NULL;
			this->list = list;
		}
		
		~NodeTree()
		{
			
		}
		
		void setList(NodeList *list)
		{
			this->list = list;
		}
		NodeList *getList()
		{
			return this->list;
		}
		void setValue(int value)
		{
			this->value = value;
		}
		
		int getValue()
		{
			return this->value;
		}
		
		void setLeft(NodeTree *left)
		{
			this->left = left;
		}
		
		NodeTree *getLeft()
		{
			return this->left;
		}
		
		void setRight(NodeTree *right)
		{
			this->right = right;
		}
		
		NodeTree *getRight()
		{
			return this->right;
		}
	
};
#endif
