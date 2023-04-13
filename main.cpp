#include <iostream>
#include "Mixer.h"

using namespace std;

int main()
{
	AMixer Mixer;

	Mixer.GetMatter("오렌지");
	Mixer.MakeJuice();

	Mixer.GetMatter("파인애플");
	Mixer.MakeJuice();

	Mixer.GetMatter("사과");
	Mixer.MakeJuice();

	return 0;
}