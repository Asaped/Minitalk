NAME		=	server

NAME2		=	client

SRCS		=	server.c

SRCS2		=	client.c

OBJS		=	$(SRCS:.c=.o)

OBJS2		=	$(SRCS2:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

all			:	$(NAME) $(NAME2)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
			
$(NAME2)		:	$(OBJS2)
				$(CC) $(CFLAGS) -o $(NAME2) $(OBJS2)


clean		: 
				$(RM) $(OBJS) $(OBJS2)

fclean		:	clean
				$(RM) $(NAME) $(NAME2)

re			:	fclean all

.PHONY		:	all clean fclean re

