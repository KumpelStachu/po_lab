NAME=po_lab1

CC=clang++
FLAGS=-Wall -Werror -Wextra -std=c++17
DEBUG_FLAGS=-g -fsanitize=address
SRC=*.cpp
LIBS=
RM =rm -rf

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(LIBS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

run: clean all
	./$(NAME)

debug: clean
	$(CC) $(FLAGS) $(DEBUG_FLAGS) $(LIBS) $(SRC) -o $(NAME)
