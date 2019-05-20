TARGET = a
CC = g++
CFLAG = -I
RM = rm
ODIR = ./obj
IDIR = ../include
_DEPS = ArrayList.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))
_OBJS = ArrayList.o main.o
OBJS = $(patsubst %, $(ODIR)/%, $(_OBJS))

$(ODIR)/%.o : %.cpp
	$(CC) -c $< -o $@ $(CFLAG) $(_DEPS) -g

$(TARGET) : $(OBJS)
	$(CC) $^ -o $(TARGET) $(CFLAG) $(_DEPS) -g

clean : 
	$(RM) -rf $(OBJS) $(TARGET)

.PHONY : clean
