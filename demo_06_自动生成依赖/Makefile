.PHONY : all clean   # 标志标签
# 关于=与:=的区别：https://www.cnblogs.com/baiduboy/p/7612488.html

# 命令
CC := gcc
MKDIR := mkdir
RM := rm -rf      # -r递归删除， -f强制删除文件或目录

# 已存在目录
DIR_INCLUDES := include #header     # 头文件集合
DIR_SRC := src

#需要创建的目录
DIR_BIN := bin
DIR_OBJ := obj
DIR_DEP := dep

INCLUDES := $(foreach dir,$(DIR_INCLUDES), -I$(dir))  # 头文件目录(给每个文件目录添加前缀“-I”)
DIRS := $(DIR_DEP) $(DIR_BIN) $(DIR_OBJ)          # 需要创建的目录集合

SRCS := $(wildcard $(DIR_SRC)/*.c)
OBJS := $(SRCS:.c=.o)
OBJS := $(subst $(DIR_SRC),$(DIR_OBJ),$(OBJS))    # 将生成的.o文件均放到obj目录下
DEPS := $(SRCS:.c=.d)
DEPS := $(subst $(DIR_SRC),$(DIR_DEP),$(DEPS))    # 将生成的.d文件均放到dep目录下

#最终的可执行文件
EXE := main   #可执行文件
EXE := $(addprefix $(DIR_BIN)/,$(EXE))  # 添加路径前缀，使得生成的可执行文件都放到bin目录下


all : $(DIR_OBJ) $(DIR_BIN) $(EXE)

ifeq ("$(MAKECMDGOALS)","all")    # MAKECMDGOALS表示当前make命令生成的目标，若执行命令为"make"或者“make all”则包含“-include $(DEPS)”
include $(DEPS)
endif

ifeq ("$(MAKECMDGOALS)","")
include $(DEPS)
endif

$(EXE) : $(OBJS)
	$(CC) -o $@ $^
	@echo "Success! Target => $@"

$(DIR_OBJ)/%.o : $(DIR_SRC)/%.c
	@#@echo $^  # 这里打印的依赖文件包含头文件.h，有点神奇
	$(CC) $(INCLUDES) -o $@ -c $(filter $(DIR_SRC)/%.c, $^)    

$(DIRS) :
	$(MKDIR) $@

ifeq ("$(wildcard $(DIR_DEP))","")   # 根据是否含有dep文件夹，进行创建
$(DIR_DEP)/%.d : $(DIR_DEP) $(DIR_SRC)/%.c
else
$(DIR_DEP)/%.d : $(DIR_SRC)/%.c
endif
	@echo "Creating $@ ..."
	@set -e;\
	$(CC) -MM $(INCLUDES) $(filter %.c,$^) | sed 's,\(.*\)\.o[ :]*,$(DIR_OBJ)/\1.o $@: ,g' > $@

clean :
	$(RM) $(DIRS)