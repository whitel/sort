all: sort run

sort: main.cpp
	@g++ $^ -o $@

run:
	@./sort

.PHONY: run
