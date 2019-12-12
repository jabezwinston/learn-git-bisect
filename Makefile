APP = app

C_FILES += \
main.c \
add.c

C_OBJS = $(C_FILES:.c=.o)

all : $(APP)

$(APP) : $(C_OBJS)
	gcc -o "$@" $^

%.o : %.c
	gcc -c "$<"

clean:
	rm -rf *.o $(APP).exe
