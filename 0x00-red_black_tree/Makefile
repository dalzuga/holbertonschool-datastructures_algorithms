all: rb_tree_node rb_tree_valid

rb_tree_node: 0-main.c 0-rb_tree_node.c
	gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-rb_tree_node.c rb_tree_print.c -o rb_tree_node
rb_tree_valid: 1-main.c 1-rb_tree_is_valid.c rb_trees.h
	gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-rb_tree_is_valid.c 0-rb_tree_node.c  rb_tree_print.c -o rb_tree_valid
