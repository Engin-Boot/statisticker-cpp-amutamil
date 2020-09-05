#include "stats.h"
using namespace Statistics;

stats Statistics::ComputeStatistics(const std::vector<float>& num ) {
    //Implement statistics here
    Statistics::stats obj;
    if(num.size()==0)
    {
        obj.avrg = 0;
        obj.mini = 0;
        obj.maxi = 0;
        return obj;
    }
    obj.avrg = obj.average(num);
    obj.mini = obj.min(num);
    obj.maxi = obj.max(num);
    return obj;
}
