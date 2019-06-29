/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 20:10:18 by epouros           #+#    #+#             */
/*   Updated: 2019/01/21 19:52:55 by djon-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_fillit_lstdelone(t_list **alst, void (*del)(void **, size_t))
{
	if (!alst || !*alst)
		return ;
	if (del)
		del(&((*alst)->content), 0);
	else
		free((*alst)->content);
	free(*alst);
	*alst = NULL;
}

static void	ft_fillit_lstdel(t_list **alst, void (*del)(void **, size_t))
{
	t_list *tmp;

	if (!alst)
		return ;
	while (*alst != NULL)
	{
		tmp = (*alst)->next;
		ft_fillit_lstdelone(alst, del);
		*alst = tmp;
	}
}

static void	ft_del_cont(void **content, size_t size)
{
	t_tetris *cont;

	size += 0;
	cont = (t_tetris*)(*content);
	free(cont->x);
	free(cont->y);
	free(cont);
	*content = NULL;
}

void		ft_tetfree(t_list **ft_head)
{
	ft_fillit_lstdel(ft_head, &ft_del_cont);
	ft_lstfree(ft_head);
}
