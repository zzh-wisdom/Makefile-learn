CC=gcc -Wall
INCLUDE=-I include  # 头文件目录
SRC=-c $<        # 全部依赖文件  $<第一个依赖文件
OBJ=-o $@        # 目标文件
MAINOBJS=obj/main.o obj/st_work.o obj/fun.o

bin/st_work : $(MAINOBJS)
	$(CC) -o $@ $^
obj/st_work.o : src/st_work.c
	$(CC) $(INCLUDE) $(SRC) $(OBJ)
obj/main.o : src/main.c
	$(CC) $(INCLUDE) $(SRC) $(OBJ)
obj/fun.o : src//%.c ./include/fun.h
	$(CC) $(INCLUDE) $(SRC) $(OBJ)
.PHONY:clean
clean:
	rm -f bin/st_work $(MAINOBJS)