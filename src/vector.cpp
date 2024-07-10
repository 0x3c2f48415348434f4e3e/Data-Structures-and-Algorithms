//learning about the vector template
#include<vector>
#include<iostream>

int main(){
    //initialise -There are several ways to intialise a vector
    std::vector<int> firstVector({1,2,3,4,5}); //list initalise
    std::vector<int> secondVector(5); //inialse all element with 0
    std::vector<int> thirdVector(firstVector); //copy

    for(auto i = firstVector.begin(); i != firstVector.end(); i++){
        std::cout<<"Vector first"<<std::endl;
        std::cout << *i<<std::endl;
    }

    for(auto i = secondVector.begin(); i != secondVector.end(); i++){
        std::cout<<"Vector second"<<std::endl;
        std::cout << *i<<std::endl;
    }

    for(auto i = thirdVector.begin(); i != thirdVector.end(); i++){
        std::cout<<"Vector third"<<std::endl;
        std::cout << *i<<std::endl;
    }

    std::cout <<"Size of Vector firstVector is: " << firstVector.size() <<std::endl;
    std::cout <<"Size of Vector secondVector is: " << secondVector.size() <<std::endl;
    std::cout <<"Size of vector thirdVector is: " <<thirdVector.size() <<std::endl;

    //check whether it is empty
    if(secondVector.empty()){
        std::cout<<"Third Vector is empty"<<std::endl;
    }
    else{
        std::cout<<"Third Vector is not empty"<<std::endl;
    }

    //add data to secondVector
    int counter = 0;
    for(auto i=secondVector.begin(); i != secondVector.end(); i++){
        *i = counter;
        counter++;
    }

    std::cout<<"Printing out the second Vector"<<std::endl;
    for(auto i = secondVector.begin(); i != secondVector.end(); i++){
        std::cout << *i << std::endl;
    }

    //acccessing values
    std::cout << secondVector[0]<<std::endl;
    std::cout << secondVector.at(2)<<std::endl;
    std::cout << secondVector.front()<<std::endl;
    std::cout << secondVector.back()<<std::endl;

    //pointer
    int *ptr = secondVector.data();
    std::cout<<*ptr<<std::endl;

}