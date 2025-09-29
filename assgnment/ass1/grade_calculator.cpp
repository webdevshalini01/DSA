#include <iostream>
using namespace std;
main()
{
    int num;
    char grade;
    cout<< "Enter Your Score: ";
    cin>>num;
//step 1:    
    (num >= 91 && num <= 100) ? (grade = 'A', cout << "hey your grade is A+" << endl) : (num >= 81 && num <= 90) ? (grade = 'A', cout << "hey your grade is A" <<endl):(num >= 71 && num <= 80) ? (grade = 'B', cout << "your grade is B" << endl): (num >= 61 && num <= 70) ? (grade = 'C', cout << "your grade is C" << endl)
    : (num >= 51 && num <= 60)   ? (grade = 'D', cout << "your grade is D" << endl): (num >= 41 && num <= 50)   ? (grade = 'E', cout << "your grade is E" << endl): (num >= 0 && num <= 40)    ? (grade = 'F', cout << "your grade is F" << endl): (grade = 'N', cout << "entered score is invalid please try again.." << endl);
//step 2: additional comment
 switch (grade)
    {
    case 'A':
        cout << "Excellent Work  !..........." << endl;
        break;
    case 'B':
        cout << "very good work ............" << endl;
        break;
    case 'C':
        cout << "Good work..................." << endl;
        break;
    case 'D':
        cout << "You are success is your exam" << endl;
        break;
    case 'E':
        cout << "You are only passed need to improvement" << endl;
        break;
    case 'F':
        cout << "vary bad bcz you are Failed.." << endl;
        break;
    }
// step 3 : eligibility check:
    if (num >= 41 && num <= 100)
    {
        cout << "Congratulations! You are eligible candidate for the next level...." << endl;
    }
    else if (num >= 0 && num <= 40)
    {
        cout << "Best of luck for  next time." << endl;
    }
    else
    {
        cout << "Invalid score.. please try again.." << endl;
    }
}