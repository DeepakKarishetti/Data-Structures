// Binary search tree operations template

#include <iostream>

using namespace std;

template <class T>
class binary_tree_node
{
	public:
		T data;
		binary_tree_node<T>* left;
		binary_tree_node<T>* right;
}

// in order traversal:
//	- Visit left subtree
// 	- Visit root
//  	- Visit right subtree
template <class T>
void print_inorder(binary_tree_node<T>* root)
{
	if (root != NULL)
	{
		print_inorder(root -> left);
		cout << root -> data << " ";
		print_inorder(root -> right);
	}
}

// Searching
template <class T>
binary_tree_node<T>* search(binary_tree_node<T>* root, T val)
{
	if (root == NULL) return NULL;
	if (val == root -> data) return root;
	if (val < root -> data)
	{
		return search(root -> left, val);
	}
	else
	{
		return search(root -> right, val);
	}
}

// Inserting
template <class T>
void insert(binary_tree_node<T>*& root, T val)
{
	if (root == NULL)
	{	
		root = new binary_tree_node<T>(val);
	}
	else if (val < tree -> info)
	{
		insert(tree -> left, val);
	}
	else if (val > tree -> info)
	{
		insert(tree -> right, val);
	}
}

// Removing
// case 1: No child
// case 2: One child
// case 3: Two children
template <class T>
void remove(binary_tree_node<T>*& root, T val)
{
	// base case, if item not found then do nothing
	if ( root == NULL) return NULL;

	// recursive calls to find the item to delete
	if (val < root -> data) 
	{
		remove(root -> left, val);
	}
	else if (val > root -> data)
	{
		remove(root -> right, val);
	}

	// cases 1 and 2 both handled in this
	else
	{
		// when item found!
		if (root -> left == NULL || root -> right == NULL)
		{
			binary_tree_node<T>* tmp;
			if (root -> left == NULL)
			{
				tmp = root -> right;
			}
			else
			{
				tmp = root -> left;
			}
			delete root;
			root = tmp;
		}
	}

	// for case 3
	else
	{
		binary_tree_node<T>* tmp = root -> left; // find rightmost node
		binary_tree_node<T>* parent = root; // in left subtree
		while (tmp -> right != NULL)
		{
			parent = tmp;
			tmp = tmp -> right;
		}
		root -> data = tmp -> data; // copy data to root

		if (parent == root) // detach and delete rightmost node
		{
			root -> left = tmp -> left; // in left subtree
		}
		else
		{
			parent -> right = tmp -> left;
		}
		delete tmp;
	}
}
