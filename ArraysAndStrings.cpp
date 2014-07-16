#include<iostream>
#include"ArraysAndStrings.h"
using namespace std;


bool ArraysAndStrings::IfUniqueCharacter(string input)
{
	int marker = 0;
	for (int i = 0; i < input.length(); i++)
	{
		int value = input[i] - 'a';

		if ((marker & (1 << value)) > 0)
		{
			return false;
		}

		marker |= (1 << value);
	}

	return true;
}

char* ArraysAndStrings::ReverseCstring(char* input)
{
	
}
