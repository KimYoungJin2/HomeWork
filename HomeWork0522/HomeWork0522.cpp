// HomeWork0522.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h> // 키를 누를때까지 기다리는 함수
using namespace std;


// 숙제 1 -- 문자의 오른쪽끝을 맞춰오세요. 이름은 알파뱃만
// fasdhjkfasdhjfkasd--------
// Monster-------------------
// 위와같이 UI의 끝부분이 맞게 만들어라.

// 숙제 2 -- 실시간으로 만들어오세요.
// 데미지 메세지가 나오는순간 체력이 곧바로 감소되게 만들어라.
// 화면 지우는 함수 화면에 출력하는 함수를 잘 생각해보세요.
// 그냥 무식하게 생각해라.

// 숙제 3 -- 누군가 죽었다. 누군가의 Hp가 0이 된순간 종료.


// 상태와 개념을 하나로 묶어서 내가 인간적인 생각을 문법으로 표현한다.
// 이걸 객체지향의 특성이 추상화라고 합니다.

// 몬스터와 플레이어가 서로 한대씩 때리면서
// 한명이 죽으면 끝납니다.
// 지금 그걸 그래픽으로 표현할 방법이 없으니까.
// 글자로 표현하겠습니다.

//void StatusRender(const char* const _Name, int _Att, int _Hp)
//{
//    // 40개로 맞춰오세요.
//
//    // 줄바꿈이 안되고 있습니다.
//    printf_s("%s--------------------------\n", _Name);
//    printf_s("공격력 : %d\n", _Att);
//    printf_s("체  력 : %d\n", _Hp);
//    printf_s("--------------------------\n");
//}
//
//void DamagePrint(const char* const _AttName, const char* const _DefName, int _Att)
//{
//    printf_s("%s가 %s를 공격했습니다.\n", _AttName, _DefName);
//    printf_s("%s는 %d의 데미지를 입었습니다.\n", _DefName, _Att);
//}
//
//void Damage(int& _Hp, int _Att)
//{
//    _Hp -= _Att;
//}

// 내일꼭 break continue

/////////////////////////////////////////////////////////////////////////
typedef struct TagInfo
{
    char chName[40];
    int iAttack;
    int iHp;


}INFO;


class CPlayer
{
public:
    CPlayer();
    ~CPlayer();

    INFO    Get_Info(void)
    {
        return m_tInfo;
    }
    void    Set_MinusHp(int _iAttack)
    {
        m_tInfo.iHp -= _iAttack;
    }
    INFO    m_tInfo;

    void Player_Input(void);

};

CPlayer::CPlayer()
{
    memset(&m_tInfo, 0, sizeof(INFO));
}

CPlayer::~CPlayer()
{
    //소멸자는 필요X
}

void CPlayer::Player_Input(void)
{

    strcpy_s(m_tInfo.chName, sizeof(m_tInfo.chName), "Player");
    m_tInfo.iHp = 20;
    m_tInfo.iAttack = 3;

    cout << "이름" << m_tInfo.chName << endl;
    cout << "체력" << m_tInfo.iHp << "공격력" << m_tInfo.iAttack << endl;



}
class CMonster
{
public:
    CMonster();
    ~CMonster();

    INFO    Get_Info(void)
    {
        return m_tInfo;
    }
    void    Set_MinusHp(int _iAttack)
    {
        m_tInfo.iHp -= _iAttack;
    }
    INFO    m_tInfo;

    void Monster_Input(void);



};

CMonster::CMonster()
{
    memset(&m_tInfo, 0, sizeof(INFO));

}

CMonster::~CMonster()
{
    //소멸자 X
}

void CMonster::Monster_Input(void)
{
    strcpy_s(m_tInfo.chName, sizeof(m_tInfo.chName), "Monster");
    m_tInfo.iHp = 10;
    m_tInfo.iAttack = 1;

    cout <<"이름"<< m_tInfo.chName << endl;
    cout << "체력"<<m_tInfo.iHp <<"공격력"<< m_tInfo.iAttack << endl;

}

CPlayer* m_pPlayer;
CMonster* m_pMonster;

/// //////////////////////////////////////////////////////////////////

//int PlayerHp = 200;
//int PlayerAtt = 10;
//char PlayerName[40] = "Player";
//
//int MonsterHp = 100;
//int MonsterAtt = 5;
//char MonsterName[40] = "Monster";



int main()
{
    // 절차지향 코딩이라고 부르고 
    // 함수와 변수를 개념에 묶지 않고 데이터로만 보고 처리하는 방식입니다.

    // 컴퓨터 입장에서 본다면
    // 플레이어의 hp => 인간적인 머릿속에 그린 개념이다.
    // 컴퓨터적인 측면에서 void Damage(int& _Hp, int _Att)
    // 플레이어가 몬스터를 때린다.
    // => 컴퓨터가 보면 그냥 int나 2개 내놔.



    while (true)
    {

        system("cls");
        m_pPlayer->Player_Input();
        m_pMonster->Monster_Input();

        m_pPlayer->Set_MinusHp(m_pMonster->Get_Info().iAttack);
        m_pMonster->Set_MinusHp(m_pPlayer->Get_Info().iAttack);

        if (0 >= m_pPlayer->Get_Info().iHp)
        {
            return 0;
        }
        if (0 >= m_pMonster ->Get_Info().iHp)
        {
            return 1;
        }
        

        //// 콘솔창을 모조리 지우는 함수
        //system("cls");

        //// 한번에 함수로 만든것이고
        //StatusRender(PlayerName, PlayerAtt, PlayerHp);
        //StatusRender(MonsterName, MonsterAtt, MonsterHp);

        //_getch();

        //// 아무키나 입력할때까지 기다리는 함수

        //DamagePrint(PlayerName, MonsterName, PlayerAtt);
        //Damage(MonsterHp, PlayerAtt);
        //// MonsterHp -= PlayerAtt;

        //_getch();

        //DamagePrint(MonsterName, PlayerName, MonsterAtt);
        //Damage(PlayerHp, MonsterAtt);

        //_getch();

        //if (조건 만족시)
        //{
        //    return;
        //}


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
