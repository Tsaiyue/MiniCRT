TARGET_DIR=../target
LIB_DIR=../lib
OBJS_DIR=../object
INCLUDE=../minicrt
CFLAGS=-ggdb -fno-builtin -nostdlib -fno-stack-protector

main:main.o
	ld -static -e mini_crt_entry $(OBJS_DIR)/entry.o $(OBJS_DIR)/main.o $(LIB_DIR)/minicrt.a -o $(TARGET_DIR)/main

main.o:main.c 
	gcc -c $(CFLAGS) main.c -o $(OBJS_DIR)/main.o -I $(INCLUDE)
	
clean:
	rm $(TARGET_DIR)/*

