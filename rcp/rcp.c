#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rcp_fun(int user);  //���������� �Լ�

int main() {
	int user = 0;
	srand(time(NULL));
	while (1) {
		printf("���� : 0, ����: 1, ���ڱ� : 2, �׸��ϱ� : 3   ");
		scanf("%d", &user);
		if (user == 3)
			break;     //�ݺ��� ����������
		rcp_fun(user);
	}
	return 0;
}

int rcp_fun(int user) {
	int com;
	com = rand() % 3;  //��ǻ���� ����� ��
	if (user == com)
		printf("�����ϴ�\n");
	else if (user == 1) {
		if (com == 2)
			printf("�й�\n");
		if (com == 0)
			printf("�¸�\n");
	}
	else if (user == 0) {
		if (com == 1)
			printf("�й�\n");
		if (com == 2)
			printf("�¸�\n");
	}
	else if (user == 2) {
		if (com == 0)
			printf("�й�\n");
		if (com == 1)
			printf("�¸�\n");
	}
}