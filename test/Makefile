CC := cc
CFLAGS := -Wall -Wextra -Werror
CPPFLAGS := -I ../../include

TARGET = libds.a
HEADER = linked_list.h
SRCS := $(wildcard */*.c)
OBJS = $(SRCS:.c=.o)

all : $(TARGET)

test :
	@echo "list of files : $(SRCS)"

$(TARGET) : $(OBJS)
	ar -rc $(TARGET) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re :
	make fclean
	make all

.PHONY : all clean fclean re