#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.1.CHAR/PR8.1.CHAR.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[50] = "who want free tea";
			bool test = foundOut(str);
			Assert::AreEqual(test, false);
		}
	};
}
