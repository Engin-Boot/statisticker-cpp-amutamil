#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"

#include <cmath>

TEST_CASE("reports average, minimum and maximum") {
    auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.avrg - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.maxi - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.mini - 1.5) < epsilon);
}

TEST_CASE("average, maximum and minimum is NaN for empty array") {
      auto computedStats = Statistics::ComputeStatistics({});
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
    REQUIRE(std::isnan(computedStats.avrg ) == true);
    REQUIRE(std::isnan(computedStats.maxi ) == true);
    REQUIRE(std::isnan(computedStats.mini ) == true);
    
    //Design the REQUIRE statement here.
    //Use http://www.cplusplus.com/reference/cmath/isnan/
}

TEST_CASE("average, minimum and maximum when NaN is input") {
    auto computedStats = Statistics::ComputeStatistics({nan(""),1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.avrg - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.maxi - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.mini - 1.5) < epsilon);
}

TEST_CASE("average, minimum and maximum when only one input and it is NaN") {
    auto computedStats = Statistics::ComputeStatistics({nan("")});
    REQUIRE(std::isnan(computedStats.avrg ) == true);
    REQUIRE(std::isnan(computedStats.maxi ) == true);
    REQUIRE(std::isnan(computedStats.mini ) == true);
}
