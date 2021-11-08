#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_6.31\Lab_6.31\Source.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 10;
			int a[n] = { 9, 8, 7, 6, 5, 4, 3, 1, 0 };
			t = Sum(a, n);
			Assert::AreEqual(43, t);
		}
	};
}
