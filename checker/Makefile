BIN_NAME := checker

SHELL = /bin/sh
RM = /bin/rm

.SUFFIXES:
.SUFFIXES: .c .o .h

include includes.mk sources.mk

OBJ_FILES	=	$(SRC_FILES:%.c=%.o)

LIBS		=	ft

# ****************************** DIRS AND PATHS ****************************** #

LIB_DIR		=	libft

INC_DIR		=	incs
SRC_DIR		=	srcs
OBJ_DIR		=	objs

SUB_DIRS	=	checkers			\
				helpers				\
				operations

SRC_SUBDIRS	=	$(addprefix $(SRC_DIR)/, $(SUB_DIRS))

INC			=	$(addprefix $(INC_DIR)/, $(INC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

INC_PATHS	=	$(INC_DIR) $(addsuffix /$(INC_DIR), $(LIB_DIR))

VPATH		=	$(SRC_DIR) $(SRC_SUBDIRS)

# *************************** COMPILING AND FLAGS **************************** #

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror
CPPFLAGS	=	$(foreach path, $(INC_PATHS), -I$(path))
LDFLAGS		=	-L$(LIB_DIR)
LDLIBS		=	$(foreach lib, $(LIBS), -l$(lib))

DEBUG_CFLAGS = -D DEBUG

# ********************************** RULES *********************************** #

all: $(BIN_NAME)

# INSTALL #

install :
	@make -C $(LIB_DIR)

re-install :
	@make -C $(LIB_DIR) fclean
	@make install

# OBJ DIR #

$(OBJ_DIR):
	@mkdir -p $@
	@echo "Created\t\t$@ directory"

# COMPILING #

$(OBJ_DIR)/%.o : %.c $(INC)
	@echo "\r\033[KCompiling\t$< \c"
	@$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ -c $<

# LINKING #

$(BIN_NAME): $(OBJ_DIR) $(OBJ) $(INC)
	@$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $@
	@echo "\nOK\t\t$@ is ready"

# DEBUG #

debug: CFLAGS += $(DEBUG_CFLAGS)
debug: re
	@echo "DEBUG\t\tDebug build done"

check_leaks: $(BIN_NAME)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./ft_sh

# CLEAN #

clean:
	@make -C $(LIB_DIR) clean
	@$(RM) -rf $(OBJ_DIR)
	@echo "Cleaned\t\tobject files"

fclean: clean
	@$(RM) -f $(BIN_NAME)
	@echo "Removed\t\t$(BIN_NAME)"

re: fclean all

.PHONY: all install re-install debug check_leaks clean fclean re
