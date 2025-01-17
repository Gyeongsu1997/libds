CC := cc
CFLAGS := -Wall -Wextra -Werror
CPPFLAGS := -I ../../include

TARGET := test
SRCS := $(wildcard *.c)

all: $(TARGET)

$(TARGET): $(SRCS)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $(TARGET) $(SRCS) -L../../ -lds
	@make clean

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(TARGET)

re:
	@make fclean
	@make all

.PHONY: all clean fclean re