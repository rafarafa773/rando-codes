#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
int main(int argc, char* argv[]) {
	FILE* my_file = fopen(argv[1], "r");
	if(!argv[1] || !argv[2]){
		printf("retard\n");
		return 1;
	}
	if(my_file == NULL){
		printf("that file dont exist\n");
		return 1;
	}
	char* line = malloc(sizeof(char)*1000);
	char* line_searched = malloc(sizeof(char)*1000);
	strcpy(line_searched, argv[2]);
	while(fgets(line, 1000, my_file) != NULL){ 
		char *trying = strstr(line, line_searched);
		if(trying != NULL) printf("%s\n", line);
	}
	free(line);
	free(line_searched);
	fclose(my_file);
}