#include <iostream>
#include "Mixer.h"
#include "Fruit.h"

using namespace std;

int main()
{
	AMixer Mixer;
	AFruit Fruit;

	Mixer.GetMatter(Fruit.Orange);
	Mixer.MakeJuice();

	Mixer.GetMatter(Fruit.Pineapple);
	Mixer.MakeJuice();

	Mixer.GetMatter(Fruit.Apple);
	Mixer.MakeJuice();

	Fruit.~AFruit();

	return 0;
}