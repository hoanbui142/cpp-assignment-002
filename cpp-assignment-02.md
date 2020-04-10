# C++ Assignment 02

## C++ Project structure

```
cpp-assignment02
|- CMakeLists.txt
|- include
|  |- lib1
|  |  |- groupA.h
|  |- classes
|  |  |- classes.h
|- src
|  |- main.cpp
|  |- groupA
|  |  |- groupA-file1.cpp
|  |  |- groupA-file2.cpp
|  |  |- groupA-internal.h
|  |- DogClass
|     |- DogClass.h
|     |- DogClass.cpp
```

## Requirements

| ID  | Description                                                                                              |
| --- | -------------------------------------------------------------------------------------------------------- |
| 1   | `main` function is located in `main.cpp`                                                                 |
| 2   | `main` function call `doTaskA` function provided in `groupA-file1.cpp`                                   |
| 3   | `doTaskA` function print out 3 lines: **"doTaskA 1"** -> **"doTaskA 3"** using loop                      |
|     | and then call another function `doSubTaskA` in `groupA-file2.cpp`                                        |
| 4   | `doSubTaskA` function print out 5 lines: **"doSubTaskA 1"** -> **"doSubTaskA 5"** using loop             |
| 5   | `main` function can not call `doSubTaskA` function (`doSubTaskA` in `main` should lead to compile error) |
| 6   | Build the project with VS Code (required plugins `C/C++`, `CMake` and `CMake Tools` installed)           |
| 7   | `DogClass.h` contains definition for a class named `Dog` with two methods `Bark` and `Run`               |
| 8   | `DogClass.cpp` contains implementation code for two method `Bark` and `Run`                              |
| 9   | Method `Bark` prints out `Barking`                                                                       |
| 10  | Method `Run` prints out `Running`                                                                        |
| 11  | `classes.h` contains `#include "DogClass/DogClass.h"`                                                    |
| 12  | `main` function creates an instance of class `Dog` and then calls the method `Bark` and `Run`            |
| 13  | `main.cpp` must not include `DogClass.h` to use the class `Dog`                                          |