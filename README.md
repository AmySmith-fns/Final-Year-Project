# Final-Year-Project

The tree_hugger files are the sets of code used to generate the decision tree models. The attack type at the end of the name is the attack which was left out of the training set.
The tree_hugger_blackhole file contains the final model which was converted to C99 and launched on a microcontroller. 
It contains the code which was used to build the model as well as convert it to C99.

Fail1 contains the microcontroller C99 code which uses the functions generated in tree_hugger_blackholes to classify 40 datapoints. This was the code used to measure the size of the compiled code as well as the space that it uses on the stack during execution. It was also used to verify that the converted code works on the microcontroller, which is why there are delays built into the code.

Getting_up_to_speed contains the microcontroller C99 code without delays which was used to measure the execution time of the classification of 40 datapoints.

