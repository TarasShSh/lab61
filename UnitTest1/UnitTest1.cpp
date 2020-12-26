#include "pch.h"
#include "CppUnitTest.h"
#include "../lab61r/lab61r.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int c[27] = { -2, -17, 13, -1, -4, 21, -13, -31, -7, 22, 7, 19, -8, -30, -32, -29, -22, 19, -14, 14, -12, -24, 3, 6, -1, -30, -7 },
				sum = 18,
				size = 17;
			Assert::AreEqual(sum, Sum(c, 27, 0));
			Assert::AreEqual(size, Size(c, 27, 0));

		}

	};
	}
