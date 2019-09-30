#include "pch.h"
#include "../Project13/integerNumbers.h"


TEST(digitsOperation, sumOfDigit)
{
	EXPECT_EQ(integerNumbers::sumOfDigit(1234), 10);
}