#define _CRT_SECURE_NO_WARNINGS
#define re return
#define s 10
#define up 'w'
#define down 's'
#define right 'd'
#define left 'a'
#include<stdio.h>
#include<conio.h>
#include<time.h>
int speed = 0;
int win(int realb[s][s]) {
	int max = 0;
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			if (realb[i][j] > max && realb[i][j] != (s * s) + 1) {
				max = realb[i][j];
			}
		}
	}
	if (max == (s * s)-1)re 1;
	re 0;
}
int lose(int realb[s][s], char ch) {
	int max = 0;
	int ii, jj;
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			if (realb[i][j] > max && realb[i][j] != (s * s) + 1) {
				max = realb[i][j];
				ii = i;
				jj = j;
			}
		}
	}
	if (ch == up) {
		if (realb[ii - 1][jj] != (s * s) + 1&& realb[ii - 1][jj] != 0) {
			re 1;
		}
	}
	else if (ch == down) {
		if (realb[ii + 1][jj] != (s * s) + 1 && realb[ii + 1][jj] != 0) {
			re 1;
		}
	}
	else if (ch == left) {
		if (realb[ii][jj-1] != (s * s) + 1 && realb[ii][jj-1] != 0) {
			re 1;
		}
	}
	else {
		if (realb[ii][jj + 1] != (s * s) + 1 && realb[ii][jj + 1] != 0) {
			re 1;
		}
	}
	re 0;
}
void apple(int realb[s][s]) {
	int ii, jj;
	while (1) {
		ii = rand() % s;
		jj = rand() % s;
		if (realb[ii][jj] == 0) {
			realb[ii][jj] = (s * s) + 1;
			re;
		}
	}
}
void delay(int ms) {
	clock_t start = clock();
	while (clock() < start + ms-speed);
}
void print(int board[s][s]) {
	system("cls");
	printf("\033[96m%c\033[0m", 218);
	for (int i = 0; i < s * 2 + 2; i++)printf("\033[96m%c\033[0m", 196);
	printf("\033[96m%c\n\033[0m", 191);
	for (int i = 0; i < s; i++) {
		printf("\033[96m%c \033[0m", 179);
		for (int j = 0; j < s; j++) {

			if (board[i][j] == (s * s) + 1)printf("\033[91m%c%c\033[0m", 222, 221);
			else if (board[i][j] == 0)printf("  ");
			else printf("\033[93m%c%c\033[0m", 219, 219);
		}
		printf("\033[96m %c \033[0m", 179);
		printf("\n");
	}
	printf("\033[96m%c\033[0m", 192);
	for (int i = 0; i < s * 2 + 2; i++)printf("\033[96m%c\033[0m", 196);
	printf("\033[96m%c\n\033[0m", 217);
	delay(500);
}
int update(int realb[s][s],char ch) {
	int max = 0;
	int ii, jj;
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			if (realb[i][j] > max&& realb[i][j]!=(s*s)+1) {
				max = realb[i][j];
				ii = i;
				jj = j;
			}
		}
	}
	if (ch == up) {
		if (ii == 0) re 1;
		if (realb[ii - 1][jj] == (s * s) + 1) {
			realb[ii - 1][jj] = max + 1;
			apple(realb);
			speed += 20;
		}
		else {
			if (!lose(realb, ch)) {
				realb[ii - 1][jj] = max + 1;
				for (int i = 0; i < s; i++) {
					for (int j = 0; j < s; j++) {
						if (realb[i][j] != 0 && realb[i][j] != (s * s) + 1) {
							realb[i][j]--;
						}
					}
				}
			}
			else {
				re 1;
			}
		}
	}
	else if (ch == down) {
		if (ii == s-1) re 1;
		if (realb[ii + 1][jj] == (s * s) + 1) {
			realb[ii + 1][jj] = max + 1;
			apple(realb);
			speed += 20;
		}
		else {
			if (!lose(realb, ch)) {
				realb[ii + 1][jj] = max + 1;
				for (int i = 0; i < s; i++) {
					for (int j = 0; j < s; j++) {
						if (realb[i][j] != 0 && realb[i][j] != (s * s) + 1) {
							realb[i][j]--;
						}
					}
				}
			}
			else {
				re 1;
			}
		}
	}
	else if (ch == left) {
		if (jj == 0) re 1;
		if (realb[ii][jj - 1] == (s * s) + 1) {
			realb[ii][jj - 1] = max + 1;
			apple(realb);
			speed += 20;
		}
		else {
			if (!lose(realb, ch)) {
				realb[ii][jj - 1] = max + 1;
				for (int i = 0; i < s; i++) {
					for (int j = 0; j < s; j++) {
						if (realb[i][j] != 0 && realb[i][j] != (s * s) + 1) {
							realb[i][j]--;
						}
					}
				}
			}
			else {
				re 1;
			}
		}
	}
	else {
		if (jj == s-1) re 1;
		if (realb[ii][jj + 1] == (s * s) + 1) {
			realb[ii][jj + 1] = max + 1;
			apple(realb);
			speed += 20;
		}
		else {
			if (!lose(realb, ch)) {
				realb[ii][jj + 1] = max + 1;
				for (int i = 0; i < s; i++) {
					for (int j = 0; j < s; j++) {
						if (realb[i][j] != 0 && realb[i][j] != (s * s) + 1) {
							realb[i][j]--;
						}
					}
				}
			}
			else {
				re 1;
			}
		}
	}
	if (win(realb))re 1;
	print(realb);
	re 0;
}
int main() {
	//for (int i = 0; i < 500; i++)printf("%d  %c", i, i);
	srand(time(0));
	int realb[s][s];
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			realb[i][j] = 0;
		}
	}
	realb[0][0] = 1;
	realb[0][1] = 2;
	realb[0][2] = 3;
	char ch = right;
	apple(realb);
	while (1) {
		if (_kbhit()) {
			ch = _getch();
		}
		if (update(realb, ch))break;
	}
	if (win(realb)) {
		printf("you win\n");
	}
	else {
		printf("you lose\n");
	}
	re 0;
}