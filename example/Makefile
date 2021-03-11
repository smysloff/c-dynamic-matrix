NAME		:= main

CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra
DFLAGS		:= -g
OFLAGS		:= -O3

rm			:= rm -rf

SRCS_PATH 	:= ../src

SRCS		:= $(SRCS_PATH)/matrix.c
OBJS		:= $(SRCS_PATH)/matrix.o

%.o: %.c
	@$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@
all: $(NAME)

$(NAME): $(OBJS) main.c $(SRCS_PATH)/matrix.h
	@$(CC) $(CFLAGS) $(DFLAGS) $(OBJS) main.c -I$(SRCS_PATH) -o $(NAME)
	@echo "make: $(NAME) has been successfully compiled"

clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
