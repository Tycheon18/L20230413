#include "Mixer.h"

AMixer::AMixer()
{
}

AMixer::~AMixer()
{
}

void AMixer::MakeJuice()
{
	cout << this->Matter << " �꽺�� ����� �����ϴ�. \n";

	return;
}

void AMixer::GetMatter(string matter)
{
	Matter = matter;
}
