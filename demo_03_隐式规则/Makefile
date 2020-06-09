bin/st_work : obj/main.o  obj/st_work.o  obj/fun.o  
	gcc  $^  -o $@
obj/st_work.o : src/st_work.c
	gcc  -I  include   -c $< -o  $@
obj/main.o : src/main.c
	gcc  -I  include   -c $< -o  $@
obj/fun.o  : src/fun.c	
	gcc  -I  include   -c $< -o  $@
clean:
	rm -f bin/st_work obj/*.o