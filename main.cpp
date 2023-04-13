#include <iostream>
#include "Mixer.h"

using namespace std;

int main()
{
	AMixer Mixer;

	string Orange = "오렌지";
	string Pineapple = "파인애플";
	string Apple = "사과";

	Mixer.MakeJuice(Orange);
	Mixer.MakeJuice(Pineapple);
	Mixer.MakeJuice(Apple);

	return 0;
}