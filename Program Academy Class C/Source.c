#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void load(const char* filename) {

	FILE* file = fopen(filename, "r");

	int count = 0;

	int character = '\0';
	while (character = fgetc(file) != EOF) {
		count++;
	}

	rewind(file);

	char* buffer = malloc(count + 1);

	buffer[count] = NULL;

	// 첫 번째 매개변수 : 읽은 데이터를 저장할 메모리 버퍼의 포인터 변수
	// 두 번쨰 매개변수 : 각 데이터 항목의 크기
	// 세 번째 매개변수 : 데이터를 읽어올 항목의 수
	// 네 번째 매개변수 : 데이터를 읽어올 파일의 포인터 변수
	fread(buffer, sizeof(char), count, file);
	printf("%s\n", buffer);
	fclose(file);

	free(buffer);
}
int main() {
#pragma region 파일 입출력

#pragma region 파일 쓰기

	// 첫 번째 매개 변수 (파일의 이름)
	// 두 번째 매개 변수 (파일의 입출력 모드)

	//FILE* file = fopen("data.txt", "w");
	//fputs("character info\nhp : \nmp : \nstr : \ndex : \nwis : ", file);
	//fclose(file);

#pragma endregion

#pragma region 파일읽기
	//load("resource/goblin.txt");
	//load("resource/Slime.txt");
#pragma endregion



#pragma endregion


	return 0;
}