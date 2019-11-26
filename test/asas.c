#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int coin = 0, check = 0;
	int f_hun = 0, hun = 0, f_ten = 0, ten = 0;
	int i;

	printf("금액입력 후 Enter : ");
	scanf("%d", &coin);

	while (1) {
		//거스름돈출력
		if (coin < 330 || check == 4) {
			printf("거스름돈 : %d\n", coin);
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
			printf("오백원 : %d ", f_hun);
			printf("백원 : %d ", hun);
			printf("오십원 : %d ", f_ten);
			printf("십원 : %d ", ten);

			break;
		}
		//매뉴 출력
		if (coin >= 330)
			printf("1. 커피(330원)  판매가능\n");
		else
			printf("1. 커피(330원)  판매불가\n");
		if (coin >= 480)
			printf("2. 콜라(480원)  판매가능\n");
		else
			printf("2. 콜라(480원)  판매불가\n");
		if (coin >= 600)
			printf("3. 주스(600원)  판매가능\n");
		else
			printf("3. 주스(600원)  판매불가\n");

		printf("4. 취소\n");
		printf("\n");
		printf("현제 금액 : %d\n", coin);
		printf("\n");
		printf("번호를 선택하고 Enter : ");
		scanf("%d", &check);

		if (check == 1) {
			printf("커피를 받으세요.\n");
			coin -= 330;
		}
		else if (check == 2) {
			printf("콜라를 받으세요\n");
			coin -= 480;
		}
		else if (check == 3) {
			printf("주스를 받으세요\n");
			coin -= 600;
		}

	}
}