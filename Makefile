CC=gcc
OUT=my_output
SOURCE=main.c
mytarget: $(SOURCE)
	 $(CC) -o $(OUT) $(SOURCE)
