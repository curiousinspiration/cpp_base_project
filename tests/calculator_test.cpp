/*
 * Calculator test
 *
 */

#include "calculator/calculator.h"

#include <gtest/gtest.h>

// TEST(TestCaseName, IndividualTestName)
TEST(CalculatorTest, SphereVolume)
{
    calc::Calculator c;
    float radius = 3.0f;
    EXPECT_FLOAT_EQ(113.09734f, c.CalcSphereVolume(radius));
}
