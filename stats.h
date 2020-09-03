#include <vector>

namespace Statistics {
    class stats{
    public:
        float avrg, maxi, mini;
        float average(const vector<float>& n);
        float max(const vector<float>& n);
        float min(const vector<float>& n);
    };
    float stats::average(const vector<float>& n) {
        float sum = 0;
        for (unsigned int i = 0;i < n.size();i++)
        {
            sum += n[i];
        }
        return sum/n.size();
    }
    float stats::max(const vector<float>& n) {
        float maximum = INT_MIN;
        if (n.size() == 0)
        {
            return 0;
        }
        else
        {
            for (unsigned int i = 0;i < n.size();i++)
            {
                if (n[i] > maximum)
                    maximum = n[i];
            }
            return maximum;
        }
    }
    float stats::min(const vector<float>& n) {
        float minimum = INT_MAX;
        if (n.size() == 0)
        {
            return 0;
        }
        else
        {
            for (unsigned int i = 0;i < n.size();i++)
            {
                if (n[i] < minimum)
                    minimum = n[i];
            }
            return minimum;
        }
    }
    stats ComputeStatistics(const std::vector<float>& num);
    
}
