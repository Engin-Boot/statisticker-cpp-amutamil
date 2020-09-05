#include "stats.h"
#include<cmath>
using namespace Statistics;

stats Statistics::ComputeStatistics(const std::vector<float>& num ) {
    //Implement statistics here
    Statistics::stats obj;
    if(num.size()==0)
    {
        obj.avrg = sqrt(-1);
        obj.mini = sqrt(-1);
        obj.maxi = sqrt(-1);
        return obj;
    }
    obj.avrg = obj.average(num);
    obj.mini = obj.min(num);
    obj.maxi = obj.max(num);
    return obj;
}
