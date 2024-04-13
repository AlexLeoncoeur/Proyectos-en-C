CFILES = ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_isprint.c \
ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_memcmp.c ft_bzero.c *ft_memchr.c *ft_memcpy.c \
*ft_memmove.c *ft_memset.c *ft_strchr.c *ft_strrchr.c *ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c

OFILES = $(CFILES:.c=.o)

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

$(OFILES): $(CFILES)
	$(CC) $(CFLAGS) -c $(CFILES) 

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re