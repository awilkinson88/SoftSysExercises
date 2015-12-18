// #include <stdio.h>

// int main()
// {
// 	float latitude;
// 	float longitude;
// 	char info[80];
// 	while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3)
// 		if ((latitude > 26 ) && (latitude<34))
// 			if((longitude > -76) && (longitude < -64))
// 				printf("%f,%f,%s\n",latitude,longitude,info);

// 			return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(){
// 	char line[80];
// 	FILE *in = fopen("spooky.csv","r");
// 	FILE *file1 = fopen("ufos.csv", "w")
// 	FILE *file2 = fopen("disappearances.csv", "w");
// 	FILE *file3 = fopen("others.csv", "w");
// 	while (fscanf(in, "%79[^/n]\n", line) ==1){
// 		if (strstr(line,"UFO"))
// 			fprintf(file1,"%s\n",line);
// 		else if (strstr(line, "Disappearance"))
// 			fprintf(file2, "%s\n",line);
// 		else
// 			fprintf(file3, "%s\n", line);
// 	}
// 	fclose(file1);
// 	fclose(file2);
// 	fclose(file3);
// 	return 0;
// }

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char *delivery = "";
	int thick = 0;
	int count = 0;
	char ch;

	while ((ch = getopt(argc, argv, "d: t")) != EOF)
		switch(ch){
		case 'd':
			delivery = optarg;
			break;
		case 't':
			thick = 1;
			break;
		default:
			fprintf(stderr, "Unknown option: '%s \n", optarg);
			return 1;
		}
		argc -= optind;
		argv += optind;

		if (thick)
			puts("Thick crust.");

		if (delivery[0])
			printf("To be delivered %s.\n", delivery);

		puts("ingredients:");
		for(count = 0; count < argc; count++)
			puts(argv[count]);
		return 0;
}