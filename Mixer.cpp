#include "Mixer.h"

AMixer::AMixer()
{
}

AMixer::~AMixer()
{
}

void AMixer::MakeJuice()
{
	cout << this->Matter << " 쥬스가 만들어 졌습니다. \n";

	return;
}

void AMixer::GetMatter(string matter)
{
	Matter = matter;
}
