#include "stdafx.h"
#include "CppUnitTest.h"
#include"../source/Deque.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DequeTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(testDeque)
		{
			Deque<int>a;
			Assert::IsTrue(a.size()==0);
			for (int i = 0; i < 20; i++) {
				Assert::IsTrue(a.size() == i);
				a.addFront(i);
			}
			for (int i = 20; i > 0; i--) {
				Assert::IsTrue(a.size() == i);
				a.removeFront();
			}
				
			
		}


		TEST_METHOD(addfront)
		{
			Deque<int>a;
			Assert::IsTrue(a.size() == 0);
			for (int i = 0; i < 20; i++) {
				a.addFront(i);
			}
			for (int i = 0; i < 20; i++) {
				Assert::IsTrue(a.removeFront() == i);
		
			}
			
			
		}

		TEST_METHOD(addtail)
		{
			Deque<int>a;
			Assert::IsTrue(a.size() == 0);
			for (int i = 0; i < 20; i++) {
				a.addTail(i);
			}
			for (int i = 0; i < 20; i++) {
				Assert::IsTrue(a.removeTail() == i);

			}
		}

		TEST_METHOD(removefront)
		{
		

			Deque<int>b;
			Deque<int>a;
			b.addFront(0);
			Assert::IsTrue(a.size() == 0);
			for (int i = 0; i < 20; i++) {
				a.addFront(i);
			}
			for (int i = 0; i < 20; i++) {
				b.addFront(b.removeFront() + a.removeFront());
			}
			Assert::IsTrue(b.removeFront()==((19*19+19)/2));
		}

		TEST_METHOD(removeteil)
		{

			Deque<int>b;
			Deque<int>a;
			b.addFront(0);
			Assert::IsTrue(a.size() == 0);
			for (int i = 0; i < 20; i++) {
				a.addFront(i);
			}
			for (int i = 0; i < 20; i++) {
				b.addFront(b.removeTail() + a.removeTail());
			}
			Assert::IsTrue(b.removeFront() == ((19 * 19 + 19) / 2));
		
		}



	};
}