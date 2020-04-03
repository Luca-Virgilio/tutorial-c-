# tutorial-c++

My first tutorial with c++.
## Summary course:programmazione e ammistrazione di sistema
### 01- Introduction
C++ is a compiling language. In c++ exist two different type of file: 
- .h where you declare method, class and operator.
- .cpp  where you implement method, class and operator

To compile a file and create an executable, use  
```
g++ -g file.cpp -o fileName
```
If you want use some funcions of a file or some in a library, you must import its, using:
```
#include <libraryName> //or
#include "fileName.h"
```  

Multiple definition of a file or a library can generate errors. Thus before declare something in a .h file, you should use the sintax
```
#ifndef fileName
#define fileName
.
. 
.
#endif
```



### 02- Data type
### 03-
### 04- Class
### 05- Operator
