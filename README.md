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
...
#endif
```
In a project, you must always include a main function in a file. The main function retun a int value (0 if the execution is completed without errors).
```
int main (int argc, char * argv []){
    ...
    return 0;
}
```
### 02- Data type
Primitive types are int, double, float, char and bool. Different types have differente size. Char type takes up a space of 1 byte (at least). you can use
```
sizeof(variable)
```
to discover the size of a variable. The function returns value compared to char size (ex: 4 is 4*char size). 

Pointers are data types that contain memory address of a specific varible. you declare a pointer like:
```
varibleType *name = &variable;
```
You can access to the value of a memory location saved in a poiter, usign a dereference operator *
```
int *p_int = &num;
cout << p_int  //memory address
cout << *p_int  //value of memory address
```  
You can also define a pointer of a pointer ecc...
You can declare an array explicity or implicity. You declare implicity an array if you define it. You can access any cell with the standard sintax. you can also declare an array of pointer. a pointer of an array is a pointer to the first cell of the array.
```
int nameArray[5];
int nameArray2[]= {1,2,3,4,5} // array definition
int nameArray[0]=1;

int *pointerArray[3];
```  
You can define a struct with different type of data type (primitive or composite). In the end of the curly braces you must insert a semicolon. You pay attention to the order of the varaibles in a struct. Different order can use more memory space.
```
struct Point {
    int x;
    int y;
}; // attention
``` 
If you declare a pointer to a struct, you can access the attribute with the operator ->. Otherwise, is you declare a variable as struct, you can access its attributes with the operator . .
```
Point p(0,1);
Point *p_pointer = &p;
p.x = 2;
p_pointer->x =30;
*p_pointer=p;
``` 
You can enumerate a varible using the enum type. Every possible enum's value has an implicit or explicit number value.
```
enum day {mon=1,tue,wen,thu,fri,sat,sun};
	// implicit,  tue = x+1, wen= x+2 ...
``` 
You can define new data types using the keyword typedef.
```
typedef unsigned long int uli;
```

Const is a keyoword to identify a variable or a pointer read-only. These are some examples:
```
const int a = 10; // constant variable
	
int b = 200;
const int *p_b = &b;	//pointer to constant variable
	
int c = 200;
int *const p_c = &c; //constant pointer
	
int e = 20;
const int *const p_e=&e; // constant pointer to constant variable
``` 

In c++ you can cast a varible in two different ways: implicit cast or explicit cast. Implicit cast is not recommended, because is more difficult to find it in the code. const cast is used for const variables.   
```
double a= 10.2;
	int c = 5;
	const int *p_a = &c;
	char *b;
	// semplice
	cout << "a=" << static_cast<int>(a) << endl;
	// se variabile costante
	cout << "p_a=" << const_cast<int *>(p_a) << endl;
	//
	b = reinterpret_cast<char *>(&a);
```
### 03- Functions
When you define a function, your can pass the inputs by value, by pointer and by reference. Passing a parameter by value means that it is created a copy of the value in an other memory cell. Because of that, functions by values are used only when the parameters are few and small. The local variables and the parameters are completly indipendently.   
Passing a parameter by pointer means that the function uses the exact cell passed in input but its pointer is a copy that as local scope in the function. To do that, the parameters must be an address (&var). In the function you need yo check is the pointer is NULL. Drawback of this strategy is that you haven't the object in the function but only a pointer, so you can dereference the pointer to access the data. Arrays can't passing as parameters. You use the pointer.  
Passing a parameter by reference means that the function can access exactly to the pointer and the data object in input. Every modification has executed into the function, has visible on the parameter. It's impossible distinguishing a function by value or by reference. You must see the function's definition/declaration.
```
int main()
{
    int a = 10;
    funValue(a);
    funPoint(&a);
    funRef(a);

    return 0;
}
void funValue(int n)
{
    n = 50;
    
}
void funPoint(int* n)
{
    // verify punct != null
    if(n != NULL){
    // dereference point
    *n = 50;
	}
}
void funRef(int &n)
{
    n = 70;
}
```   
If you use the keyword inline before the definition of a function, it will be sobstitute, at compile time, every time it will be called.  
You can define a varible outside of the methods, after the includes. It has global scope, and in every part of the code you can include it, using:
```
extern tipe var;
``` 
Data allocated in the stack have local visibility and local life's cycle. Static data have scope visibility and global life's cycle. All of these are deallocated automatically.  
Instead dynamic data are allocated in the heap, with the keyword new. The new operator return a pointer. All of these MUST be deallocated explicity, with the keyword delete. Is dangerous deallocated an object already deallocated, so you must set its pointer equals null (zero). Add [] is you want deallocate an array.
```
int *arr= new int[3];
delete [] arr;
arr = 0;
```   
Using namespace you can create a logic space that group varaibles and functions. Do not use it in .h file
### 04- Class
### 05- Operator
