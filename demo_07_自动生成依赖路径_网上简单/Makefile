.PHONY : all clean

MKDIR := mkdir
RM := rm -rf
CC := gcc

DIR_DEPS := deps

SRCS := $(wildcard *.c)
DEPS := $(SRCS:.c=.dep)
DEPS := $(addprefix $(DIR_DEPS)/,$(DEPS))

ifeq ("$(MAKECMDGOALS)","all")
-include $(DEPS)
endif

ifeq ("$(MAKECMDGOALS)","")
-include $(DEPS)
endif

all :
	@echo "$@"
    
$(DIR_DEPS) :
	@echo "MKDIR DIR"
	$(MKDIR) $@

# https://blog.csdn.net/zhangxinrun/article/details/19561567
ifeq ("$(wildcard $(DIR_DEPS))","")    # 判断文件夹是否存在
$(DIR_DEPS)/%.dep : $(DIR_DEPS) %.c
else
$(DIR_DEPS)/%.dep : %.c
endif
	@echo "Creating $@ ..."
	@set -e;\
    $(CC) -MM -E $(filter %.c,$^) | sed 's,\(.*\)\.o[ :]*,objs/\1.o : ,g' > $@
    
clean :
	$(RM) $(DIR_DEPS)
