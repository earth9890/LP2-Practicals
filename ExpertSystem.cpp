#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the name of the Employee" << endl;
    string name, domain, gender;
    int tasks, avgHours, salary, prevRating, presentations, age, exp, holidaysTaken;
    cin >> name;
    cout << "In which domain " << name << " is working (web/testing/design)" << endl;
    cin >> domain;
    cout << "What is the gender of " << name << " (M/F)" << endl;
    cin >> gender;
    cout << "Lets evaluate the performance of " << name << " " << endl;
    cout << endl;
    cout << "What is the number of tasks successfully completed by " << name << " out of 10" << endl;
    cin >> tasks;
    cout << "What is the average hours " << name << " has worked each week " << endl;
    cin >> avgHours;
    cout << "What is the salary of " << name << " per year " << endl;
    cin >> salary;
    cout << "What is the previous rating of " << name << " out of 5 " << endl;
    cin >> prevRating;
    cout << "How many presentation does " << name << " given last year" << endl;
    cin >> presentations;
    cout << "What is the age of the employee" << endl;
    cin >> age;
    cout << "What is the experience of " << name << " " << endl;
    cin >> exp;
    cout << "How many leave " << name << " has taken last year" << endl;
    cin >> holidaysTaken;
    int rat = 0;

    if (presentations >= 10)
    {
        rat++;
    }
    if (holidaysTaken <= 20)
    {
        rat++;
    }
    if (tasks > 8)
    {
        rat += 2;
    }
    if (avgHours > 49)
    {
        rat++;
    }
    cout << "The evaluation of " << name << endl;
    cout << "This year rating is " << rat << endl;

    if (gender == "M")
    {
        if (domain == "web")
        {
            if (avgHours >= 37 and tasks >= 7)
            {
                if (salary <= 800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }

                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
            else
            {
                if (salary >= 1500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == "testing")
        {
            if (avgHours >= 40 and tasks > 8)
            {
                if (salary <= 500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }

                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
            else
            {
                if (salary >= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == "design")
        {
            if (avgHours >= 37 and tasks > 6)
            {
                if (salary <= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }

                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
            else
            {
                if (salary > 1800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        if (rat > prevRating)
        {
            cout << "The rating of " << name << " has increased. He has performed well this year" << endl;
        }
        else if (rat < prevRating and age < 25)
        {
            cout << "The employee has underperformed but can be trained for effective performance" << endl;
        }
        else if (rat < prevRating and age > 25)
        {
            cout << "The employee has underperformed and proved to be unproductive for the company" << endl;
        }
        else
        {
            cout << "The performance of the employee is maintained" << endl;
        }
        if (exp > 8 and prevRating == 5)
        {
            cout << name << " should get a promotion in the company" << endl;
        }
    }
    if (gender == "F")
    {
        if (domain == " web")
        {
            if (avgHours >= 30 and tasks > 7)
            {
                if (salary <= 800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }
                else if (salary >= 1500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == " testing")
        {
            if (avgHours >= 35 and tasks > 8)
            {
                if (salary <= 500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }
                else if (salary >= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == " design")
        {
            if (avgHours >= 32 and tasks > 6)
            {
                if (salary <= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }
                else if (salary > 1800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        if (rat > prevRating)
        {
            cout << "The rating of " << name << " has increased. He has performed well this year" << endl;
        }
        else if (rat < prevRating and age < 25)
        {
            cout << "The employee has underperformed but can be trained for effective performance" << endl;
        }
        else if (rat < prevRating and age > 25)
        {
            cout << "The employee has underperformed and proved to be unproductive for the company" << endl;
        }
        else
        {
            cout << "The performance of the employee is maintained" << endl;
        }
        if (exp > 8 and prevRating == 5)
        {
            cout << name << " should get a promotion in the company" << endl;
        }
    }
}
