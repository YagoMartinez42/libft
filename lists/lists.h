/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:33:13 by samartin          #+#    #+#             */
/*   Updated: 2023/04/03 16:02:01 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H
# include <stdlib.h>

typedef union u_data
{
	long	lsnum;
	double	dsnum;
	void	*point;
}	t_data;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_bllist
{
	t_data			content;
	struct s_bllist	*next;
	struct s_bllist	*prev;
}	t_bllist;

void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
void		ft_lstremove_if(t_list **lst, void *data_ref, int (*cmp)(void *, void *));
int			ft_lstsize(t_list *lst);
t_list		*ft_lstsort(t_list *lst, int (*cmp)(long, long));
void		ft_bllst_add_back(t_bllist **lst, t_bllist *new);
void		ft_bllst_add_front(t_bllist **lst, t_bllist *new);
t_bllist	*ft_bllst_bubsort(t_bllist *lst, int (*cmp)(t_data, t_data));
void		ft_bllst_clear(t_bllist *lst);
t_bllist	*ft_bllst_first(t_bllist *lst);
void		ft_bllst_iter(t_bllist *lst, void (*f)(t_data));
t_bllist	*ft_bllst_last(t_bllist *lst);
t_bllist	*ft_bllst_new(t_data content);
t_bllist	*ft_bllst_remove_node(t_bllist *node);
int			ft_bllst_size(t_bllist *lst);
int			comp_sigd_asc(t_data a, t_data b);
int			comp_unsd_asc(t_data a, t_data b);
int			comp_sigd_desc(t_data a, t_data b);
int			comp_unsd_desc(t_data a, t_data b);

#endif