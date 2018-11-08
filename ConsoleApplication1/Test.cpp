#include <iterator>
#include <string>
#include "Test.h"
#include "pch.h"

struct Test
{
	Test* example;
	TestIsTrue()
	{
		example= new TestisTrue;
		if (example == TestisTrue) {
			cout << "It's true" << end1;
		}
		cout << "It's false";
		return 0;
	}
	virtual ~TestisTrue()
	{
		delete example;
	}