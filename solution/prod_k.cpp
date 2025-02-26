/**
 * 1352. Product of the Last K Numbers
 * link - https://leetcode.com/problems/product-of-the-last-k-numbers/description/
 */

 class ProductOfNumbers {
    private:
        vector<int> arr, pre;
        int lastZ;
    public:
        ProductOfNumbers() {
            pre.push_back(1);
            lastZ = -1;
        }
        
        void add(int num) {
            if (num == 0) {
                pre.clear(); pre.push_back(1);
                lastZ = arr.size();
            } else pre.push_back(pre.back() * num);
    
            arr.push_back(num);
        }
        
        int getProduct(int k) {
            if (k >= pre.size()) return 0;
            else return (pre.back() / pre[pre.size() - k - 1]);
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */