#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/functions.h"

extern "C" {
	int setLength(int);
	int setWidth(int);
	int getPerimeter(int, int);
	int getArea(int, int);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ThetestingforAssignment2
{
	TEST_CLASS(ThetestingforAssignment2)
	{
	public:
		
		TEST_METHOD(TC_01_GetPerimeter_Returns_CorrectValue)
		{
			int length = 5;
			int width = 3;
			int expected = 16;

			int actual = getPerimeter(length, width);

			Assert::AreEqual(expected, actual);
			
		}
		TEST_METHOD(TC_02_GetArea_Returns_CorrectValue)
		{
			int length = 10;
			int width = 7;
			int expected = 70;

			int actual = getArea(length, width);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(SetPerimeter_Returns_Correct_Value)
		{
			int;
		}
	};
}
