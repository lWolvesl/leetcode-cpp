#include <map>
#include <vector>

using namespace std;

map<int, int> statistic(vector<int> L1)
{
    map<int, int> m;
    for (auto i : L1)
    {
        map[i] = map[i] + 1;
    }
    return m;
}