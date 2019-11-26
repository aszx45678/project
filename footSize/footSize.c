#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define Size 30

int main() {
	//발크기, 반복문변수, 반복문제어변수, 출력크그배열, 출력크기변수
	int foot[30], i,j, check = 0, grp[10] = { 0 }, line = 185;
	double avg=0.0/*평균*/, sd/*표준편차*/,var[30]/*분산구하기배열*/,dev=0.0/*분산*/;
	char star = '*';
	srand(time(NULL));

	for (i = 0;i < Size;i++) {
		foot[i] = (rand() % 111) + 185;
		avg += foot[i];
		if (foot[i] <= 196)
			grp[0]++;
		else if (foot[i] <= 207)
			grp[1]++;
		else if (foot[i] <= 218)
			grp[2]++;
		else if (foot[i] <= 229)
			grp[3]++;
		else if (foot[i] <= 240)
			grp[4]++;
		else if (foot[i] <= 251)
			grp[5]++;
		else if (foot[i] <= 262)
			grp[6]++;
		else if (foot[i] <= 273)
			grp[7]++;
		else if (foot[i] <= 284)
			grp[8]++;
		else if (foot[i] <= 295)
			grp[9]++;
	}
	avg /= Size;
	for (i = 0;i < Size;i++) {
		var[i] = foot[i] - avg;
		if (var[i] < 0)
			var[i] *= -1;
		var[i] *= var[i];
		dev += var[i];
	}
	dev /= Size - 1;
	sd = sqrt(dev);
	for (i = 0;i < Size;i++) {
		printf("%d ", foot[i]);
		check++;
		if (check % 10 == 0)
			printf("\n");
	}

	printf("통계결과\n");
	printf("평균 : %.3lf\n", avg);
	printf("표준편차 : %.3lf\n\n", sd);
	printf("수평 막대그래프\n");
	printf("최소값 : 185, 최대값 : 295\n");
	printf("범위 : 110\n");
	for (i = 0;i < 10;i++) {
		printf("%d-",line);
		line += 11;
		printf("%d( %d) : ", line, grp[i]);
		for (j = 0;j < grp[i];j++) {
			printf("%c", star);
		}
		printf("\n");
	}
}