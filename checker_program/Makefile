# Folders and Names
NAME		= checker
SRCSDIR		= srcs
OBJSDIR		= objs
INCLUDES	= incs
EXTLIB		= libft

SRCS		= main.c \
			  errors/errors.c \
			  core/execute_input.c core/sort_check.c \
			  utils/init_stacks.c utils/print_stacks.c \
			  utils/double_linked_list.c \
			  operations/push.c operations/reverse_rotate.c operations/swap.c \
			  operations/rotate.c

# Compiler options
CC			= gcc
CFLAGS		= -Wall -Wextra -g3 -fsanitize=address

###################################################
# The rest is done by the MakeFile automatically, #
# you should not have to modify it				  #
###################################################

OBJS	= $(SRCS:%.c=$(OBJSDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(EXTLIB)/$(EXTLIB).a
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJS): $(OBJSDIR)/%.o: $(SRCSDIR)/%.c
	@mkdir -p $(@D)
	@echo Compiling $<
	@$(CC) $(CFLAGS) -I$(INCLUDES) -I$(EXTLIB)/incs -c $< -o $@

$(EXTLIB)/$(EXTLIB).a:
	@echo "Compiling $@"
	@$(MAKE) -s -C $(EXTLIB) > /dev/null

clean:
	rm -rf $(OBJSDIR)
	@$(MAKE) -s -C $(EXTLIB) clean

fclean: clean
	rm -rf $(NAME)
	@$(MAKE) -s -C $(EXTLIB) fclean

re: fclean all

test: all
	./$(NAME)

.PHONY: all clean fclean re test
