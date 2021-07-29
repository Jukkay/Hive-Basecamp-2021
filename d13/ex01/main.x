/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 13:33:55 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/23 18:35:08 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
void print_tree(t_btree *root);

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int *item1;
	int *item2;
	int *item3;
	int *item4;
	int *item5;
	
	item1 = &a;
	item2 = &b;
	item3 = &c;
	item4 = &d;
	item5 = &e;

	t_btree *root = NULL;
	t_btree *n1;
	t_btree *n2;
	t_btree *n4;
	t_btree *n5;
	
	root = btree_create_node(item3);
	n1 = btree_create_node(item1);
	n2 = btree_create_node(item2);
	n4 = btree_create_node(item4);
	n5 = btree_create_node(item5);


	root->left = n2;
	root->right = n4;

	btree_apply_prefix(root, &ft_putnbr);
	
	free(root);
	free(n1);
	free(n2);
	free(n3);
	free(n4);
	free(n5);

	return (0);
	
}

void print_tree(t_btree *root)
{
	if (root == 0)
	{
		write(1, "empty node.\n", 12);
	}
	ft_putnbr(root->left);
	write(1, "\n", 1);
	ft_putnbr(root->right);
	write(1, "\n", 1);
	ft_putnbr(root->right);
	write(1, "\n", 1);
}