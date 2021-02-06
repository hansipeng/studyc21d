# C compiler options
CC	= gcc
#CFLAGS	= -g -O2             
RELEASE	= release.elf
DEBUG	= debug.elf
LIBS = 
INC	= 

# Source files
SRCS = main.c

# Make everything
all:	$(RELEASE) $(DEBUG)
 
# Make the application
$(RELEASE): $(OBJS)
	$(CC) -o $(RELEASE) $(SRCS) $(LIBS)

$(DEBUG): $(OBJS)
	$(CC) -o $(DEBUG) $(SRCS) $(LIBS) -ggdb3

#
# Clean all object files...
#
clean:
	$(RM) $(DEBUG) $(RELEASE) 
