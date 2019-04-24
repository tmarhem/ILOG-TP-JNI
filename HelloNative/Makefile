CC = gcc

INCLUDES = -I"$(JAVA_HOME)\include\win32" -I"$(JAVA_HOME)\include"

CFLAGS += -D__int64="long long" $(INCLUDES)

OBJS = DisplayLine.o

TARGET = HelloNative.dll


$(TARGET): $(OBJS)
	$(CXX) -shared -o $(TARGET) $(OBJS) DisplayLine.def

#DisplayLine : displayLine.c displayLine.h
#	$(CXX) -c displayLine.c

all: $(TARGET)

clean:
	$(RM) $(OBJS) $(TARGET)
