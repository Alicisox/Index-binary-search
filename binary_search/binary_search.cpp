
#include <iostream>
#include <vector>


int BinarySearch(std::vector<long>& vec, int n, int left, int right) {
    if (right - left < 0) return -1;
    int mid = left + ((right - left) / 2);
    if (n == vec.at(mid)) {
        return mid;
    }
    else if (n < vec.at(mid)) { 
        return BinarySearch(vec, n, left, mid - 1);
    }
    else { 
        return BinarySearch(vec, n, mid + 1, right);
    }
}

int main()
{
    int n, m;
    std::cin >> n;
    std::vector<long> vec(n);
    for (size_t i = 0; i < vec.size(); ++i) std::cin >> vec[i];
    std::cin >> m;
    std::vector<long> test(m);
    for (size_t i = 0; i < test.size(); ++i) std::cin >> test[i];
    for (size_t i : test) {
        std::cout << (BinarySearch(vec, i, 0, vec.size() - 1)) << " ";
    }

}
