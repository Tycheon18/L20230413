#include <iostream>
#include "Mixer.h"
#include "Fruit.h"

using namespace std;

int main()
{
	AMixer Mixer;
	AFruit Fruit;

	for(int i = 1; i <=3; ++i)
	{
		cin >> Fruit.FruitName;

		Mixer.GetMatter(Fruit.FruitName);
		Mixer.MakeJuice();
	}

	return 0;
}