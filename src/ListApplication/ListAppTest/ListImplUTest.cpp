#include "stdafx.h"
#include "CppUnitTest.h"
#include "ListImpl.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ListImplTest
{		
	TEST_CLASS(CListAPITest)
	{
	public:
		
		TEST_METHOD(TestListSize)
		{
			ListImpl list;
			Assert::AreEqual(list.ListSize(),0);
			list.Insert(10);
			list.Insert(20);
			list.Insert(30);
			list.Insert(40);
			list.Insert(50);
			Assert::AreEqual(list.ListSize(), 5);
		}

		TEST_METHOD(TestMiddleOfList)
		{
			ListImpl list;
			//Check middle of the list in case of no nodes in the list.
			Assert::AreEqual(list.FindMiddleOfList(), -1);
			list.Insert(10);
			list.Insert(20);
			list.Insert(30);
			//Chcek middle of the list in case of off number of nodes
			Assert::AreEqual(list.FindMiddleOfList(), 20);
			list.Insert(40);
			//Check middle of the list in case of even number of nodes
			Assert::AreEqual(list.FindMiddleOfList(), 30);

		}

		TEST_METHOD(ListDeleteNode) {
			ListImpl list;
			//Delete node from the empty list
			Assert::IsFalse(list.DeleteNode(10));
			list.Insert(10);
			list.Insert(20);
			list.Insert(30);
			list.Insert(40);
			list.Insert(50);
			//Delete node present in the list
			Assert::IsTrue(list.DeleteNode(10));
			//Delete node not present in the list
			Assert::IsFalse(list.DeleteNode(10));
			//Delete node not present in the list
			Assert::IsFalse(list.DeleteNode(60));

		}

	};
}