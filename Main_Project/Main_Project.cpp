// HomeWork0524.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

#include"FightZone.cpp"
#include"Monster.cpp"
#include"Player.cpp"




//const int LineCount = 40;
//
//int StringCount(const char* _Arr)
//{
//	// 위쪽 예제코드를 참고하세요
//	int ChCount = 0;
//	while (_Arr[ChCount])
//	{
//		++ChCount;
//	}
//
//	return ChCount;
//}



// 문법은 왜 발전했다? 인간이 코드를 덜치기 위해서 발전했습니다.
int main()
{
	// 객체지향이라고 한다.
	Player NewPlayer;
	Monster NewMonster;

	FightZone FZone;
	FZone.Fight(NewPlayer, NewMonster);

}
