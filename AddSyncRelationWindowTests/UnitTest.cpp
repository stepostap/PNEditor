#include "stdafx.h"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace PNEditorLibTests
{
	[TestClass]
	public ref class UnitTest
	{
	private:
		TestContext^ testContextInstance;

	public: 
		/// <summary>
		///�������� ��� ������������� �������� �����, � ������� ���������������
		///�������� � ������� �������� ������� � �������������� ��� ����������������.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

		#pragma region Additional test attributes
		//
		//��� ��������� ������ ����� ������������ ��������� �������������� ��������:
		//
		//ClassInitialize ������������ ��� ���������� ���� �� ������� ������� ����� � ������
		//[ClassInitialize()]
		//static void MyClassInitialize(TestContext^ testContext) {};
		//
		//ClassCleanup ������������ ��� ���������� ���� ����� ���������� ������ ���� ������ � ������
		//[ClassCleanup()]
		//static void MyClassCleanup() {};
		//
		//TestInitialize ������������ ��� ���������� ���� ����� �������� ������� �����
		//[TestInitialize()]
		//void MyTestInitialize() {};
		//
		//TestCleanup ������������ ��� ���������� ���� ����� ���������� ������� �����
		//[TestCleanup()]
		//void MyTestCleanup() {};
		//
		#pragma endregion 

		[TestMethod]
		void TestMethod1()
		{
			//
			// TODO: �������� ����� ������ �����
			//
		};
	};
}
