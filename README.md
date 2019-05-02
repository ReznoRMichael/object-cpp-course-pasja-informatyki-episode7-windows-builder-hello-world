# Learning Object C++ - Polymorphism, Virtual Functions
> Training course - Pasja Informatyki, Object C++ course, episode 6 ( [Link](https://www.youtube.com/watch?v=9hGPe6BnTY4) )

## General info
Program has an abstract class Ksztalt. Inside it is a virtual member function `oblicz_pole()` which calculates the surface area of whatever object the pointer currently points to. The two other classes are Kolo and Kwadrat - both of them inherit from the abstract class Ksztalt. One Kolo and one Kwadrat objects are created and initialized with arguments. Then a Ksztalt pointer is created and pointed to the objects and the function `oblicz_pole()` is used on both. An simple universal function is created which also simplifies the process.

## Technologies
* Object C++
* CodeBlocks (IDE)
* GNU GCC Compiler (minGW)

## Contact
[ReznoRMichael](https://github.com/ReznoRMichael)