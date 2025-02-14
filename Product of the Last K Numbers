#include <vector>

class ProductOfNumbers {
private:
    std::vector<int> products;
    
public:
    ProductOfNumbers() {}

    void add(int num) {
        if (num == 0) {
            products.clear();
        } else {
            products.push_back(num * (products.empty() ? 1 : products.back()));
        }
    }

    int getProduct(int k) {
        int n = products.size();
        if (n == 0 || k > n) return 0;
        if (k == n) return products.back();
        return products.back() / products[n - k - 1];
    }
};
