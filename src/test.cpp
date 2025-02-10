#include <iostream>

#include <gtest/gtest.h>

TEST(suite, test)
{
	FAIL();
	return;
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
