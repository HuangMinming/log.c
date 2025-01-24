.PHONY:all
all: test

test:test.c ./src/log.c
	gcc -o $@ $^ -g

.PHONY:clean
clean:
	rm -fr test

	