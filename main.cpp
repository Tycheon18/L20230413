#include <iostream>
#include "Mixer.h"

using namespace std;

int main()
{
	AMixer Mixer;

	string Orange = "������";
	string Pineapple = "���ξ���";
	string Apple = "���";

	Mixer.MakeJuice(Orange);
	Mixer.MakeJuice(Pineapple);
	Mixer.MakeJuice(Apple);

	return 0;
}