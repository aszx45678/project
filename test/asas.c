#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int coin = 0, check = 0;
	int f_hun = 0, hun = 0, f_ten = 0, ten = 0;
	int i;

	printf("�ݾ��Է� �� Enter : ");
	scanf("%d", &coin);

	while (1) {
		//�Ž��������
		if (coin < 330 || check == 4) {
			printf("�Ž����� : %d\n", coin);
			if (coin >= 500) {
				f_hun += 1;
				coin -= 500;
			}
			if (coin >= 100) {
				hun = coin / 100;
				coin -= hun * 100;
			}
			if (coin >= 50) {
				f_ten += 1;
				coin -= 50;
			}
			if (coin >= 10) {
				ten = coin / 10;
			}
			printf("����� : %d ", f_hun);
			printf("��� : %d ", hun);
			printf("���ʿ� : %d ", f_ten);
			printf("�ʿ� : %d ", ten);

			break;
		}
		//�Ŵ� ���
		if (coin >= 330)
			printf("1. Ŀ��(330��)  �ǸŰ���\n");
		else
			printf("1. Ŀ��(330��)  �ǸźҰ�\n");
		if (coin >= 480)
			printf("2. �ݶ�(480��)  �ǸŰ���\n");
		else
			printf("2. �ݶ�(480��)  �ǸźҰ�\n");
		if (coin >= 600)
			printf("3. �ֽ�(600��)  �ǸŰ���\n");
		else
			printf("3. �ֽ�(600��)  �ǸźҰ�\n");

		printf("4. ���\n");
		printf("\n");
		printf("���� �ݾ� : %d\n", coin);
		printf("\n");
		printf("��ȣ�� �����ϰ� Enter : ");
		scanf("%d", &check);

		if (check == 1) {
			printf("Ŀ�Ǹ� ��������.\n");
			coin -= 330;
		}
		else if (check == 2) {
			printf("�ݶ� ��������\n");
			coin -= 480;
		}
		else if (check == 3) {
			printf("�ֽ��� ��������\n");
			coin -= 600;
		}

	}
}