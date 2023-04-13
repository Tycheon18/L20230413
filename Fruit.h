#pragma once
#include <iostream>

using namespace std;

class AFruit
{
public:
	AFruit();
	virtual ~AFruit();

	string FruitName;

	string Orange = "오렌지";
	string Pineapple = "파인애플";
	string Apple = "사과";
};

