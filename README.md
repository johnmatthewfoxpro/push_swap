_This project has been created as part of the 42 curriculum by jfox_
# push_swap
A complete program designed to sort integers. The first heavy project for School 42.

## __DESCRIPTION__
Push_swap is a program in C that calculates and displays the shortest sequence of
Push_swap instructions needed to sort the given integers.
In short, it sorts data and shows the processes it uses to sort that data.

## __INSTRUCTIONS__
Push_swap works automatically by executing the program with a set of integer values in the command line. All that is required is to use 'make' in the root directory. 
Like most projects using makefiles the rules available to you are make, clean, fclean and re. To build the project, clean object files, clean libraries and executables and rebuild the project after cleaning everything, respectively.
Once you have used make you will be left with the push_swap executable, you can run this with a simple line of integers, such as:  ./push_swap "1 5 2 4 3 -10"
Multiple strings or combinations of strings and single integers are acceptable,
any number from INT_MIN to INT_MAX is valid.
Non-numerical characters, repeats or badly signed integers will return an error.
Note, if the sequence of intergers is already in order, Push_swap will not do anything and return to the command line.
Push swap works by creating 2 virtual stacks, the integers you provide are normalised then stored in stack A, the program then swaps the integers between stack A and stack B sorting them as it goes. 
It prints each operation as it completes, meaning the result of executing the program is a long list of instructions. 

The instructions are defined below. 
__sa__ Swap a. Swaps the top 2 numbers in stack a. 
__sb__ Swap b. Swaps the top 2 numbers in stack b.
__ss__ Swaps both stack a and stack b.
__pa__ Push a. Push the number at the top of stack b to the top of stack a. All numbers in both stacks move up or down 1 place accordingly.
__pb__ Push b. Push the number at the top of stack a to the top of stack b. All numbers in both stacks move up or down 1 place accordingly.
__ra__ Rotate a. Rotates stack a, record at the top moves to the bottom and all other records move up by 1. 
__rb__ Rotate b. Rotates stack b, record at the top moves to the bottom and all other records move up by 1.
__rr__ Rotate a and b together. 
__rra__ Reverse Rotate a. Rotates stack a, record at the bottom moves to the top and all other records move down by 1. 
__rrb__ Reverse Rotate b. Rotates stack b, record at the bottom moves to the top and all other records move down by 1. 
__rrr__ Reverse Rotate a and b together.

## __RESOURCES__
AI, specifically chat gpt, was used to get a better understanding of my makefile intergrations. I used it to help write a makefile
that could call another makefile, allowing me to impliment libft into my pushswap program.
I also asked AI to better explain K distribution sort to me.
More about makefile application [here](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)
Explanation of Algorithums [here](https://en.wikipedia.org/wiki/Analysis_of_algorithms)
A visualizer for push_swap [here](https://push-swap42-visualizer.vercel.app/)
Understanding K or Butterfly distribution [here](https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376)
