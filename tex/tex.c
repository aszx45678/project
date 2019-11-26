#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
void print_tex(int tex);
int main() {
	double tex = 0.0;
	int tex_int = 0;
	printf("ПљБо: ");
	scanf("%lf", &tex);

	if (tex <= 10000000) {
		tex = (tex * 0.08);
	}
	else if (tex <= 40000000) {
		tex = (10000000 * 0.08) + ((tex - 10000000) * 0.17);
	}
	else if (tex <= 80000000) {
		tex = (10000000 * 0.08) + ((tex - 10000000) * 0.17)+((tex-40000000)*0.26);
	}
	else {
		tex = (10000000 * 0.08) + ((tex - 10000000) * 0.17) + ((tex - 40000000) * 0.26) + ((tex - 80000000) * 0.35);
	}
	tex = tex * 10;
	tex_int = (int)tex;
	tex_int = tex_int % 10;
	if (tex_int > 5) {
		tex += 10;
		tex /= 100;
	}
	else {
		tex /= 100;
	}
	tex_int = (int)tex;
	tex_int *= 10;
	print_tex(tex_int);
	return 0;

}
void print_tex(int tex) {
	char tmp[256];
	int i;
	int length = 0;
	itoa(tex, &tmp, 10);
	length = strlen(tmp);
	for (i = 0;i < length;i++) {
		printf("%c", tmp[i]);
		if (i % 3 == 0) {
			printf(",");
		}
	}
}