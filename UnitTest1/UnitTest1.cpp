#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3rec/Lab_6.3rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int arr[size] = { 1, 2, 3, 4, 5 };
			Assert::AreEqual(findMax(arr, size), 5); 

			int arr2[size] = { -1, -2, -3, -4, -5 };
			Assert::AreEqual(findMax(arr2, size), -1); 

			int arr3[size] = { 0, 0, 0, 0, 0 };
			Assert::AreEqual(findMax(arr3, size), 0); 
		}
	};
}
