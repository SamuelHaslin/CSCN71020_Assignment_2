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
		TEST_METHOD(TC_02_Tests_Minimum_ValidNumbers_Corect_Value)
		{
			int length = 1;
			int width = 1;
			int expected = 4;

			int actual = getPerimeter(length, width);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(TC_03_GetArea_Returns_CorrectValue)
		{
			int length = 10;
			int width = 7;
			int expected = 70;

			int actual = getArea(length, width);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(TC_04_GetArea_Test_Valid_MaximumDimensions)
		{
			int length = 99;
			int width = 99;
			int expected = 9801;

			int actual = getArea(length, width);

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TC_05_SetLength_Validinput_ReturnsInput)
		{
			int input = 5;
			int expected = 5;

			int actual = setLength(input);

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TC_06_SetLength_Zero_ReturnsOne)
		{
			int input = 0;
			int expected = 1;

			int actual = setLength(input);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TC_07_SetLength_Highest_ExpectedNumber_ReturnsInput)
		{
			int input = 99;
			int expected = 99;

			int actual = setLength(input);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TC_08_SetWidth_Input_AboveMaximum_Returns1)
		{
			int input = 100;
			int expected = 1;

			int actual = setWidth(input);
			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(TC_09_SetWidth_Input_NegativeNumber_Returns1)
		{
			int input = -4;
			int expected = 1;

			int actual = setWidth(input);
			Assert::AreEqual(expected, actual);

		}
	};
}
