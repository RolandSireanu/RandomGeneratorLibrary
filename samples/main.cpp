#include <vector>
#include <array>
#include <iostream>
#include "BetterRand.h"

//Helper function
template<typename Container>
void printContainer(const Container& arg)
{
    for(const auto& element: arg)
        std::cout << element << " ";
    std::cout << std::endl;
}

// Generate a random number in the specified interval.
void sample_generateNumber()
{
    std::cout << "======================================================================= " << std::endl;
    //Generate number in 0-10 interval using the uniform distrubution
    std::cout << "Uniform distribution 0-10: " << BetterRand::genNrInInterval(0, 10) << std::endl;
    //Generate number in 0-10 interval using the uniform distrubution
    std::cout << "Uniform distribution 0.0-1.0: " << BetterRand::genNrInInterval(0.0, 1.0) << std::endl;
    //Generate a random boolean value using the bernoulli distribution
    std::cout << "Bernoulli distribution with probability 0.5: " << std::boolalpha << BetterRand::genNrInInterval<BetterRand::BERNOULI>(0.5) << std::endl;
    std::cout << "Poisson distrubution with mean value 0.5: " << BetterRand::genNrInInterval<BetterRand::POISSON>(0.5) << std::endl;
    std::cout << "======================================================================= " << std::endl;
}

//Initialize vector with random values
void sample_initVector()
{
    std::cout << "======================================================================= " << std::endl;
    std::vector<int> vec(10);
    //Initialize vector with values in 10-20 interval using the uniform distribution
    std::generate(vec.begin(), vec.end(), BetterRand::getGen(10,20));
    std::cout << "Vector initialized with random values: " << std::endl; 
    printContainer(vec);
    std::cout << "======================================================================= " << std::endl;
}

//Shuffle the elements of an array
void sample_shuffleVector()
{
    std::cout << "======================================================================= " << std::endl;
    std::cout << "Original vector values: ";
    std::vector<int> vec {9, 8, 7 ,6 ,5};
    printContainer(vec);
    BetterRand::shuffleContainer(vec);
    std::cout << "Vector after shuffle process: ";
    printContainer(vec);
    std::cout << "======================================================================= " << std::endl;
    std::cout << std::endl;
}

int main()
{
    sample_generateNumber();
    sample_initVector();
    sample_shuffleVector();

    return 0;    
} 