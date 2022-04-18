#include <stdlib.h>
#include "libft.h"

t_size  *ft_lstnew(void *content)
{
  t_size  *new;

  new = (t_size)malloc(sizeof(t_size));
  if (new == NULL)
    return (NULL);
  new -> content = content;
  new -> next = NULL;
  return (new);
}