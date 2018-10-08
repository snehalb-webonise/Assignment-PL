// Language : C++
/* Why 	    :C++ is object-oriented programming language. C++ support feature of OOP like encapsulation, polymorphism, and inheritance.
	     as campare with c langauge c++ is direct descendent of c with more added features.C++ is used for server
             side applications,networking,gamimg and Desktop applications.
*/

#include<iostream>   								//line 1			
using namespace std;							        //line 2

int main()									//line 3
{
	int n,key,arr[20];							//line 4
	cout<<"Enter Total number of elements :\n";				//line 5
	cin>> n;								//line 6
	for(int i =0;i<n;i++)							//line 7
	{
	  cout<<"Enter "<<i<<"th Element :";					//line 8
	  cin>>arr[i];								//line 9
	}
	cout<<"Enter the number to find : \n";					//line 10
	cin>>key;								//line 11
	int low=0 ,high =n-1;							//line 12
	int mid =(low+high)/2;							//line 13
	while(low <= high)							//line 14
	{
		if(arr[mid]<key)						//line 15
		{
			low = mid+1;						//line 16
		}
		else if(arr[mid]> key)						//line 17
		{
			high = mid-1;						//line 18
		}
		else if(arr[mid] == key) 					//line 19
		{
			cout<<key<<" found at location "<<mid+1<<"\n"; 		//line 20
			break;							//line 21
		}
		mid = (low+high)/2;						//line 22
	}
	if(low > high)								//line 23
	{
		cout <<"Element not Present\n";					//line 24
	}
	
return 0;									//line 25
}

/*
//////////////////////////////////////////////////
OUTPUT
webonise@webonise-desktop:~$ g++ BinarySearch.cpp 
webonise@webonise-desktop:~$ ./a.out
Enter Total number of elements :
3
Enter 0th Element :5
Enter 1th Element :7
Enter 2th Element :9
Enter the number to find : 
5
5 found at location 1


webonise@webonise-desktop:~$ ./a.out
Enter Total number of elements :
2
Enter 0th Element :9
Enter 1th Element :7
Enter the number to find : 
6
Element not Present
///////////////////////////////////////////////////
**********************************************************************************************************
line 1: #include<iostream> 

*In this Line "#include" is known as a preprocessor directive.
#include is used for the loading header files in the program.
*#include<headerFile Name> specifies the particular header file is to be included,
because of that complier can access the certain functions like cin,cout.
*<iostream> contains the definition of basic_iostream class template, 
which implements formatted input and output, and includes <ios>, <istream> and <ostream>.
*"iostream" header file allow us to access standard input and 
standard output functions for getting input from user and display output on screen.
**********************************************************************************************************
line 2:using namespace std;

*std is an abbreviation of standard. std is the standard namespace.
cout, cin and a lot of other things are defined in it.
you can also call these functions using std::cout , std::cin etc.
*The keyword using technically means, use this whenever you can. 
This refers, in this case, to the std namespace.

**********************************************************************************************************
line 3:int main(){}

*In every C/C++ program, execution of program start with the main() function. 
the main is a only function in the program that called automatically.
Other functions that are present in the program are called from main function.
*The curly brackets are used to show the scope of that particular fuction. 

**********************************************************************************************************
line 4 : int n,key,arr[20]; 

*In c++ it is not necessary to declare varible at the strating of program we can declare the any where in the program,
but we require to declare every variable before we used it.
*Variable decalartion syntax in c++ :
	datatype variable_name

In line 4 we declare 2 variables and one array with size 20.
*Memory allocation to the declared variables :
Size of char:1 byte
Size of int: 4 bytes
Size of float:4 bytes
Size of double:8 bytes
*Memory allocated to arr[20] is = 20*4 (4 because array is type of int)
**********************************************************************************************************
line 5 : cout<<"Enter Total number of elements :\n";

*In C++, the operator << has an expanded role. it is still used as a left shift operator, 
but when it is used with cout it is also an output operator.
*cout is predefined object of an intance of ostream class.
*The cout object is said to be "linked to" the standard output device like monitor. 
*we can use cout and the << to output any of the built-in data types, as well as strings of characters.
*In the line 5 we display message for entering the total number of elements in the array.
*\n is used for going to new line.
**********************************************************************************************************
line 6 :cin>>n;

*In C++, the operator >> has an expanded role. it is still used as a right shift operator, 
but when it is used with cin it is also an input operator.
*cin is predefined object of an intance of istream class.
*The cin object is said to be "linked to" the standard input device like keyboard. 
*we can use cin and the >> to input a variable of any of the basic data types plus strings.
**********************************************************************************************************
line 7 : for(int i =0;i<n;i++){}

*In C/C++ and other programming languages loop statements allow a set of instructions to be executed 
repeatedly until we reach to the certain caondition.
*General syntax of for loop :

for(initialization; condition; increment)
{
 statement 1;
 statement 2;
 statement n;
}

*In line 7 ,initialization of for loop is i=0 i.e loop start from 0th iteration and repeat up to
 condtion is reached in our case
 let assume n=3 the loop repeat itself for 2 times. because it start from 0 in initalization, i.e 0 ,1, 2.
**********************************************************************************************************
line 9 : cin>>arr[i];

*What is an Array ?
An array is a collection of variables of the same type that are referred to through a common name.
A specific element in an array is accessed by an index.

*In our program we use array for storing the elements provided by user as input.
Array is contiguous memory locations ,that stores elements sequentially.

*if we store 8 elements in an array ,the following is repreation of memeory:
arr[0] - 4
arr[1] - 7
arr[2] - 8
arr[3] - 10
arr[4] - 12
arr[5] - 14
arr[6] - 16
arr[7] - 18
**********************************************************************************************************
line 10 :cout<<"Enter the number to find : \n";

*In line 10 we used cout<< for displaying message/output on screen. 
*In lin 10 user enter the key value that needs to be find from array for input elements. 
*\n move the screen poniter to the new line.
**********************************************************************************************************
line 11: cin>>key;

*In line 10 we get the input from user i.e key value that needs to be search in array for input elements. 
**********************************************************************************************************
line 12 :int low=0 ,high =n-1;

*In line 12 we declare the 2 int type variablses.
*The low variable store the lowest index of array that why we intialized it with 0,
 because lowest index or array index always start from 0.
*The high variable stores the last array element index. in our case the last array index is n-1.
**********************************************************************************************************
line 13 :int mid =(low+high)/2;

*In line 13 we declare mid variable that points to the middle index of array.
*for binary search we need to calculate middle index of array .
*if key element is smaller than mid element then we search key in left part of array i.e from low index to mid-1 index.
*if key element is larger than mid element then we search key in right part of array i.e from mid index to high index.
*At the time of decalration we initalized 
low =0 
high =5-1  (i.e n-1 and n=5)
then 
mid =(0+4)/2
mid = 2
********************************************************************************************************** 
line 14:while(low <= high)

*Syntax of while loop :
	while(condition)
	{
	 statement 1;
	 statement N;
	}

*In the while loop condition is any expression, and true is any nonzero value.
*where statement is either an empty statement, a single statement, or a block of statements.
*In our program we use while loop for exeuting the group of instructions for 
checking the key element is present in list of elemnts or not.
*we use loop because we campare almost every element in the array with the key element.
*In our case i.e while(low <= high) 
*we camparing array low and high index if low index is smaller that 
high index then only we can go inside the loop otherwise we get outof the loop. 
**********************************************************************************************************	
line 15:  if(arr[mid]<key){}

*The general form of the if statement is
          if (expression)
	    {
		 statements;
	     }
	  else { statements;}

*In C/C++ and other programming langauges if-else statement are used for checking the condtions, 
if condition is true then if block is executed otherwise else block is executed.
*In our case we are checking if arr[mid] i.e if mid=2 then our arr[2] =4
and key element is 6 then if condition giving false as a output that time we go for else block.   
**********************************************************************************************************
line 16:low = mid+1;

*This line is belongs inside of if statement.If if statement is true then only this instructions are executed.
*This line is updating the low value with new value that is mid+1.
**********************************************************************************************************	
line 17:else if(arr[mid]> key)

*when if condition in giving false as a ouput then only program go inside the else block.
*we can't give any condtion to else block because condition is checked at corrsponding if block of it.
we can use nested if-else block for checking more than one condtion. 
*In program this line is else block starting for above if block and we 
checking another condition that arr[mid] is greater than key or not. 
**********************************************************************************************************
line 18:high = mid-1;

*If line 17 if statement is true then only we execute this statement.
*In this line we updating value of high with new calculated value of high.
**********************************************************************************************************		
line 19:else if(arr[mid] == key) 

*In this line again we used the concept of nested if-else.in this line we checking that is 
arr[mid] == key or not , if this gives true as in return then our key element and arr[mid] is same.
**********************************************************************************************************
line 20: cout<<key<<" found at location "<<mid+1<<"\n"; 

*This statement is executed only if key == arr[mid]
*This cout statement displays the key element with it's found loaction.
**********************************************************************************************************			
line 21:break;

*The break statement is C/C++'s jump statement.
*In our case we use break for breaking the loop and coming outside of loop. 
**********************************************************************************************************		
line 23:if(low > high)

*when the while loop condtion is returing the false value we jump on this line of instruction.
*This condtion is check whether low is greater than high or not.if this returns true that is element is not present in the array. 
**********************************************************************************************************	
line 24:cout <<"Element not Present\n";

*This statement is used to display a message to user that elemet is not present in the list.
**********************************************************************************************************
line 25 : return 0;
* C or C++ main function has to return a value because it is declared as "int main"
which means "main function should return integer data type"
*if main is declared like "void main", then there's no need of return 0.
**********************************************************************************************************
*/





