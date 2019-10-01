#include "pch.h"
#include "../Project14/Header.h"

TEST(TestCaseName, TestName) 
{
  EXPECT_EQ(mySpace::f(), 10);
}

TEST(TestCaseName, TestName1)
{
	EXPECT_EQ(mySpace::g(), 20);
}

TEST(TestCaseName, TestName2)
{
	EXPECT_EQ(mySpace::h(), 30);
}