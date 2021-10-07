#include "pch.h"
#include "c:\users\yakov\source\repos\§ть ырср 3\ырср 2\Header.h"

//1

TEST(converter, Test1) 
{
	EXPECT_EQ(converter(123, 6), "323");
}

TEST(converter, Test2)
{
	EXPECT_EQ(converter(20, 2), "10100");
}

TEST(converter, Test3)
{
	EXPECT_EQ(converter(6010, 16), "177A");
}

//2

TEST(reconverter, Test4)
{
	EXPECT_EQ(reconverter("1BC20", 16), 113696);
}

TEST(reconverter, Test5)
{
	EXPECT_EQ(reconverter("100110100010", 2), 2466);
}

TEST(reconverter, Test6)
{
	EXPECT_EQ(reconverter("221", 3), 25);
}

//3

TEST(split, Test7)
{
	std::vector<std::string> result = { "af", "s", "qwer" };
	EXPECT_EQ(split("af,s,qwer", ','), result);
}

TEST(split, Test8)
{
	std::vector<std::string> result = { "qwert", "y123" };
	EXPECT_EQ(split("qwert y123", ' '), result);
}

//4

TEST(swap, Test10)
{
	std::vector<int> str = { 2, 4, 1, 6, 4, 3, 1 };
	std::vector<int> res = { 1, 1, 2, 3, 4, 4, 6 };
	sort(str);
	EXPECT_EQ(res, str);
}

