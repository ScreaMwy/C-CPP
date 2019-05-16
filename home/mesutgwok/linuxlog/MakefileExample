TARGET = a
CC = gcc
RM = rm -rf
CFLAGS = -I.
IDIR = ../include
ODIR = ./obj
_DEPS = a.h b.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))
_OBJS = a.o b.o main.o
OBJS = $(patsubst %, $(ODIR)/%, $(_OBJS))


$(ODIR)/%.o : %.c $(DEPS) 
	$(CC) -c $< -o $@

$(TARGET) : $(OBJS) 
	$(CC) $^ -o $(TARGET) $(CFLAGS)

clean : 
	sudo $(RM) $(TARGET) $(OBJS) 

.PHONY : clean

 
