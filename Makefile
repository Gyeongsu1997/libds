CC := cc
CFLAGS := -Wall -Wextra -Werror
CPPFLAGS := -I include

TARGET := libds.a
HEADER := linked_list.h
SRCS := $(wildcard src/*/*.c)
OBJS := $(SRCS:.c=.o)

all: $(TARGET)

test:
	@echo "list of files : $(OBJS)"

$(TARGET) : $(OBJS)
	@ar -rc $(TARGET) $(OBJS)
	@make clean

%.o: %.c
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re:
	make fclean
	make all

.PHONY: all clean fclean re