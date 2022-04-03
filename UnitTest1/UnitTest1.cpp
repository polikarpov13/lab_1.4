#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_1.4/Triad.cpp"
#include "../lab_1.4/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t1;

			t1.Init(2, 1, 1);

			int test = t1.check();

			Assert::AreEqual(1, test);
		}
	};
}
