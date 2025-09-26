lab1: main.c lab1.c
	$(CC) -o lab1  main.c lab1.c

clean:
	-rm -f lab1
	@echo "All clean!"
