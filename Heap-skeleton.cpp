/*
 * @Author: yuheng li a1793138
 * @Date: 2023-05-22 19:06:30
 * @LastEditors: yuheng 
 * @LastEditTime: 2023-05-22 22:15:12
 * @FilePath: \week10\Heap-skeleton.cpp
 * @Description: 
 * 
 * Copyright (c) ${2023} by ${yuheng li}, All Rights Reserved. 
 */
#ifndef HEAP_H_
#define HEAP_H_
#include<vector>
#include<cmath>

template <typename T>
class Heap
{
    private:
    //values numbers
        std::vector<T> numbers;
        void heapify(int);
    public:
        Heap( );
        Heap(std::vector<T>);
        void insert(T);
        void remove(T):
        T getMin();
};

template <typename T>
Heap<T>::Heap() {}
template <typename T>
Heap<T>::Heap(std::vector<T> start_values) 
{
    for (int i = 0; i< start_values.size(); i++)
    {
        numbers.push_back(start_values.at(i));
    }
    int initial_parent_index = floor(numbers.size() / 2) - 1;
    for(int parent_index = initial_parent_index; parent_index >= 0;parent_index--)
    {
        heapify(parent index);
    }
}
template <typename T>
void Heap<T>::insert(T value)
{
    numbers.push_back(value);
    int child_index =numbers.size()-1;
    int parent_index = (numbers.size()-1)/2;
    while(numbers[child_index] < numbers[parent_index] && child_index > 0)
    {
        T tmp = numbers[child_index];
        numbers[child_index] = numbers[parent_index];
        numbers[parent_index] = tmp;
        child_index = parent_index;
        parent_index = (child_index - 1) / 2;
    }
}
template <typename T>
void Heap<T>::remove(T value)
{
    int index = -1;
    for(int i=0; i<values.size(); i++)
    {
        if (numbers[i] == value)
        {
            index = 1;
            break;

        }
        numbers[index] = value[values.size()-1];
        numbers.pop_back();
        heapify(index);
    }

}
template <typename T>
T Heap<T>::getMin() 
{
    return numbers[0];
}
#endif