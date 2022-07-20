#include "RandomGenerator.h"
#include <vector>
#include <array>


//Helper function
template<typename Container>
void printContainer(const Container& arg)
{
    for(const auto& element: arg)
        std::cout << element << " ";
    std::cout << std::endl;
}

//Generate a random number in the specified interval.
void sample_generateNumber()
{
    std::cout << RandNrGen::genNrInInterval(0, 10) << std::endl;
    std::cout << RandNrGen::genNrInInterval(0.0, 1.0) << std::endl;
}

//Initialize vector with random values
void sample_initVector()
{
    std::vector<int> vec(10);
    std::generate(vec.begin(), vec.end(), RandNrGen::getGen(10,20));
    printContainer(vec);
}


//Shuffle the elements of an array
void sample_shuffleVector()
{
    std::vector<int> vec {9, 8, 7 ,6 ,5};
    RandNrGen::shuffleContainer(vec);
    printContainer(vec);

}


int main()
{
    sample_generateNumber();
    sample_initVector();
    sample_shuffleVector();

    return 0;    
}