#include<stdio.h>
void shuffle(int array[], int array_size)
{
	for (int i = 0; i < array_size; i++) {
		int seed = rand() % array_size;
		int temporary = array[seed];

		array[seed] = array[i];
		array[i] = temporary;
	}
}
int main() {
#pragma region 의사 난수
	// 0 ~ 32767 사이의 난수 값을 반환하는 함수

	// UTC 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된 시간을 
	// 초(sec)로 반환하는 함수

	// srand : rand()가 사용할 초기값(seed)을 설정하는 함수

	/*srand(time(NULL));

	int random = rand() % 10 + 1;

	printf("random : %d\n",random);*/

#pragma endregion

#pragma region 셔플 함수

	srand(time(NULL));
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int size = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
	shuffle(array, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}

#pragma endregion


	return 0;
}