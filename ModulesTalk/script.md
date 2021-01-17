# Script for live demo

## Open numbers.ixx

* In MSBuild a module interface file has to have the ending .ixx
* We declare a module using `export module number`
* A macro defined in a module is only visable and usable within it
* The function `get_magic_number` is exported and can be used by consumers of the module
* its declaration is in the module interface its definition can be somewhere else
* The function `helper` is only visable and usable within the module since it is not exported

## Open numbers.cpp

* With `module numbers;` we tell the compiler that this cpp file is part of the implementation of the module numbers
* it containts the defintion of the `get_magic_number` function

## Open more_numbers.ixx

* In this module we have functions `get_magic_number` and `helper` which are not exported and also a macro named `MAGIC`
* This is not a problem if both modules (`numbers` and `more_numbers`) are used along side each other in a program
* Macros are in general not visable outside of the module
* Only exported functions can lead to ODR violations when two or more modules are imported in a program