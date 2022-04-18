#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
  while ( *lst -> next != NULL)
  {
    del(*lst -> next);
    free(*lst -> next);
    *lst = *lst -> next;
  }
}