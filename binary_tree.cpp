// implementation of a simple binary tree in c++

#include <iostream>

using namespace std;

template <class T>
class binary_tree_node
{
	public:
		T data;
		binary_tree_node<T>* right;
		binary_tree_node<T>* left;
};

//pre-order traversal implementation
template <class T>
void do_pre_order(binary_tree_node<T>* root)
{
	if (root != NULL)
	{
		// adding some code to perform some operations
		return root -> data;
		do_pre_order(root -> left)
		do_pre_order(root -> right);
	}
}

int main()
{
	binary_tree_node<int> b;
	b.data = 9;
	cout << b.data << "\n";
	return 0;
}
