#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rcp_fun(int user);  //가위바위보 함수

int main() {
	int user = 0;
	srand(time(NULL));
	while (1) {
		printf("가위 : 0, 바위: 1, 보자기 : 2, 그만하기 : 3   ");
		scanf("%d", &user);
		if (user == 3)
			break;     //반복문 빠져나오기
		rcp_fun(user);
	}
	return 0;
}

int rcp_fun(int user) {
	int com;
	com = rand() % 3;  //컴퓨터의 경우의 수
	if (user == com)
		printf("비겼습니다\n");
	else if (user == 1) {
		if (com == 2)
			printf("패배\n");
		if (com == 0)
			printf("승리\n");
	}
	else if (user == 0) {
		if (com == 1)
			printf("패배\n");
		if (com == 2)
			printf("승리\n");
	}
	else if (user == 2) {
		if (com == 0)
			printf("패배\n");
		if (com == 1)
			printf("승리\n");
	}
}