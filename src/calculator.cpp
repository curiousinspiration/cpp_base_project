/*
 * Calculator definition
 *
 */

#include "calculator/calculator.h"

#include <math.h>

namespace calc
{

Calculator::Calculator()
{

}

float Calculator::CalcSphereVolume(float radius)
{
    // https://www.google.com/search?q=calculate+sphere+volume
    return (4.0f / 3.0f) * M_PI * pow(radius, 3);
}

} // namespace