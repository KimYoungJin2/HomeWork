#pragma once
class FightZone
{
public:

	//FightZone() = default;

	const int LineCount = 40;

	int StringCount(const char* _Arr)
	{
		// 위쪽 예제코드를 참고하세요
		int ChCount = 0;
		while (_Arr[ChCount])
		{
			++ChCount;
		}

		return ChCount;
	}

};

