/* 3. Copy data 2
////////////////////////////////////////

std::copy and std::copy_backward
----------------------------------
They are similar with some crucial differences.

template <class InputIterator, class OutputIterator>
    OutputIterator copy (InputIterator first, InputIterator last, OutputIterator result);
---------------
Copies elements from range [first, last) into range BEGINNING with result.
Function returns an iterator to the end of the range 
    (which points to the element after the last element copied).

Ranges can overlap as long as result (i.e. first location) does not lie in the range [first, last).


template <class BidirectionalIterator1, class BidirectionalIterator2>
    BidirectionalIterator2 copy_backward (BidirectionalIterator1 first,
                                          BidirectionalIterator1 last,
                                          BidirectionalIterator2 result);
---------------
Copies elements from range [first, last) starting from the end into range TERMINATING at result.                                        
Function returns an iterator to the first element of the range.

Ranges can overlap as long as result (i.e. one element after end) does not lie in the range [first, last). 

*/

#include <iostream>
#include <vector>

int main()
{
    int myints[] = {10, 20, 30};
    std::vector<int> myvector(3);

    std::copy(myints, myints + 3, myvector.begin()); // note + 3 since [first, last)

    std::cout << "myvector contains:";
    for (int i = 0; i < myvector.size(); i++)
    {
        std::cout << " " << myvector[i];
    } // 10 20 30
    std::cout << std::endl;

    std::cout << "<<<<<<<<<<<<<<<<<<<<<" << std::endl;

    std::vector<int> myvector2 = {10, 20, 30, 40};
    myvector2.resize(myvector2.size() + 3);

    std::copy_backward(myvector2.begin(), myvector2.begin() + 4, myvector2.end());

    std::cout << "myvector contains:";
    for (int i = 0; i < myvector2.size(); i++)
    {
        std::cout << " " << myvector2[i];
    } // 10 20 30 10 20 30 40
    std::cout << std::endl;

    return 0;
}