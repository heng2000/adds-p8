/*
 * @Author: yuheng li a1793138
 * @Date: 2023-05-22 19:06:03
 * @LastEditors: yuheng 
 * @LastEditTime: 2023-05-22 23:11:31
 * @FilePath: \adds-p8\klargest.cpp
 * @Description: 
 * 
 * Copyright (c) ${2023} by ${yuheng li}, All Rights Reserved. 
 */
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