#include <stdio.h>

int main()
{
	float latitude;
	float longitude;
	char info[80];
	int started = 0;

	puts("data=[");
	while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) ==3){
		if (started)
			printf(",\n");
		else
			started = 1;


	if ((latitude) < -90 || (latitude >90)){
		fprintf(stderr, "Invalid latitude: %f\n", latitude);
		return 2;
	}

	if ((longitude <-180.0 || longitude > 180.0)){
		fprintf(stderr, "Invalid longitude: %f\n",longitude);
		return 2;
	}

		printf("{latitude: %f, longitude: %f, info: '%s'}", latitude,longitude,info);

	}
	puts("\n]");
	return 0;
} 

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