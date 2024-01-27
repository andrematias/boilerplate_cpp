#include "CppUTest/TestHarness.h"

TEST_GROUP(MyTest){void setup(){} void teardown(){}};

TEST(MyTest, CreateANewTest) { CHECK(true); }
