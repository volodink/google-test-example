#include <gtest/gtest.h>
#include "app.h"

TEST(AppMainTest, Check1to1) {
    EXPECT_EQ(42, 42);
}

TEST(AppMainTest, CheckStringTest) {
    google_test_example::Greeter greeter;
    EXPECT_EQ(greeter.greeting(42), "Test");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
