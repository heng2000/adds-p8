#include<queue>
#include<vector>

int kth_largest(std::vector<int> values, int k)
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> a;
    for(int i=0; i < values.size(); i++)
    {
        a.push(values.at(i));
        if (a.size()>k)
        {
             a.pop();
        }

    } 
    return a.top();
}