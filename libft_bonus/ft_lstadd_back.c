#include "libft.h"

void  ft_lstadd_back(t_list **lst, t_list *new)
{
  if (lst && new)
  {
    while (lst -> next != NULL)
      lst = lst -> next;
  }
  lst -> next = new;
  if (!*lst)
    *lst = new;
}