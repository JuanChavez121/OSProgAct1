explode: main.c lab1.c
	$(CC) -o explde  main.c lab1.c

clean:
	-rm -f explode
	@echo "All clean!"
