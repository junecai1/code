#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float score[10];
	float maxScore, minScore, avgScore, sumScore;
	int i;

	sumScore = 0;
	printf("����������ʮ��������\n");
	for (i = 0; i < 10; i++)
		scanf("%f", &score[i]);

	maxScore = score[0];
	minScore = score[0];

	for (i = 1; i < 10; i++)
		if (score[i] > maxScore)
			maxScore = score[i];
		else if (score[i] < minScore)
			minScore = score[i];

	for (i = 0; i < 10; i++)
		sumScore += score[i];

	avgScore = (sumScore - maxScore - minScore) / 8;

	printf("ƽ����Ϊ��%f\n", avgScore);

	return 0;
}
