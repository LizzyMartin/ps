NAME		= push_swap
LIBFT		= libft
LIBFT_LIB	= libft.a

SRCS		= 	src/push_swap.c \
				src/init/input.c \
				src/init/check.c \
				src/init/error.c \
				src/init/array_to_stack.c \
				src/utils/largest.c \
				src/utils/smallest.c \
				src/utils/target.c \
				src/utils/coordinates.c \
				src/utils/move.c \
				src/utils/plan_bottom_bottom.c \
				src/utils/plan_top_top.c \
				src/utils/plan_top_bottom.c \
				src/utils/plan_bottom_top.c \
				src/utils/fix_middle.c \
				src/utils/b_to_a.c \
				src/utils/find_index.c \
				src/oper/sa.c \
				src/oper/ra.c \
				src/oper/rra.c \
				src/oper/pa.c \
				src/oper/pb.c \
				src/oper/rb.c \
				src/oper/rr.c \
				src/oper/rrb.c \
				src/oper/rrr.c \
				src/oper/sb.c \
				src/oper/ss.c \
				src/sort/heapsort.c \
				src/sort/sort.c \
				src/sort/sort_two.c \
				src/sort/sort_three.c \
				src/sort/sort_four.c \
				src/sort/sort_five.c \
				src/sort/sort_big.c


OBJS		= $(SRCS:%.c=%.o)

LIBC		= ar rc

FLAGS		= -Wall -Wextra -Werror -ggdb3 -O0

all			:	$(NAME)

$(NAME)		:	$(OBJS)
		make all -C $(LIBFT)/
		gcc -o $(NAME) $(OBJS) -Llibft -lft

%.o			:	%.c
		gcc $(FLAGS) -c $^ -I./ -o $@


clean		:
		rm -f $(OBJS)
		make clean -C $(LIBFT)

fclean		:	clean
		rm -f $(NAME)
		rm -f $(LIBFT_LIB)
		make fclean -C $(LIBFT)

re			:	fclean all

.PHONY		:	all clean fclean re