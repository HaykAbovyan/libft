CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar crs
RM = rm -f

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all   

.PHONY: all re clean fclean

