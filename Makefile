COMP_FOLDER = /usr/share/bash-completion/completions/
all:
	gcc -O3 src/main.c -o /usr/bin/create
	touch $(COMP_FOLDER)/create
	cat autocomplete.txt > $(COMP_FOLDER)/create
