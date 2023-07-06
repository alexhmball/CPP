#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <list>
#include <utility>
#include <sstream>
#include <iostream>

bool check_space(std::string tmp);
bool check_sign(std::string tmp);
template <typename T>
void swap(T &a, T &b);
void my_iter_swap(std::list<std::pair<size_t, size_t> >::iterator a, std::list<std::pair<size_t, size_t> >::iterator b);
int minIndex(std::deque<std::pair<size_t, size_t> > &paired, int i, int j);
void deque_sort_pair(std::deque<std::pair<size_t, size_t> > &paired, size_t n, size_t index = 0);
size_t minIndex(std::list<std::pair<size_t, size_t> > &paired, size_t i, size_t j);
void list_sort_pair(std::list<std::pair<size_t, size_t> > &paired, size_t n, size_t index = 0);
size_t deque_binarySearch(std::deque<size_t> arr, size_t item, int low, int high);
std::list<size_t>::iterator list_binarySearch(std::list<size_t> &arr, size_t item, int low, int high);
void list_insert_sort(std::list<size_t> &sorted, std::list<std::pair<size_t, size_t> > &paired, int flag, size_t extra);
void deque_insert(std::deque<size_t> &sorted, std::deque<std::pair<size_t, size_t> > &paired, int flag, size_t extra);
std::deque<size_t> deque_pair(std::deque<size_t> arr);
void list_pair(std::list<size_t> arr);
bool check_sort(std::string str);

#endif