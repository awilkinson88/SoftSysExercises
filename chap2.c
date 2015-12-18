#include <stdio.h>

// void go_south_east(int* lat, int* lon)
// 	{
// 	*lat = *lat-1;
// 	*lon = *lon+1;
// 	}

// int main()
// { 
// 	int latitude = 32;
// 	int longitude = -64;

// 	go_south_east(&latitude, &longitude);
// 	printf ("Avast! Now at: [%i, %i]\n", latitude, longitude);
// 	return 0;
// 	}

// int main()
// {
// 	int contestants[] = {1,2,3};
// 	int *choice = contestants;
// 	contestants[0] = 2;
// 	contestants[1] = contestants[2];
// 	contestants[2] = *choice;
// 	printf("I'm going to pick contestant number %i\n", contestants[2]);
// 	return 0; 
// }

// int main()
// {
// 	char first_name[20];
// 	char last_name[20];
// 	printf("Enter first and last name: ");
// 	scanf("%19s %19s", first_name, last_name);
// 	printf("First: %s Last: %s\n", first_name, last_name);
// }

int main()
{
	char cards[] = "JQK";
	char a_card = cards[2];
	cards[2] = cards[1];
	cards[1] = cards[0];
	cards[0] = cards[2];
	cards[2] = cards[1];
	cards[1] = a_card;
	puts(cards);
	return 0;
}