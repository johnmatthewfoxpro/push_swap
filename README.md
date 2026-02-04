_This project has been created as part of the 42 curriculum by jfox_
# push_swap
A complete program designed to sort integers. The first heavy project for School 42.

## __DESCRIPTION__
Push_swap is a program in C that calculates and displays the shortest sequence of
Push_swap instructions needed to sort the given integers.
In short, it sorts data and shows the processes it uses to sort that data.

## __INSTRUCTIONS__
Push_swap works automatically by executing the program with a set of integer values in the command line. All that is required is to use 'make.'
Such as ./push_swap "1 5 2 4 3 -10"
Multiple strings or combinations of strings and single integers are acceptable,
any number from INT_MIN to INT_MAX is valid.
Non-numerical characters, repeats or badly signed integers will return an error.
Note, if the sequence of intergers is already in order, Push_swap will not do anything and return to the command line.

## __RESOURCES__
AI, specifically chat gpt, was used to get a better understanding of my makefile intergrations. I used it to help write a makefile
that could call another makefile, allowing me to impliment libft into my pushswap program.
I also asked AI to better explain K distribution sort to me.
More about makefile application [here](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)
Explanation of Algorithums [here](https://en.wikipedia.org/wiki/Analysis_of_algorithms)
A visualizer for push_swap [here](https://push-swap42-visualizer.vercel.app/)
Understanding K or Butterfly distribution [here](https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376)
