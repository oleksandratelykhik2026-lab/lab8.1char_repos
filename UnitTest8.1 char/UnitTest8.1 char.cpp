#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1 char/8.1 char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const char str[] = "ab.cd.ef.gh";

			Assert::AreEqual(8, FindThirdDot(str));
		}

		TEST_METHOD(FindThirdDotNotFoundTest)
		{
			const char str[] = "ab.cd.ef";

			Assert::AreEqual(-1, FindThirdDot(str));
		}
	};
}
