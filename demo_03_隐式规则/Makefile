bin/st_work : obj/main.o  obj/st_work.o  obj/fun.o  
	gcc  $^  -o $@
obj/st_work.o : sources/st_work.c
	gcc  -I  headers   -c $< -o  $@
obj/main.o : sources/main.c
	gcc  -I  headers   -c $< -o  $@
obj/fun.o  : sources/fun.c	
	gcc  -I  headers   -c $< -o  $@
clean:
	rm -f bin/st_work obj/*.o