#include "gtest/gtest.h"
#include "../include/Point.h"
#include "../include/draw_graphics.h"

TEST(draw, draw_point) {
    Point point(1,2,3);
    ASSERT_TRUE(drawPoint(point));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
