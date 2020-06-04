st_work : main.o  st_work.o  fun.o
	gcc  main.o  st_work.o  fun.o  -o st_work 
st_work.o : st_work.c
	gcc  -c st_work.c  -o st_work.o
main.o : main.c  st_work.h
	gcc -c main.c -o  main.o
fun.o : fun.c fun.h
	gcc -c fun.c -o fun.o
clean:
	rm -f st_work *.o    # 同时删除多个文件