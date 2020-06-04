bin/st_work : obj/main.o  obj/st_work.o  obj/fun.o
	gcc  obj/main.o obj/st_work.o obj/fun.o -o bin/st_work  
obj/st_work.o : src/st_work.c
	gcc  -I  include -c src/st_work.c -o obj/st_work.o
obj/main.o : src/main.c
	gcc  -I  include -c src/main.c -o obj/main.o
obj/fun.o : src/fun.c
	gcc  -I  include -c src/fun.c -o obj/fun.o
clean:
	rm -f bin/st_work obj/*.o