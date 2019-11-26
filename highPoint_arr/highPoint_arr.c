#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int  i;
	double wei, pk, hight[5] = { 0.0 };

	printf("운동에너지와 무게를 입력받아 올라갈 수 있는 높이를 구합니다.\n");
	printf("단, 마찰이 없고 중력가속도를 10으로 가정합니다.\n");
	printf("5가지 입력 후 결과를 출력합니다.\n");
	for (i = 0;i < 5;i++) {

		printf("운동에너지: ");
		scanf("%lf", &pk);
		printf("무게: ");
		scanf("%lf", &wei);

		hight[i] = (pk / wei) / 10;
	}
	for (i = 0;i < 5;i++) {
		printf("%d번 : %.2lfm  ", i, hight[i]);
	}
	return 0;
}

