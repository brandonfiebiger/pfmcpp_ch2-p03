#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
 Declarations Tasks
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
int
char
bool 
double
float 
void
unsigned int 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int amount = 10;
    int num = 11;
    int score = 40;

    char letterA = 'a';
    char letterB = 'b';
    char letterC = 'c';

    bool trueValue = true;
    bool falseValue = false;
    bool trueValue2 = !false;

    double percentage = 1.0003343;
    double doubler = 1.843543;
    double time = 1.34342432424253;

    float perrysNumber = 343.234f;
    float matkatsNumber = 437892.432532f;
    float brandonsNumber = 3423242.4324234234f;

    unsigned int fifty = 50;
    unsigned int forty = 40;
    unsigned int sixty = 60;

    
    
    ignoreUnused(number, 
                 num, 
                 score, 
                 amount,
                 letterA,
                 letterB,
                 letterC,
                 trueValue,
                 falseValue,
                 trueValue2,
                 percentage,
                 doubler,
                 time,
                 perrysNumber,
                 matkatsNumber,
                 brandonsNumber,
                 fifty,
                 forty,
                 sixty); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

bool isTrue(int num1, int num2)
{
  ignoreUnused(num1, num2); 
  return true;
}

/*
 2)
 */

 void runFast(int speed, int duration)
 {
   ignoreUnused(speed, duration);
 }

/*
 3)
 */

 int addTwo(int numToAdd) 
 {
   return numToAdd + 2;
 }

/*
 4)
 */

 int addFiftyAndMultiplyByFive(int num)
 {
   return num + 50 * 5;
 }

/*
 5)
 */

 void takeDogOnWalk(int dog, int speed)
 {
   ignoreUnused(dog, speed);
 }

/*
 6)
 */

 float divideNumberByAnother(float num1, float num2)  
 {
   return num1/num2;
 }

/*
 7)
 */

 void goSwimming(int swimmingPool, double waterTemp)
 {
   ignoreUnused(swimmingPool, waterTemp);
 }

/*
 8)
 */

 void callMyFriend(int friendsPhoneNumber, int duration)
 {
   ignoreUnused(friendsPhoneNumber, duration);
 }

/*
 9)
 */

 void rideHorse(int horse, double color) 
 {
   ignoreUnused(horse, color);
 }

/*
 10)
 */

 void eatApple(char appleType, int amount)
 {
   ignoreUnused(appleType, amount);
 }

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    isTrue(2, 3);
    
    //2)
    runFast(50, 60);

    //3)
    addTwo(59); 
    
    //4)
    addFiftyAndMultiplyByFive(50);
    
    //5)
    takeDogOnWalk(30, 50);
    
    //6)
    divideNumberByAnother(14.3432f, 50.34234f);
    
    //7)
    goSwimming(1, 3.42342);
    
    //8)
    callMyFriend(4565184, 1);
    
    //9)
    rideHorse(1, 2432.432423);
    
    //10)
    eatApple('a', 44);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}


