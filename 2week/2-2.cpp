#include <stdio.h>

void main()
{
	int i;

	int score[3] = { 91,86,97 };
	char grade[3] = { 'A','B','C'};

	for (i = 0; i < 3; i++)
	{
		printf("%3d학년 : 총점 %d ,등급 : %c\n", i, score[i], grade[i]);


	}


	getchar();


}