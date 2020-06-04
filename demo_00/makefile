# 隐含规则
INCL = -I ./incl # -I之后加不加空格都可以
PATH = .
BIN = ${PATH}/bin
SRC = ${PATH}/src
OBJ1 = ./src/hellocpp.cpp
OBJ2 = ./src/hello.c

# 这个的用处感觉有点局限
.SUFFIXES: .cpp .c
.cpp.o:
	g++ ${INCL} -c $<  # $< 表示第一个依赖

.c.o:
	gcc ${INCL} -c $<

all: hellocpp hello

#C++编译

hellocpp:${OBJ1}
	@echo "============开始编译============"
	@# g++ -o $@ $?  # $@(目标)应该是指hellocpp， #?(所有的依赖文件)应该是指${OBJ1}，即hellocpp.o
	@# 命令后面不要随便加注释，否则会出错～～
	g++ -o ${BIN}/$@ $?
	@#@rm -f ${OBJ1}
	@#@mv $@ ${BIN}
	@echo "============编译结束============" # 命令前加@，表示当前命令不显示
	@echo ""

#C编译
hello:${OBJ2}
	@echo "============开始编译============"
	gcc -o ${BIN}/$@ $?
	@#@rm -f ${OBJ2}
	@#@mv $@ ${BIN}
	@echo "============编译结束============"
	@echo ""

