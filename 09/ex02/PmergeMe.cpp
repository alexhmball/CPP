#include "PmergeMe.hpp"

bool check_space(std::string tmp) {
	for (size_t i = 0; i < tmp.length(); i++) {
		if (!isspace(tmp[i]))
			return false;
	}
	return true;
}

bool check_sign(std::string tmp) {
	for (size_t i = 0; i < tmp.length(); i++) {
		if (!isdigit(tmp[i]))
			return false;
	}
	return true;
}

template< class InputIt >
InputIt my_next( InputIt it, typename std::iterator_traits<InputIt>::difference_type n) {
	typename std::iterator_traits<InputIt>::difference_type i = 0;
	while (i < n) {
		it++;
		i++;
	}
	return it;
}

int minIndex(std::deque<std::pair<size_t, size_t> > &paired, int i, int j)
{
	if (i == j)
		return i;
	int k = minIndex(paired, i + 1, j);
	return (paired[i] < paired[k])? i : k;
}

void deque_sort_pair(std::deque<std::pair<size_t, size_t> > &paired, size_t n, size_t index) {
	if (index == n)
		return ;
	size_t k = minIndex(paired, index, n - 1);
	if (k != index)
		std::swap(paired[k], paired[index]);
	deque_sort_pair(paired, n, index + 1);
}

size_t minIndex(std::list<std::pair<size_t, size_t> > &paired, size_t i, size_t j)
{
	if (i == j)
		return i;
	size_t k = minIndex(paired, i + 1, j);
	return (*my_next(paired.begin(), i) < *my_next(paired.begin(), k))? i : k;
}

void list_sort_pair(std::list<std::pair<size_t, size_t> > &paired, size_t n, size_t index) {
	if (index == n)
		return ;
	size_t k = minIndex(paired, index, n - 1);
	if (k != index)
		std::iter_swap(my_next(paired.begin(), k), my_next(paired.begin(), index));
	list_sort_pair(paired, n, index + 1);
}

size_t deque_binarySearch(std::deque<size_t> arr, size_t item, int low, int high)
{
	while (low <= high && low >= 0) {
		int mid = low + (high - low) / 2;
		if (item == arr[mid])
			return mid + 1;
		else if (item > arr[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return low;
}

std::list<size_t>::iterator list_binarySearch(std::list<size_t> &arr, size_t item, int low, int high)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (item == *my_next(arr.begin(), mid))
			return my_next(arr.begin(), mid + 1);
		else if (item > *my_next(arr.begin(), mid))
			low = mid + 1;
		else
			high = mid - 1;
	}
	if (low > (int)arr.size())
		return arr.end();
	return my_next(arr.begin(), low);
}

void list_insert_sort(std::list<size_t> &sorted, std::list<std::pair<size_t, size_t> > &paired, int flag, size_t extra) {
	while (paired.size()) {
		size_t search = paired.front().second;
		sorted.insert(list_binarySearch(sorted, search, 0, sorted.size()), search);
		paired.pop_front();
	}
	if (flag)
		sorted.insert(list_binarySearch(sorted, extra, 0, sorted.size()), extra);
}

void deque_insert(std::deque<size_t> &sorted, std::deque<std::pair<size_t, size_t> > &paired, int flag, size_t extra) {
	while (paired.size())
	{
		size_t search = paired.front().second;
		size_t pos = deque_binarySearch(sorted, search, 0, sorted.size());
		std::deque<size_t>::iterator loc(sorted.begin() + pos);
		sorted.insert(loc, search);
		paired.pop_front();
	}
	if (flag) {
		size_t pos = deque_binarySearch(sorted, extra, 0, sorted.size());
		std::deque<size_t>::iterator loc(sorted.begin() + pos);
		if (pos - 1 == sorted.size())
			sorted.push_back(extra);
		else
			sorted.insert(loc, extra);
	}
}

std::deque<size_t> deque_pair(std::deque<size_t> arr) {
	std::deque<std::pair<size_t, size_t> > paired;
	std::deque<size_t> sorted;
	size_t extra;
	int flag = 0;

	for (size_t i = 0; i < arr.size(); i += 2) {
		if (i + 1 == arr.size()) {
			flag = 1;
			extra = arr[i];
			break ;
		}
		if (arr[i] > arr[i + 1])
			paired.push_back(std::pair<size_t, size_t>(arr[i], arr[i + 1]));
		else
			paired.push_back(std::pair<size_t, size_t>(arr[i + 1], arr[i]));
	}
	deque_sort_pair(paired, paired.size());
	for (size_t i = 0; i < paired.size(); i++)
		sorted.push_back(paired[i].first);
	deque_insert(sorted, paired, flag, extra);
	return sorted;
}

void list_pair(std::list<size_t> arr) {
	std::list<std::pair<size_t, size_t> > paired;
	std::list<size_t> sorted;
	std::list<size_t>::iterator first = arr.begin();
	std::list<size_t>::iterator second = arr.begin();
	size_t extra = 0;
	int flag = 0;
	std::advance(second, 1);
	for (size_t i = 0; i < arr.size(); i += 2) {
		if (*(first) > *(second))
			paired.push_back(std::pair<size_t, size_t>(*(first), *(second)));
		else
			paired.push_back(std::pair<size_t, size_t>(*(second), *(first)));
		std::advance(second, 2);
		std::advance(first, 2);
		if (second == arr.end()) {
			flag = 1;
			extra = *(first);
			break ;
		}
	}
	list_sort_pair(paired, paired.size());
	for (std::list<std::pair<size_t, size_t> >::iterator it = paired.begin(); it != paired.end(); std::advance(it, 1))
		sorted.push_back(it->first);
	list_insert_sort(sorted, paired, flag, extra);
}

void print_list_info(std::list<size_t> arr, double elapsed) {
	std::cout << "Time to proccess a range of " << arr.size() << " elements with std::list " << elapsed << " secs" << std::endl;
}

void print_deque_info(std::deque<size_t> arr, double elapsed) {
	std::cout << "Time to proccess a range of " << arr.size() << " elements with std::deque " << elapsed << " secs" << std::endl;
}

void sort(std::deque<size_t> dque, std::list<size_t> lst) {
	struct timespec begin, end;
	long seconds;
    long nanoseconds;
    double elapsed;

    clock_gettime(CLOCK_REALTIME, &begin);
	dque = deque_pair(dque);
	clock_gettime(CLOCK_REALTIME, &end);
    seconds = end.tv_sec - begin.tv_sec;
    nanoseconds = end.tv_nsec - begin.tv_nsec;
    elapsed = seconds + nanoseconds*1e-9;
	std::cout << "After:  ";
	for (size_t i = 0; i < dque.size(); i++)
		std::cout << dque[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	print_deque_info(dque, elapsed);
	std::cout << std::endl;
    clock_gettime(CLOCK_REALTIME, &begin);
	list_pair(lst);
	clock_gettime(CLOCK_REALTIME, &end);
    seconds = end.tv_sec - begin.tv_sec;
    nanoseconds = end.tv_nsec - begin.tv_nsec;
    elapsed = seconds + nanoseconds*1e-9;
	print_list_info(lst, elapsed);
}

bool check_sort(std::string str) {
	std::deque<size_t> check;
	std::list<size_t> lst;
	std::string tmp;
	std::string::size_type pos1;
	std::string::size_type pos2;
	std::string::size_type i = 0;
	size_t num;

	while (str[i]) {
		while (isspace(str[i]) && str[i])
			i++;
		pos1 = i;
		while (!isspace(str[i]) && str[i])
			i++;
		pos2 = i;
		tmp = str.substr(pos1, pos2 - pos1);
		std::stringstream ss(tmp);
		ss >> num;
		if ((ss.fail() && !check_space(tmp)) || !check_sign(tmp))
			return false;
		else if (!check_space(tmp)) {
			check.push_back(num);
			lst.push_back(num);
		}
	}
	std::cout << std::endl;
	std::cout << "Before: ";
	for(size_t i = 0; i < check.size(); i++)
		std::cout << check[i] << " ";
	std::cout << std::endl;
	sort(check, lst);
	return true;
}