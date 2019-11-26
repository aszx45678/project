#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y);
int main() {
	int high[10] = { 0 },high_size,i,cr;
	double wei, pk, hight;

	printf("운동에너지와 무게를 입력받아 올라갈 수 있는 높이를 구합니다.\n");
	printf("단, 마찰이 없고 중력가속도를 10으로 가정합니다.\n");
	printf("운동에너지: ");
	scanf("%lf", &pk);
	printf("무게: ");
	scanf("%lf", &wei);

	hight = (pk / wei) / 10;
	high_size = hight;

	if (10 < high_size && high_size < 101)
		high_size /= 10;
	else if(100 < high_size && high_size < 1001)
		high_size /= 100;
	else if (1000 < high_size && high_size < 10001)
		high_size /= 1000;

	for (i = 0;i < high_size;i++) {
		gotoxy(0,13-i);
		printf("ㅣ");
		Sleep(500);
		cr = 13 - i;
	}
	gotoxy(3, cr);
	printf("%.2lfm", hight);
	gotoxy(0, 14);

}
void gotoxy(int x, int y) {
	COORD Pos ={x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}