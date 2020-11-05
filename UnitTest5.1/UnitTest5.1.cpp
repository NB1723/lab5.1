#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = k(0,0);
			Assert::AreEqual(t, 0);
		}
	};
}
