CC = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = megaphone
SRCS = $(notdir $(wildcard *.cpp))
OBJS = $(SRCS:.cpp=.o)
OBJECTS = $(patsubst %.o, %.o, $(OBJS))

DEPS = $(OBJECTS:.o=.d)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(CC) $(CXXFLAGS) $(INCLUDE) -c $< -o $@ -MD $(LDFLAGS)

.PHONY: clean all

clean :
	rm -f $(OBJECTS) $(DEPS)

fclean :
	make clean
	rm -rf $(NAME)

re : 
	make fclean
	make all

-include $(DEPS)