#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& num ) {
    //Implement statistics here
    Statistics::stats obj;
    obj.avrg = obj.average(num);
    obj.mini = obj.min(num);
    obj.maxi = obj.max(num);
    return obj;
}
