#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FOLDER "/$HOME/Templates/"
int main(int argc, char**argv){
	if(argc == 1){
		fprintf(stderr,  "create: please select template and name of file\n");
		return 1;
	}
	if(argc ==2){
		fprintf(stderr, "create: please select name of file\n");
		return 1;
	}
	char*c = malloc((strlen("cp ")+ strlen(FOLDER) + strlen(argv[1]) + strlen(argv[2])+1) * sizeof(char));
	if(c == NULL){fprintf(stderr, "create: can't allocate memory\n"); return 1;}
	strcpy(c, "cp ");
	strcat(c, FOLDER);
	strcat(c, argv[1]);
	strcat(c, " ");
	strcat(c, argv[2]);
	system(c);


	return 0;
}
