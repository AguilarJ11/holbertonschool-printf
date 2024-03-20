  
# *Some Information About Our Printf*

-------------------------------------
-------------------------------------

## To do our printf we use functions and structs

>The *function* is a code that take in parameters and with these return a result due to these function that the functions have we created and used for takes and return the result dependig of the case,
A struct is *something* that have a group or a list of variables we use to control the cases.
>

-------------------------------------
-------------------------------------

## The functions that we use are:

get_char: Get char recive a variable tip va_list, the macro va_arg search in the variadic function and save in args, args save the information of the prox parameter that function send  later with write output the character of the variable arg and will return the numbrers of characters.

get_string: Get string is similar to get char with the difference that in these will print a string and return the numbers

grt_decimal: Grt_decimal in these function the first that we do is to a condicional if the number is 0 return 0, if not 0 we calculete and print the number and number of characters using write.

get_int: Get int is the same of get decimal, we used because was more organizated in the moment for us.

-------------------------------------
-------------------------------------

## The folders that we use and what have inside one of each:

_printf.c: Here is where we call al the next folder depending what we want to do is like the directory of the orchestra.

arg_functions.c: Here we create the functions that we will use before.

get_func.c: In these folder we use the struct to select the case and use the function.

main.c: With these folder we pass some cases for test.

main.h: In these folder we put the prototype that we used.



