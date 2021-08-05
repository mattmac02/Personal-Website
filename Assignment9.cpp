#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

//Implement the data structure here
class ids {
    int top=0;
    int stackArray[];

public:

//If the id field is empty then the top = 0 but if it is not empty it doesn't equal 0
    bool isEmpty(){
        if (top == 0){
            return true;
        }
        return false;
        }

//Assigns a value into the stackArray for each value of top as top is increasing each time a value is added
    void push_back(int aspect)
    {
        top++;
        stackArray[top] = aspect;
    }

     int pop_back(){
        if(isEmpty()){
            cout << "underflow" << endl;
        }else{
            top--;
            int aspect = stackArray[top];
            return aspect;
        }
        return -1;
    } 
};

int main(int argc, const char * argv[])
{

//Declaring the number of HR operations
    int numberOfHROperations;

//setting data structure reference
    ids ids;

    //Ask for the number of HR operations and read
    printf("Enter the number of HR operations:\n");
    scanf("%d", &numberOfHROperations);    


    //Ask for the operations and IDs
    printf("Input the operations and IDs:\n");
    
    //Read the operations and IDs from stdin
    for (int i = 0; i < numberOfHROperations; i++)
    {
        char operation;
        int id;

        scanf(" %c%d", &operation, &id);

    //calling values
    ids.push_back(id);
    
    //puts the id entered by the user in if it is a + operation, then checks to see if the variables are equal or if the array is empty
               switch (operation)
               {
            case '+':
                ids.push_back(id);
                break;
            case '-':
                if (ids.isEmpty() || ids.pop_back() != id)
                { 
                    cout << "FAIL" << endl;
                    return 0;
                }
                break;
                default:
                break;
                }
        if (i == numberOfHROperations-1)
        {
            cout << "PASS" << endl;
        }
    }
 return 0;
}
 
   