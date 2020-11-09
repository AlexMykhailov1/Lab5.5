#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/Lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(0, 0, 3, 0, 1, 0);
			Assert::AreEqual(t, 1);
		}
	};
}
