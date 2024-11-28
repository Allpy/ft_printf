NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -rf
AR = ar rcs

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	@echo "\033[32m✓ built completed\033[0m"
clean:
	@$(RM) $(OBJ)
	@echo "\033[1;33m✓ objects removed\033[0m"

fclean:	clean
	@$(RM) $(NAME)
	@echo "\033[31m✓ library removed\033[0m --> $(NAME)"

re: fclean all


.PHONY: all clean fclean re
