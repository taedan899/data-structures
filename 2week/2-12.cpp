#include <stdio.h>
#include <string.h>

struct employee {
	char name[10];
	int year;
	int pay;
};

void main()
{

	int i;

	struct employee Lee[4] = {
		{"이진호",2022,5200},
		{"이한영",2023,4300},
		{"이상원",2023,4500},
		{"이상범",2024,3900}


	};

	for (i = 0; i < 4; i++)
	{
		printf("\n이름: %s\n입사: %d\n연봉: %d\n\n", Lee[i].name, Lee[i].year, Lee[i].pay);




	}

	getchar();


}