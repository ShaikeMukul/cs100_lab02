#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, BigMinecraft) {
    char* test_val[10]; test_val[0] = "./c-echo"; test_val[1] = "M";test_val[2] = "I";test_val[3] = "N";test_val[4] = "E";test_val[5] = "C";test_val[6] = "R";test_val[7] = "A";test_val[8] = "F"; test_val[9] = "T";
    EXPECT_EQ("M I N E C R A F T", echo(10,test_val));
}

TEST(EchoTest, CJName) {
    char* test_val[4]; test_val[0] = "./c-echo";test_val[1] = "Clement";test_val[2] = "James";test_val[3] = "Potter";
    EXPECT_EQ("Clement James Potter", echo(4,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
