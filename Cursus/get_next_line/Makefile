CFILES = get_next_line.c get_next_line_utils.c

BONUS_CFILES = 

OFILES = $(CFILES:.c=.o)
BONUS_OFILES = $(BONUS_CFILES:.c=.o)

CC = gcc
NAME = get_next_line.a
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME) $(BONUS_OFILES)

re: fclean all

bonus: $(BONUS_OFILES) $(OFILES)
	ar rcs $(NAME) $(OFILES) $(BONUS_OFILES)

$(BONUS_OFILES): $(BONUS_CFILES)
	$(CC) $(CFLAGS) -c $(BONUS_CFILES)

.PHONY: all clean fclean re