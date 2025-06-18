SRC = ft_itoa.c    ft_memcmp.c  ft_strchr.c   ft_strlcpy.c  ft_strncmp.c  ft_strrchr.c  ft_toupper.c \
	ft_memchr.c  ft_split.c   ft_strlcat.c  ft_strmapi.c  ft_strnstr.c  ft_tolower.c ft_striteri.c
OBJ = $(SRC:.c=.o)

NAME = libft.a

CC	=	gcc -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)
	
%.o : %.c
	$(CC) -c $< 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re