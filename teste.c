#include <stdio.h>
int main(int argc, char* argv[]) {
	if(!argv[1]) return printf("%s filename\n", argv[0]);
	FILE* f = fopen(argv[1], "w");
	for(int c; (c = getchar()) != 'c'; fputc(c, f));
	fclose(f);
}