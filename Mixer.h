#pragma once
#include <iostream>
#include <string>
using namespace std;

class AMixer
{
public:
	AMixer();
	virtual ~AMixer();
	void MakeJuice();
	void GetMatter(string matter);

	string Matter;
};

