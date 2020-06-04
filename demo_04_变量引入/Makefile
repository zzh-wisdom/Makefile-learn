CC=gcc -Wall
INCLUDE=-I include  # 头文件目录
SRC=-c $<        # 第一个依赖文件
OBJ=-o $@        # 目标文件

bin/st_work : obj/main.o  obj/st_work.o  obj/fun.o
	$(CC) $^ -o $@
obj/st_work.o : src/st_work.c
	$(CC) $(INCLUDE) $(SRC) $(OBJ)
obj/main.o : src/main.c
	$(CC) $(INCLUDE) $(SRC) $(OBJ)
obj/fun.o  : src/fun.c
	$(CC) $(INCLUDE) $(SRC) $(OBJ)
clean:
	rm -f bin/st_work obj/*.o