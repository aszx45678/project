#pragma warning(disable:4996)
#include <stdio.h>

void menu_print(void);
int app_rest(void);
void app_seach(void);
int rest[5][2] = { {0,0},{0,0},{0,0},{0,0 }, {0, 0} };
char rest_name[5][20];
char rest_num[5][20];
int main() {
	
	int check;

	while (1) {
		menu_print();
		printf("입력 : ");
		scanf("%d", &check);
		if (check == 1) {
			app_rest();
		}
		else if (check == 2) {
			app_seach();
		}
		else if (check == 3) 
			break;
		printf("\n");
	}
	return 0;
}
int app_rest(void) {
	int table, pop;
	printf("테이블 선택(1~5) (취소 : 0)");
	scanf("%d", &table);
	
	if (table == 0)
		return 0;
	if (rest[table - 1][0] == 1) {
		printf("예약된 테이블 입니다.\n");
		return 0;
	}
	printf("인원수 입력");
	scanf("%d", &pop);
	if (table == 1 && pop > 2) {
		printf("인원이 좌석보다 많습니다.\n");
		return 0;
	}else if (table == 2 && pop > 4) {
		printf("인원이 좌석보다 많습니다.\n");
		return 0;
	}
	else if (table == 3 && pop > 4) {
		printf("인원이 좌석보다 많습니다.\n");
		return 0;
	}
	else if (table == 4 && pop > 6) {
		printf("인원이 좌석보다 많습니다.\n");
		return 0;
	}
	else if (table == 5 && pop > 8) {
		printf("인원이 좌석보다 많습니다.\n");
		return 0;
	}
	rest[table - 1][0] = 1;
	rest[table - 1][1] = pop;
	printf("이름 : ");
	scanf("%s", rest_name[table - 1]);
	printf("번호 : ");
	scanf("%s", rest_num[table - 1]);


}
void menu_print(void) {
	printf("1. 예약\n");
	printf("2. 예약조회\n");
	printf("3. 종료\n");
}
void app_seach(void){
	int check;
	printf("테이블 번호 : ");
	scanf("%d", &check);
	if (rest[check - 1][0] == 0) {
		printf("예약 X");
	}
	else {
		printf("예약 O  이름: %s 번호: %s 인원: %d", rest_name[check - 1], rest_num[check - 1], rest[check - 1][1]);
	}
	
}