#ifndef NODETREE_H
#define NODETREE_H
class NodeTree
{
	private:
		int value;
		NodeTree *left;
		NodeTree *right;
		
	public:
		NodeTree()
		{
			this->value = 0;
			this->right = NULL;
			this->left = NULL;
		}
		
		NodeTree(int value)
		{
			this->value = value;
			this->right = NULL;
			this->left = NULL;
		}
		
		~NodeTree()
		{
			
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
