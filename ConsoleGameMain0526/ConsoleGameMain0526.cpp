﻿// ConsoleGameMain0526.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


#include <iostream>
#include <conio.h>
#include"ConsoleScreen.h"
#include"int4.h"
#include"Player.h"
#include"GlobalFunction.h"


// 1. 파일 정리
// 2. 10개의 장애물 배치 class Wall
//    Player 
//    Wall 
//    같은 클래스를 상속받아서 만들어져야 한다.
// 
// 3. 장애물을 통과 못하게 하기.

// 숙제 플레이어가 화면 바깥으로 나가지 못하게 해라.



// 이녀석은 캡슐화된 클래스라기 보다는 기본자료형

// Init('*')

// [*][*][0] \n
// [*][*][0] \n





// 기계어적으로 볼때 함수가 호출되고 함수의 메모리를 만들고
// 메모리를 정리하는 담당자를 정해야하는 규칙이 있는데.
// C++에서는 그걸 직접 정해줄수 있는 문법이 또 있는거야.
// 컴파일러가 가장 최적의 함수호출규약을 알아서 정해줍니다.
void /*__cdecl*/ Function()
{

}

int main()
{
    ConsoleScreen Screen;
    Screen.Init('*');

    Player MainPlayer;
    // 클래스의경우에는 
    MainPlayer.SetPos({ 10, 5 });

    while (true)
    {
        Screen.Clear();
        Screen.SetPixel(MainPlayer.GetPos(), 'a');
        Screen.Print();

        MainPlayer.Input(&Screen);
    }


}
