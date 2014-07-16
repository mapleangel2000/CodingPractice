#include<iostream>
#include "ArraysAndStrings.h"
using namespace std;

void test1(string);

int main(int argc, char* argv[])
{
	test1(argv[1]);

	return 0;
}

void test1(string test)
{
	ArraysAndStrings arraysAndStrings;
	if(arraysAndStrings.IfUniqueCharacter(test) == 1)
	{
		cout<<"UNIQUE"<<endl;
	}
	else
	{
		cout<<"NOT UNIQUE"<<endl;
	}
}
