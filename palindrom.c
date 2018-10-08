
//Programing Language- C language
//Why?-C language is procedural oriented language and it has top down approch, it is very fast to execute.
//for simple execution or sequencial execution c language is very preferable.
//Also it fastly interpret the code (high level to machine level).

//C language is base of all language and the compiler for most of the language are written in c language
//If we don't have to work on any object or classes so its very efficient to use c language.

//Problem Statement-Write a code to print wheather the given number is palindrom or not.

#include<stdio.h>

int main(){

int number,reminder,reverse=0;

printf("Enter any number ::");

scanf("%d",&number);
int temp=number;
while(temp>0){

reminder=temp % 10;
reverse=(reverse*10)+reminder;
temp=temp/10;

}

if(reverse==number){
printf("The number is palindrom");
}else{
printf("The number is not palindrom");
}

return 0;

}

/*
#include<stdio.h>    	
		-stdio is a header file used for standard input/output and to include it in
		our code we use #include pre-processor directive.  

int main(){
		-main() is the main function of the programme or we can say it is the the function 
		from which the c compiler starts its execution and ‘int’ is  the return type means this  		function will return a integer value so ‘int’ is stands for integer and the main function 		is integer type function.

int number,reminder,reverse=0;
		-declaration of three variable of type int. For variable ‘reverse’ the default value is 		assign as 0.Variable ‘number’ is used for storing the value enterd by the user.
		Variable ‘reminder’ is used to store the reminder value and Variable ‘reverse’ is used
		to store the reverse value.

printf("Enter any number ::");
		-printf is the pre-defined function of stdio.h it is used to print anything to console.
		Here it will print the message “Enter any number ::”.

scanf("%d",&number);
		-scanf is the pre-defined function of stdio.h it is used to scan or get value from 			console.Here it is used to scan the value for variable ‘number’.
		%d is the format specifier used for integer type values.
		& is used to refer the integer ‘number’ and it will assign the value to the variable.
int temp=number;
		-temp is the interger type variable used for storing the value from variable ‘number’.

while(temp>0){	(iterative statement)	
		-while loop is used to execute any block of code multiple times.It will execute 		according to a certain condition is true and if the condition is false the execution 			stops.Here the condition is “temp>0” mean when the value of variable ‘temp’ is 			greater then zero then the while loop will keep on executing. Also why i use while 		loop instead of for loop because here i don’t know the number of execution, means 		how many times i want to execute the loop.

*reminder=temp % 10;
*reverse=(reverse*10)+reminder;    * These three lines are the bussiness logic for our programme.   
*temp=temp/10;

}

if(reverse==number){		-if/else is a conditional statement which checks a particular condition
				and if that condition is true then it will execute the further code. 					suppose if(reverse==number) the values of variable ‘reverse’ and 					‘number’ are equal after execution of bussiness logic then it suppose 				to print “The number is palindrom”. 
printf("The number is palindrom");
}else{
				-if the above ‘if’ condition is not satisfied then is will execute the else 				block of code so here it will print “The number is not palindrom”.
printf("The number is not palindrom");
}

return 0;
				-return 0 is the statement is used for returning the 0 value because the main function is integer type function and its return type is ‘int’.

}


Execution :-
->Suppose user enter the valuse of number as 1234.
->scan number = 1234


->temp = number					temp=1234

->while(temp>0)					1234>0 condition is satisfied

==>iteration 1
	
->reminder=temp%10				reminder=1234%10
						reminder=4

-> reverse=(reverse*10)+reminder		reverse=(0*10)+4
						reverse=4

->temp=temp/10					temp=1234/10
						temp=123
--------------------------------------------------------------------------------------------
->while(temp>0)					123>0 condition is satisfied

==>iteration 2

->reminder=temp%10				reminder=123%10
						reminder=3

-> reverse=(reverse*10)+reminder		reverse=(4*10)+3
						reverse=43

->temp=temp/10					temp=123/10
						temp=12
---------------------------------------------------------------------------------------------
->while(temp>0)					12>0 condition is satisfied

==>iteration 3

->reminder=temp%10				reminder=12%10
						reminder=2

-> reverse=(reverse*10)+reminder		reverse=(43*10)+2
						reverse=432

->temp=temp/10					temp=12/10
						temp=1
---------------------------------------------------------------------------------------------
->while(temp>0)					1>0 condition is satisfied

==>iteration 4

->reminder=temp%10				reminder=1%10
						reminder=1

-> reverse=(reverse*10)+reminder		reverse=(432*10)+1
						reverse=4321

->temp=temp/10					temp=1/10
						temp=0
---------------------------------------------------------------------------------------------
->while(temp>0)					0>0 condition is  not satisfied

As the condition is not satisfied the loop stops execution and compiler come out of loop and continue on execution.

->if(reverse==number){			number=1234
						reverse=4321
						condition is false executes else part

->print “The number is not palindrom”

*/
