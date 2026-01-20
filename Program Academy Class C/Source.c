#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>


#define UP 72
#define	LEFT 75
#define RIGHT 77
#define DOWN 80

void position(int x, int y) {
	COORD position = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
int main() 
{
	int x = 5, y = 5;
	//position(5, 5);
	//printf("¡Ú");

	int key = 0;
	while (1) {
		key = _getch();
		if(key == 0|| key == 224){
			key = _getch();
		}

		switch (key) {
		case UP:y--;
			break;
		case LEFT:x-=2;
			break;
		case RIGHT:x+=2;
			break;
		case DOWN:y++;
			break;
		default:printf("exception\n");
			break;
		}
		system("cls");
		position(x, y);
		printf("¡Ú");
	}

	return 0;
}