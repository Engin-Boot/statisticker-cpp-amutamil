#include <vector>
#include<cmath>
#include<cfloat>
using namespace std;

namespace Statistics {
    class stats{
    public:
        float avrg, maxi, mini;
        float average(const std::vector<float>& n)
        {   
            if (n.size() == 0)
            {
                return sqrt(-1);
            }
            
            float sum = 0;
            for (unsigned int i = 0;i < n.size();i++)
            {
                sum += n[i];
            }
            return sum/n.size();
        }
        
        float max(const std::vector<float>& n)
        {
            if (n.size() == 0)
            {
                return sqrt(-1);
            }
                float maximum = FLT_MIN;
                for (unsigned int i = 0;i < n.size();i++)
                {
                    if (n[i] > maximum)
                        maximum = n[i];
                }
                return maximum;  
        }
        
    float min(const std::vector<float>& n)
    {
        if (n.size() == 0)
        {
            return sqrt(-1);
        }
            float minimum = FLT_MAX;
            for (unsigned int i = 0;i < n.size();i++)
            {
                if (n[i] < minimum)
                    minimum = n[i];
            }
            return minimum;    
    }
};
    stats ComputeStatistics(const std::vector<float>& num);   
}
