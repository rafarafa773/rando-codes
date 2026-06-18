#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define bit(x)	(1 << x)

void maiscule(char* text) {
	for(; *text; ++text) {
		if(*text >= 'a' && *text <= 'z') {
			*text &= ~bit(5);	
		}
	}
}
void minuscule(char* text) {
	for(; *text; ++text) {
		if(*text >= 'A' && *text <= 'Z') {
			*text |= bit(5);
		}
	}
}
int main() {
	char* text = (char*)malloc(sizeof(char)*20);
	
	text[0] = '\0';
	if(text == NULL) {
		fprintf(stderr, "ur poor lol\n");
		return 1;
	}
	strcat(text, "Hello, World!");
	printf("before: %s\n", text);
	maiscule(text);
	printf("after: %s\n", text);
	char other_text[] = "COOL";
	minuscule(other_text);
	printf("after after: %s\n", other_text);
	goto cleanup;
	return 0;
cleanup:
	free(text);
}