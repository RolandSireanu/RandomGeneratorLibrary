#include <include/RandomGenerator.h>
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
    std::vector<int> v(10);
    std::generate(v.begin(), v.end(), RandNrGen::getGen(10,20));
    printContainer(v);
}


//Shuffle the elements of an array
void sample_shuffleVector()
{

}


int main()
{


    

    RandNrGen::shuffleContainer(v);
    printContainer(v);


    return 0;    
}