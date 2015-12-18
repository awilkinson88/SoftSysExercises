#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>


// void rstrip(char s[])
// {
//     char *ptr = strchr(s, '\n');
//     if (ptr) {
// 	*ptr = '\0';
//     }
// }

// void find()
// {
// 	int NUM_ADS = 7;
// 	char *ADS[] = {
// 	"William: SBM GSOH likes sports, TV, dining",
// 	"Matt: SWM NS likes art, movies, theater",
// 	"Luis: SLM ND likes books, theater, art",
// 	"Mike: DWM DS likes trucks, sports and bieber",
// 	"Peter: SAM likes chess, working out and art",
// 	"Josh: SJM likes sports, movies and theater",
// 	"Jed: DBM likes theater, books and dining"
// 	};
// 	int i;
// 	puts("Search results:");
// 	puts("-------------------------------");

// 	for (i=0; i < NUM_ADS; i++){
// 		rstrip(ADS[i]);
// 		if (strstr(ADS[i], "sports") && !(strstr(ADS[i],"bieber"))){
// 		printf("%s\n", ADS[i]);
// 	}
// }
// puts("--------------------------------");
// }

// int main()
// {
// 	find();
// }

//FUNCTIONAL PROGRAMMING REWRITE

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>

// int sports_no_bieber(char *s)
// 	{
// 		return strstr(s,"sports") && !strstr(s,"bieber");
// 	}

// int sports_or_workout(char *s)
// {
// 	return strstr(s,"sports") || strstr(s,"workout");
// }

// int arts_theater_or_dining(char *s)
// {
// 	return strstr(s,"arts") || strstr(s,"dining") || strstr(s,"theater");
// }

// void rstrip(char s[])
// {
//     char *ptr = strchr(s, '\n');
//     if (ptr) {
// 	*ptr = '\0';
//     }
// }

// void find(int(*match)(char*))
// {
// 	int NUM_ADS = 7;
// 	char *ADS[] = {
// 	"William: SBM GSOH likes sports, TV, dining",
// 	"Matt: SWM NS likes art, movies, theater",
// 	"Luis: SLM ND likes books, theater, art",
// 	"Mike: DWM DS likes trucks, sports and bieber",
// 	"Peter: SAM likes chess, working out and art",
// 	"Josh: SJM likes sports, movies and theater",
// 	"Jed: DBM likes theater, books and dining"
// 	};
// 	int i;
// 	puts("Search results:");
// 	puts("-------------------------------");

// 	for (i=0; i < NUM_ADS; i++){
// 		rstrip(ADS[i]);
// 		if (match(ADS[i])){
// 		printf("%s\n", ADS[i]);
// 	}
// }
// puts("--------------------------------");
// }

// int main()
// {
// 	find(sports_no_bieber);
// 	find(sports_or_workout);
// }

//QSORT EXERCISE

// int compare_scores(const void* score_a, const void* score_b)
// {
// 	int a = *(int*)score_a;
// 	int b = *(int*)score_b;
// 	return a-b;
// }

// int compare_scores_desc(const void* score_a, const void* score_b)
// {
// 	int a = *(int*)score_a;
// 	int b = *(int*)score_b;
// 	return b -a;
// }

// typedef struct{
// 	int width;
// 	int height;
// } rectangle;

// int compare_areas(const void* a, const void* b)
// {
// 	rectangle* ra = (rectangle*)a; //converts pointers to correct type
// 	rectangle* rb = (rectangle*)b;
// 	int area_a = (ra->width * ra->height); //calculate areas
// 	int area_b = (rb->width * rb->height);
// 	return area_a - area_b;
// }

// int compare_names(const void* a, const void* b)
// {
// 	char** sa = (char**)a;
// 	char** sb = (char**)b;
// 	return strcmp(*sa, *sb);
// }

// int compare_areas_desc(const void* a, const void* b)
// {
// 	return compare_areas(b,a);
// }

// int compare_names_desc(const void* a, const void* b)
// {
// 	return -compare_names(a,b);
// }

// int main()
// {
// 	int scores[] = {543,323,32,554,11,3,112};
// 	int i;
// 	qsort(scores, 7, sizeof(int), compare_scores_desc);
// 	puts("These are the scores in order:");
// 	for (i=0; i<7; i++){
// 		printf("Score = %i\n", scores[i]);
// 	}
// 	char *names [] = {"Karen", "Mark", "Brett", "Molly"};
// 	qsort(names, 4, sizeof(char*), compare_names);
// 	puts("These are the names in order:");
// 	for (i = 0; i < 4; i++) {
// 		printf("%s\n", names[i]);
// 	}
// 	return 0;
// }

//AUTOMATING THE DEAR JOHN LETTERS:




// enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};
// typedef struct {
// 	char *name;enum response_type type;
// }  response;

// void dump(response r)
// {
// 	printf("Dear %s,\n", r.name);
// 	puts("Unfortunately your last date contacted us to");
// 	puts("say that they will not be seeing you again");
// }

// void second_chance(response r)
// {
// 	printf("Dear %s,\n", r.name);
// 	puts("Good news: your last date has asked us to");
// 	puts("arrange another meeting. Please call ASAP.");
// }

// void marriage(response r)
// {
// 	printf("Dear %s,\n", r.name);
// 	puts("Congratulations! Your last date has contacted");
// 	puts("us with a proposal of marriage.");
// }

// int main()
// {
// 	response r[] = {
// 		{"Mike", DUMP}, {"Luis", SECOND_CHANCE},
// 		{"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
// 	};
// 	int i;
// 	for (i = 0; i< 4; i++){
// 		switch (r[i].type){
// 		case DUMP:
// 			dump(r[i]);
// 			break;
// 		case SECOND_CHANCE:
// 			second_chance(r[i]);
// 			break;
// 		default:
// 			marriage(r[i]);
// 		}
// 	}
// 	return 0;
// 

//main rewritten to be shorter

// void (*replies[])(response) = {dump, second_chance, marriage};

// int main()
// {
// 	response r[] = {
// 		{"Mike", DUMP}, {"Luis", SECOND_CHANCE},
// 		{"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
// 	};
// 	int i;
// 	for (i = 0; i < 4; i++) {
// 		(replies[r[i].type])(r[i]);
// 	}
// 	return 0;
// }

//TOTAL UP A ROUND OF DRINKS

enum drink {
	MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};

double price(enum drink d)
{
	switch(d) {
	case MUDSLIDE:
		return 6.79;
	case FUZZY_NAVEL:
		return 5.31;
	case MONKEY_GLAND:
		return 4.82;
	case ZOMBIE:
		return 5.89;
	}
	return 0;
}

double total(int args, ...)
{
	int i;
	double total = 0;
	va_list ap;
	va_start(ap,args);
	for (i = 0; i< args; i++){
		enum drink d = va_arg(ap, enum drink);
		total = total + price(d);
	}
	va_end(ap);
	return total;
}

int main(){
	printf("Price is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
}