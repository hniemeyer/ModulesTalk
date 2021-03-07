# Script for live demo

* Switch to solution view
* Switch c++ standard to /std:c++latest to activate modules (project -> properties -> C/C++ -> language)
* Show how to add new module with IDE
* compile and show what is the outcome

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
* there is no include neccessary to get access to the function `helper` they are just part of the same module

## Open more_numbers.ixx

* In this module we have functions `get_magic_number` and `helper` which are not exported and also a macro named `MAGIC`
* This is not a problem if both modules (`numbers` and `more_numbers`) are used along side each other in a program because they are not exported
* Show what happens when they are exported, show fix with inline namespace
* Macros are in general not visable outside of the module
* Only exported functions can lead to ODR violations when two or more modules are imported in a program

## Open printer.ixx

* module; indicates an area where we want to use the global module (fragment)
* only preprocessor allowed 
* we use it to include fmt
* only used entities from fmt go into the named module rest will be discarded 
* In this example we also want to use concepts library from the standard library
* We dont include them but import them
* But the standard library is not modularized yet 
* These are header units not modules
* speed up overall build time by creating similar metadata as done for modules
* works for well-behaved headers like the standard library (and also for fmt -> lets test)
* All items declared in the header are made available
* macro definitions and other preprocessor states are still leaked to the consumers of the header units
* no real isolation
* we can import another module like more_numbers here when we want to use it
* modules work well with templates and concepts  but `export` needs to be the first keyword in the declaration

## Open ModulesTalk.cpp

* Order of imports does not matter
* trying to use not exported functions or macro definitions will not work
* Downside of this design: We dont know which function comes from which module
* there a no implicit namespaces but we can export namespaces as well

## Stuff to try out

* introducte namespace in more_numbers or printer (first without exporting the namespace than with)
* uncomment the ill-formed, no diagnostic required code (break_my_code function exists twice but this is not ODR violation but NDR, 
compiler is not required to halt although the program is malformed)
* switch import order of numbers and more_numbers will yield different return values
* export a simple struct (like Point2d)