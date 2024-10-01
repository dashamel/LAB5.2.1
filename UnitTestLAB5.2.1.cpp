#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB5.2.1/lab5.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework; 

namespace UnitTestLAB521
{
	TEST_CLASS(UnitTestLAB521)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			void S(const double x, const double eps, int& n, double& s);
			double x = 0.5;
			double eps = 0.000001; 
			int n;
			double s;
			S(x, eps, n, s);
			double t = atanh(x);
			Assert::AreEqual(t, s, 0.000001);          
		}
	};
}
