SRC = ft_itoa.c    ft_memcmp.c  ft_strchr.c   ft_strlcpy.c  ft_strncmp.c  ft_strrchr.c  ft_toupper.c \
	ft_memchr.c  ft_split.c   ft_strlcat.c  ft_strmapi.c  ft_strnstr.c  ft_tolower.c ft_striteri.c ft_putchar_fd.c  \
	 ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)
NAME = libft.a

CC = cc -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) -c $< -o $@ 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re