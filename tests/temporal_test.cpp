#include <gtest/gtest.h>
#include <exist/Temporal.h>

TEST(TemporalTest, BasicConstruction)
{
    exist::Temporal<double> price(100.0, "2025-08-20T14:30:00");
    EXPECT_DOUBLE_EQ(price.value(), 100.0);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
