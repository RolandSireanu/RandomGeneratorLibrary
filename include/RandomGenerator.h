#include <iostream>
#include <random>
#include <type_traits>
#include <algorithm>



namespace RandNrGen
{   
    template<typename T>
    using distribution_t = std::conditional_t <std::is_floating_point<T>::value, 
            std::uniform_real_distribution<T>, 
            std::conditional_t<std::is_integral<T>::value, 
                std::uniform_int_distribution<T>, 
                void>>;

    namespace 
    {
        std::random_device rd;
        std::mt19937 gen(rd());
    };

    template<typename T>
    T genNrInInterval(T low, T high)
    {
        distribution_t<T> g(low, high);
        return g(gen);
    }

    template<typename T>
    auto getGen(T low, T high)
    {
        return [low, high]() {
             distribution_t<T> dist(low, high);
             return dist(gen);
        };
    }

    template<typename Container>
    void shuffleContainer(Container& cont)
    {        
        shuffle (cont.begin(), cont.end(), rd);
    }
};