﻿// HomeWork0519.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
<<<<<<< HEAD
=======
using namespace std;
>>>>>>> a4a6c4618b44aa5573c042f905358f53bc48df80

//int ChCount = 0;
//while (_string[ChCount])
//{
//    ++ChCount;
//}

int ChCount(const char* const _string, char Ch)
{
    if (nullptr == _string)
    {
        return -1;
    }

<<<<<<< HEAD
    int ChCount = 0;
    while (_string[ChCount])
    {
        char Ch = _string[ChCount];

        ++ChCount;
    }

    int Count = 0;

    // for문을 돌리는건 당연한거야.

    // Ch와 같은 문자가 몇개들어있는지 세어서 리턴해주는 함수
    return 0;
=======

    int Count = 0;

    int ChCount = 0;

    while (_string[ChCount])
    {
        char Value = _string[ChCount];



    }



    // for문을 돌리는건 당연한거야.

    // Ch와 같은 문자가 몇개들어있는지 세어서 리턴해주는 함수
    //return 0;
    return Count;
>>>>>>> a4a6c4618b44aa5573c042f905358f53bc48df80
}

void TrimDelete(char* _string)
{
    char Ch = 'a';
    ' ';

    //while ()
    //{
    if (Ch == ' ')
    {
        int a = 0;
    }
    //}


    return;
}


int DigitsCount(int _Number)
{
    return 0;
}

void StrCopy(const char* const _Left, char* _Right)
{
    return;
}

// 가장 어려운 숙제
void NumberToString(int _Number, char* _Right)
{
<<<<<<< HEAD
=======
    
>>>>>>> a4a6c4618b44aa5573c042f905358f53bc48df80
    return;
}


int main()
{
    // 4가 리턴되어야 합니다.
    // 문자열의 마지막에 들어가는 0은 글자로 치지 않습니다.
    {
<<<<<<< HEAD
        int Result = ChCount("ab aaa ccc ddd eee", 'a');

        int Result2 = ChCount(nullptr, 'a');
    }

    {
=======
        //1.a가몇개있는지 알아보는 함수를 만들어서 4를 리턴하게 만들어라 
        //a 가 4개있으니깐
        //chcount 안에서
        //d를넣으면 3이되게도 되야한다
        //와일문 예제 저번처럼 위에적어주심

        int Result = ChCount("ab aaa ccc ddd eee", 'a');

        int Result2 = ChCount(nullptr, 'a');
        cout << Result2 << endl;
    }

    {
       // 2.들어갔다가 나오면 공백이 삭제되게 만들어라 
       //트림딜리트 함수를 사용해라 안에 내가 만들어야한다
>>>>>>> a4a6c4618b44aa5573c042f905358f53bc48df80
        char Arr[256] = "aa  b  c dd ee";

        TrimDelete(Arr);

        // Arr "aabcddee"
        int a = 0;
    }

    {
<<<<<<< HEAD
        // 8이 리턴되게 만들어라.
=======
       // 3.자리수세기
       // 숫자 자릿수를 셀수있는 함수를 만들어라 디짓 함수 안에서
       // 8이 리턴되게 만들어라.
>>>>>>> a4a6c4618b44aa5573c042f905358f53bc48df80
        int Result = DigitsCount(100);

        int a = 0;
    }

    {
<<<<<<< HEAD
=======
        //4.strcopy 함수를 통해서 문자를 그대로 나오게 만들어라
>>>>>>> a4a6c4618b44aa5573c042f905358f53bc48df80
        char ArrCopyText[256] = {};

        StrCopy("aaaa bbb ccc", ArrCopyText);

        int a = 0;
    }

    {
<<<<<<< HEAD
=======
       // 5.가장어려운숙제
>>>>>>> a4a6c4618b44aa5573c042f905358f53bc48df80
        char Result[256] = {};

        // Result = "312312";

        NumberToString(312312, Result);

        char Ch = '0';

        int Value = 7;

        char ChConvert = Value + 48;

        int a = 0;
    }

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
