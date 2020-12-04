#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.2(A)/Lab_9.2(A).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab92A
{
	TEST_CLASS(UnitTestLab92A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int kil_student = 2;
			student* s = new student[kil_student];
			s[0].prizv = "sdgsd";                  s[1].prizv = "ssfsaf";
			s[0].kurs = 4;                        s[1].kurs = 2;
			s[0].specialization = (Special)2;     s[1].specialization = (Special)0;
			s[0].phisuka = 4;                     s[1].phisuka = 2;
			s[0].matematic = 4;                   s[1].matematic = 3;
			s[0].informatic = 5;                  s[1].informatic = 5;

			Sort(s, kil_student);

			Assert::AreEqual(s[0].kurs, 2);
		}
	};
}
