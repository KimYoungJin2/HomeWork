#pragma once
class Monster
{
public:

	//Monster() = default;

	const int LineCount = 40;

	int StringCount(const char* _Arr)
	{
		// ���� �����ڵ带 �����ϼ���
		int ChCount = 0;
		while (_Arr[ChCount])
		{
			++ChCount;
		}

		return ChCount;
	}

};

