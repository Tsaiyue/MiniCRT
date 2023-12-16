LIB_DIR=../lib
OBJS_DIR=../object
OBJS=entry.o malloc.o printf.o stdio.o string.o
CFLAGS=-ggdb -fno-builtin -nostdlib -fno-stack-protector

minicrt.a:$(OBJS) 
	ar -rs $(LIB_DIR)/minicrt.a $(OBJS_DIR)/*.o

$(OBJS):%.o:%.c
	gcc -c $(CFLAGS) $< -o $(OBJS_DIR)/$@
	
clean:
	rm $(LIB_DIR)/*.a $(OBJS_DIR)/*.o 

	


