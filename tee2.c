// file f = open(argv[1])
// while (! end of file stdin) {
//   buffer = read stdin
//   write stdout buffer
//   write f buffer
// }
// close(f)


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	char ch;
	int count = 0;


// while ((ch = getopt(argc,argv,"")) != EOF)
	for(count = 1; count < argc; count ++)
		puts(argv[count]);
	argv += optind;
	argc -= optind;
return 0;
}