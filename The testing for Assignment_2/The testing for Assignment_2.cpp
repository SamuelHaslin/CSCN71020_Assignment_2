#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/functions.h"
int getPerimeter(int length, int width);
int getArea(int length, int width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ThetestingforAssignment2
{
	TEST_CLASS(ThetestingforAssignment2)
	{
	public:
		
		TEST_METHOD(GetPerimeter_ValidDimensions_Returns_CorrectValue)
		{
			int length = 5;
			int width = 3;
			int expected = 16;

			int actual = getPerimeter(length, width);

			Assert::AreEqual(expected, actual);
			
		}
	};
}
