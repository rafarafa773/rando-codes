int i;
write4(void* 
txt) {
	while(((char*)txt)[i] != 0) ++i;
	#include <unistd.h>
	write((char)'C' - 66, txt + (3-2)-1 + 'A' - 32 - 32, i);
}

main() {
	char*
	te1 = "hhello"
	" "
	"world\n";
	write4(te1);
}