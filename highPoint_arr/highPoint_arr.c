#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int  i;
	double wei, pk, hight[5] = { 0.0 };

	printf("��������� ���Ը� �Է¹޾� �ö� �� �ִ� ���̸� ���մϴ�.\n");
	printf("��, ������ ���� �߷°��ӵ��� 10���� �����մϴ�.\n");
	printf("5���� �Է� �� ����� ����մϴ�.\n");
	for (i = 0;i < 5;i++) {

		printf("�������: ");
		scanf("%lf", &pk);
		printf("����: ");
		scanf("%lf", &wei);

		hight[i] = (pk / wei) / 10;
	}
	for (i = 0;i < 5;i++) {
		printf("%d�� : %.2lfm  ", i, hight[i]);
	}
	return 0;
}

