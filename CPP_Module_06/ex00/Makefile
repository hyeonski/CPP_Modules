NAME =	convert
FLAGS =	-Wall -Wextra -Werror -std=c++98
CC =	clang++
SRCS =	main.cpp
OBJS =	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all