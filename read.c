#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE* my_file = fopen(argv[1], "r");
	char* line = malloc(sizeof(char)*1000);
	while(fgets(line, 1000, my_file) != NULL){ 
		printf("%s", line);
	}
	free(line);
	fclose(my_file);
}