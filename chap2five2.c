#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <regex.h>

char tracks[][80] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Iwo Jima",
};

void find_track(regex_t r)
{
	int i;
	for (i =0; i < 5; i++){
		if (!regexec(&r, tracks[i],0,NULL,0))
			printf("Track %i: '%s'\n", i,tracks[i]);
	}
}

// Truncates the string at the first newline, if there is one.
void rstrip(char s[])
{
    char *ptr = strchr(s, '\n');
    if (ptr) {
	*ptr = '\0';
    }
}

int main()
	{
	char search_for[80];
	printf("Search for: ");
	fgets(search_for, 80, stdin);
	rstrip(search_for);
	regex_t r;
	int reti;
	reti = regcomp(&r, search_for, 0);
	find_track(r);
	return 0;
}