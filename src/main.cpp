#include <iostream>

/**
 * @brief Main function
 * @details The main function is called at program startup after 
 * 	 		initialization of the non-local objects with static 
 * 	 		storage duration............
 * 
 * @see http://en.cppreference.com/w/cpp/language/main_function
 * @see http://www.cplusplus.com/doc/tutorial/
 * 
 * @param argc Non-negative value representing the number of arguments 
 * 			   passed to the program from the environment in which the 
 * 			   program is run. 
 * 			   
 * @param argv Pointer to the first element of an array of pointers 
 * 			   to null-terminated multibyte strings that represent 
 * 			   the arguments passed to the program from the execution
 * 			   environment (argv[0] through argv[argc-1]). The value
 * 			   of argv[argc] is guaranteed to be ​0​.
 * 
 * @return  Indicate how the program exited, normal exit is generally 
 * 		    represented by a 0 
 */
int main(int argc, char* argv[])
{
    std::cout << "Hello world!";

    return 0;
}