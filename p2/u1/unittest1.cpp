#include "stdafx.h"
#include "CppUnitTest.h"
#include "..//p2/factorial.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace u1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(120, factorial(5));
		}

	};
}