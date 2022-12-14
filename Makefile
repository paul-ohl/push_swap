PUSH_SWAP		= push_swap
PUSH_SWAP_DIR	= push_swap_program
CHECKER			= checker
CHECKER_DIR		= checker_program

all:
	@$(MAKE) -s -C $(CHECKER_DIR)
	@$(MAKE) -s -C $(PUSH_SWAP_DIR)
	cp $(CHECKER_DIR)/$(CHECKER) ./
	cp $(PUSH_SWAP_DIR)/$(PUSH_SWAP) ./

clean:
	@$(MAKE) -s -C $(CHECKER_DIR) clean
	@$(MAKE) -s -C $(PUSH_SWAP_DIR) clean

fclean: clean
	@$(MAKE) -s -C $(CHECKER_DIR) fclean
	@$(MAKE) -s -C $(PUSH_SWAP_DIR) fclean
	rm ./$(CHECKER)
	rm ./$(PUSH_SWAP)

re: fclean all

.PHONY: all clean fclean re
