#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void gotoxy(int x, int y);
int main() {
	int ttt[3][3];
	int high, width, count = 0,i,j,print_count=0;
	
	while (1) {
		gotoxy(0, 0);
		printf("���� ���� �� �Է��� �ּ���(3X3)(�׸��ϱ�� 0 0�Է�)");
		scanf("%d %d", &high, &width);

		if (high == 0 && width == 0)
			gotoxy(0, 5);
			break;
		if (count == 0) {
			ttt[width-1][high-1] = 1;
			count++;
		}
		else if (count == 1) {
			ttt[high][width] = 2;
			count--;
		}
		for (i = 0; i < 3;i++) {
			gotoxy(0, i + 2);
			for (j = 0;j < 3;j++) {
				if (ttt[i][j] == 1) {
					printf("O ");
				}
				else if (ttt[i][j] == 2) {
					printf("X ");
				}
				else {
					printf("  ");
				}
			}
		}
	}
}
void gotoxy(int x, int y) {
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}