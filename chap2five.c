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

void find_track(char search_for[])
{
	int i;
	// regex_t r;
	// int b = strstr(tracks[0], search_for);
	// printf ("%i\n",b);
	for (i =0; i < 5; i++){
		// printf("%s\n", search_for);
		// printf("%s\n",tracks[i]);
		if (strstr(tracks[i], search_for))
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
	// for (i=0; i<5; i++) {
	// printf("%s\n", tracks[i]);
 //    }
	char search_for[80];
	printf("Search for: ");
	fgets(search_for, 80, stdin);
	rstrip(search_for);
	find_track(search_for);
	return 0;
}