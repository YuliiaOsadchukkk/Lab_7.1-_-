#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = { 2, 3, 2, 5, 2 };
			Assert::AreEqual(avg(arr, 5), 2.);
		}
	};
}
