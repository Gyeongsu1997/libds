CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
CPPFLAGS	:= -I include

SRC_DIR		:= clist dlist list queue stack tree
OBJ_DIR		:= obj

SRCS		:= $(wildcard src/*/*.c)
OBJS		:= $(patsubst src/%.c, $(OBJ_DIR)/%.o, $(SRCS))

TARGET		:= libds.a

all: $(TARGET)

$(TARGET): $(OBJS)
	ar -rc $@ $^

$(OBJ_DIR)/%.o: src/%.c | dir_guard
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(TARGET)

re: fclean
	make all

dir_guard:
	mkdir -p $(addprefix $(OBJ_DIR)/, $(SRC_DIR))

.PHONY: all clean fclean re dir_guard