CFLAGS = -Wall -Werror
.PHONY: clean all
build/func.o : src/func.cpp src/func.h
gcc -c src/func.cpp build/func.o - $(CFLAGS)
clean:
rm -rf build/*.o
rm -rf bin/Digit
@echo "All files have been cleaned"
