#include<queue>
#include<vector>

int kth_largest(std::vector<int> values, int k)
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> a;
    for(int i=0; i < values.size(); i++)
    {
        a.push(values[i]);

    } 
    for(int i=1; i < k; i++)
    {
        a.pop();
    }
    return a.top();
}