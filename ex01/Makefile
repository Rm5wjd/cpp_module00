CC = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = phonebook
SRCS = $(notdir $(wildcard *.cpp))
OBJS = $(SRCS:.cpp=.o)
OBJECTS = $(patsubst %.o, %.o, $(OBJS))

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(CC) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

.PHONY: clean all

clean :
	rm -f $(OBJECTS)

fclean :
	make clean
	rm -rf $(NAME)

re : 
	make fclean
	make all