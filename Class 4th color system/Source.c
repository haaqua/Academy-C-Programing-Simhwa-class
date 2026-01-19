#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>

enum state {
	IDLE,
	ATTACK,
	DIE

	// 열거형은 값을 따로 설정할 수 있으며, 따로 설정된 다음의 값은 그 전의 값에서 하나 증가된 것으로 설정된다.
};
enum Color {
	Black,
	DarkBlue,
	DarkGreen,
	DarkSkyBlue,
	DarkRed,
	DarkViolet,
	DarkYellow,
	Gray,
	DarkGray,
	Blue,
	Green,
	SkyBlue,
	Red,
	Violet,
	Yellow,
	White
};

void selet_color(enum Color color) {
	switch (color)
	{
	case Black:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case DarkBlue:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case DarkGreen:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case DarkSkyBlue:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case DarkRed:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case DarkViolet:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case DarkYellow:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case Gray:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case DarkGray:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case Blue:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case Green:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case SkyBlue:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case Red:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case Violet:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case Yellow:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	case White:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		break;
	default:
		break;
	}
}
void set(enum state State) {
	switch (State)
	{
	case IDLE:
		printf("IDLE\n");
		break;
	case ATTACK:
		printf("ATTACK\n");
		break;
	case DIE:
		printf("DIE\n");
		break;
	default:
		printf("EXCEPTION\n");
		break;
	}
}
int main()
{
#pragma region 열거형
	// 관련된 상수의 값을 이름으로 정의한 집합의 자료형.

	/*enum state state;

	printf("숫자 입력");
	scanf("%d", &state);

	set(state);*/

#pragma endregion

	for (int i = 0; i < 16; i++) {
		selet_color(i);
		if (i != 0 && i % 3 == 0) {
			system("pause");
		}
		printf("color index\n");
	}

	return 0;
}