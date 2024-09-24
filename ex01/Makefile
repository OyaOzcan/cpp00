NAME = Phonebook

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
