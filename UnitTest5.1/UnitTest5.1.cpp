#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.1/PR5.1/PR5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			double p = 2;
			double q = 3;
			double expected = 1.13402;
			double n = (k(1 + p * q, q * q) + pow(k(p, p * p), 2)) / (1 + k(p * q + q * q, p));

			Assert::AreEqual(n, expected, 0.01);
		}
	};
}