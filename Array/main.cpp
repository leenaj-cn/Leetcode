#include "TwoSum.hpp"
#include "TwoSumTestClass.hpp"

void test_array()
{
    Array arr(20,18);
    cout <<"original data:" <<endl;
    arr.printArray();

    arr.sortArray();

    cout <<"sorted data:" <<endl;
    arr.printArray();

    arr.getSumPair();
}



int main()
{
    vector<int> nums={0,1,2,3,4};
    Solution arr(nums, 6);
    arr.twoSum_method2();
    
    return 0;
}
