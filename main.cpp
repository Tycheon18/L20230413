#include <iostream>
#include "Mixer.h"

using namespace std;

int main()
{
	AMixer Mixer;

	Mixer.GetMatter("������");
	Mixer.MakeJuice();

	Mixer.GetMatter("���ξ���");
	Mixer.MakeJuice();

	Mixer.GetMatter("���");
	Mixer.MakeJuice();

	return 0;
}