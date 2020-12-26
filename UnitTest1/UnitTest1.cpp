#include "pch.h"
#include "CppUnitTest.h"
#include "../lab61/lab61.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c[27] = { -23, -27, 18, 3, -24, 23, -8, 1, -20, -28, 15, 8, 2, -11, 20, 5, -19, 0, -7, -2, -21, 13, -18, -17, -7, -9, -25 },
				 sum = -58,
				 size = 20;
			Assert::AreEqual(sum, Sum(c, 27));
			Assert::AreEqual(size, Size(c, 27));
		}
	};
}
