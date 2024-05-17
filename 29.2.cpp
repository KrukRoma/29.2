#include <iostream>
using namespace std;

////6
//class MyClass 
//{
//public:
//    MyClass() 
//    {
//        throw "Exception in constructor of MyClass";
//    }
//};
//
////7
//void handleAndRethrow() 
//{
//    try 
//    {
//        throw "Exception in handleAndRethrow function";
//    }
//    catch (const char* msg) 
//    {
//        cout << "Exception caught in handleAndRethrow function: " << msg << endl;
//        throw; 
//    }
//}

////8
//void myFunction(int num) throw(const char*, int) 
//{
//    if (num == 0) 
//    {
//        throw "Exception: Division by zero"; 
//    }
//    else if (num < 0) 
//    {
//        throw - 1; 
//    }
//    cout << "Result: " << 100 / num << endl;
//}

////9
//class OutOfRangeException 
//{
//public:
//    const char* what() const 
//    {
//        return "Value is out of range";
//    }
//};
//
//class RuntimeErrorException 
//{
//public:
//    const char* what() const 
//    {
//        return "Value is zero";
//    }
//};
//
//void myFunction(int value) 
//{
//    if (value < 0) 
//    {
//        throw OutOfRangeException();
//    }
//    else if (value == 0) 
//    {
//        throw RuntimeErrorException();
//    }
//    else 
//    {
//        cout << "Value: " << value << endl;
//    }
//}

//10
class CustomException 
{
private:
    int errorCode;
    string errorMessage;

public:
    CustomException(int code, const string& message) : errorCode(code), errorMessage(message) {}

    int getErrorCode() const 
    {
        return errorCode;
    }

    const string& getErrorMessage() const 
    {
        return errorMessage;
    }
};

void process(int value) 
{
    if (value < 0) 
    {
        throw CustomException(101, "Negative value is not allowed");
    }
    else if (value == 0) 
    {
        throw CustomException(102, "Zero value is not allowed");
    }
    else 
    {
        cout << "Value: " << value << endl;
    }
}

int main()
{
    ////6
    //try 
    //{
    //    MyClass obj;
    //}
    //catch (const char* msg) 
    //{
    //    cout << "Exception caught: " << msg << endl;
    //}

    ////7
    //try 
    //{
    //    handleAndRethrow();
    //}
    //catch (const char* msg) 
    //{
    //    cout << "Exception caught in main function: " << msg << endl;
    //}

    ////8
    //try 
    //{
    //    myFunction(5);
    //    myFunction(0);
    //    myFunction(-5);
    //}
    //catch (const char* msg) 
    //{
    //    cout << "Exception caught in main function: " << msg << endl;
    //}
    //catch (int num) 
    //{
    //    cout << "Exception caught in main function: Negative number: " << num << endl;
    //}

    ////9
    //try 
    //{
    //    myFunction(10);
    //    myFunction(-5);
    //    myFunction(0);
    //}
    //catch (const OutOfRangeException& e) 
    //{
    //    cout << "Caught out_of_range exception: " << e.what() << endl;
    //}
    //catch (const RuntimeErrorException& e) 
    //{
    //    cout << "Caught runtime_error exception: " << e.what() << endl;
    //}
    //catch (...) 
    //{
    //    cout << "Caught other exception" << endl;
    //}

    //10
    try 
    {
        process(10);
        process(-5);
        process(0);
    }
    catch (const CustomException& e) 
    {
        cout << "Error caught: Code " << e.getErrorCode() << ", message: " << e.getErrorMessage() << endl;
    }
}
