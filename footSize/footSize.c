#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define Size 30

int main() {
	//��ũ��, �ݺ�������, �ݺ��������, ���ũ�׹迭, ���ũ�⺯��
	int foot[30], i,j, check = 0, grp[10] = { 0 }, line = 185;
	double avg=0.0/*���*/, sd/*ǥ������*/,var[30]/*�л걸�ϱ�迭*/,dev=0.0/*�л�*/;
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

	printf("�����\n");
	printf("��� : %.3lf\n", avg);
	printf("ǥ������ : %.3lf\n\n", sd);
	printf("���� ����׷���\n");
	printf("�ּҰ� : 185, �ִ밪 : 295\n");
	printf("���� : 110\n");
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