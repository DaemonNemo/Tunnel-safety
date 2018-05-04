#目标：依赖（条件）
#	命令

#	阶段一
#app:add.c sub.c dive.c mul.c main.c
#	gcc add.c sub.c dive.c mul.c main.c -o app 


#阶段二
#app:add.o sub.o dive.o mul.o main.o
#	gcc add.o sub.o dive.o mul.o main.o -o app

#add.o:add.c
#	gcc -c add.c   #-c只编译不链接

#sub.o:sub.c
#	gcc -c sub.c 

#dive.o:dive.c
#	gcc -c dive.c

#mul.o:mul.c
#	gcc -c mul.c

#main.o:main.c
#	gcc -c main.c

#.PHONY:clean   #生成伪目标,不管有没有同名文件都要执行make clean
#clean:
#	-rm *.o -f
#	-rm app -f

#test:
#	@echo "hello"

#阶段三
# $@表示目标，$^表示所有依赖，$<表示依赖中的第一个
#obj=add.o sub.o mul.o dive.o main.o

#src = $(wildcard *.c)				#查找所有.c文件
#obj = $(patsubst %.c,%.o,$(src))   #字符串替换函数，意思是要去src这个变量里边，把所有.c的文件名都替换成.o
#target = app
#$(target):$(obj)
#	gcc $^ -o $@

#%.o:%.c
#	gcc -c $< -o $@

#.PHONY:clean   #生成伪目标,不管有没有同名文件都要执行make clean
#clean:
#	-rm *.o -f
#	-rm app -f
#test:
#	@echo $(src)
#	@echo $(obj)

#阶段四
CPPFLAGS= -Iinclude
CFLAGS= -Wall        #-g -Wall
LDFLAGS=             # -L../lib -lmycalc
CC=gcc
#CC=arm-linux-gcc  手机上用的
src = $(wildcard *.c)				#查找所有.c文件
obj = $(patsubst %.c,%.o,$(src))   #字符串替换函数，意思是要去src这个变量里边，把所有.c的文件名都替换成.o
target = app
$(target):$(obj)
	$(CC) $^ $(LDFLAGS) -o $@

%.o:%.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@

.PHONY:clean   #生成伪目标,不管有没有同名文件都要执行make clean
clean:
	-rm *.o -f
	-rm app -f

