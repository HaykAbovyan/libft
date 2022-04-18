#include "libft.h"

int ft_lstsize(t_list *lst)
{
  int count;

  count = 0;
  if (lst)
  {
    while (lst -> next != NULL)
    {
      count++;
      lst = lst -> next;
    }
  }
  return (count);
}