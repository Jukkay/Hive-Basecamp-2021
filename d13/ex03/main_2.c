#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

// applyf function to print the item value
void applyf(void* item)
{
	printf("%s\n", (char*)item);
}

void print_tabs(int numtabs) //nicer indentation - better formatted
{
	for (int i = 0; i < numtabs; i++)
	{
		printf("\t");
	}
}
//recursive level of print tree & it takes a level
void	print_tree_rec(t_btree *root, int level)
{
	if (root == 0) // if root is NULL, print out 'empty'
	{
		print_tabs(level);//indentation here where I indent to the particular level 
		printf("---<empty>---\n");
		return;
	}
	//PRE-ODER TRAVERSAL because basically we're going to print out the data in the node first followed by the left subtree then followed by the right subtree
	print_tabs(level);
	printf("item = %s\n", root->item);
	print_tabs(level);
	printf("left\n");
	
	print_tree_rec(root->left, level+1); // print tree that is the left subtree
	print_tabs(level);
	printf("right\n");
	
	print_tree_rec(root->right, level+1); // print tree that is the right subtree
	
	print_tabs(level);
	printf("done\n");
}
//for the root node it is going to use an indentation level of zero and then when it goes to the left subtree, it's going to increment that indentation level by one
void	print_tree(t_btree *root)  
{
	print_tree_rec(root, 0);
}

int		main(void)
{
	t_btree *n1 = btree_create_node("test"); 
	t_btree *n2 = btree_create_node("test1");
	t_btree *n3 = btree_create_node("test2");
	t_btree *n4 = btree_create_node("test3");
	t_btree *n5 = btree_create_node("test4");

	n1->left = n2; // n1 is root, n2 is left child
	n1->right = n3; // n1 is root, n3 is right child
	n3->left = n4; //n4 is left child of n3
	n3->right = n5; //n5 is right child of n3

	print_tree(n1);
	printf("\n");
	btree_apply_suffix(n1, applyf); // call the function to go through the tree and the applyf function print item value out

	free(n1);
	free(n2);
	free(n3);
	free(n4);
	free(n5);
}