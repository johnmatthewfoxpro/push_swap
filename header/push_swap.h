/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:14:17 by jfox              #+#    #+#             */
/*   Updated: 2026/01/28 15:57:04 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>

typedef struct s_stack
{
	int		*values;
	int		index;
	int		capacity;
}	t_mystack;

/***********************\
*      PUSH_SWAP        *
\***********************/

//static void init_stack(t_mystack *stack, int *input, int index, int capacity)
//static int	check_isspace(char **argv);
//static int	*complete_input(char **argv, int *capacity);

/***********************\
*     INPUT_CHECK       *
\***********************/

char	*join_input(char **argv);
char	**checkall_input(char **string_input);
size_t	ft_strtablelen(char **s);
int		*dup_check(int *input, int size);
//static int check_string(char *string);

/***********************\
*     INPUT_UTILS       *
\***********************/

void	free_strings(char **strings);
int		check_empty(char **argv);
int		*convert_input(char **string_input, int size);
int		*normalise(int *input, int capacity);
//static int	ft_pushswap_atoi(const char *str, int *ctrl);

/***********************\
*      SORT_UTILS       *
\***********************/

int		check_sorted(int *input, int capacity);
int		check_stacked(t_mystack *a);

/***********************\
*      SORT_SHORT       *
\***********************/

void	shortsort(t_mystack *a, t_mystack *b);
//static void	sort3(t_mystack *a);
//static void	sort4(t_mystack *a, t_mystack *b);
//static void	sort5(t_mystack *a, t_mystack *b);

/***********************\
*      SORT_LONG        *
\***********************/

void	longsort(t_mystack *a, t_mystack *b);
void	putback(t_mystack *a, t_mystack *b);
//static int	find_index(t_mystack *s, int index);

/***********************\
*         SWAP          *
\***********************/

void	sa(int *value_a, int index);
void	sb(int *value_b, int index);
void	ss(int *value_a, int *value_b, int index_a, int index_b);

/***********************\
*         PUSH          *
\***********************/

void	pa(t_mystack *a, t_mystack *b);
void	pb(t_mystack *a, t_mystack *b);

/***********************\
*        ROTATE         *
\***********************/

void	ra(int *value_a, int index);
void	rb(int *value_b, int index);
void	rr(int *value_a, int *value_b, int index_a, int index_b);

/***********************\
*        REVERSE        *
\***********************/

void	rra(int *value_a, int index);
void	rrb(int *value_b, int index);
void	rrr(int *value_a, int *value_b, int index_a, int index_b);

#endif