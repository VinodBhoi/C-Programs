#include <iostream>
using namespace std;
class car
{
public:
    char car_type[50];
};


class brand : public car
{
public:
    char brand_name[50];
    int speed;
};

class model : public brand
{
public:
    char model_name[50];
    long price;

    int gettter()
    {
        cout << "Enter the following details ";
        cout << "\nCar Type : ";
        cin >> car_type;
        cout << "\nBrand Name :";
        cin >> brand_name;
        cout << "\nSpeed : ";
        cin >> speed;
        cout << "\nModel Name :";
        cin >> model_name;
        cout << "\nPrice :";
        cin >> price;
        return 0;
    }
    int display()
    {    cout<<"\n***************** Car Details Are **************";
        cout << "\nCar Type : " << car_type;
        cout << "\nBrand Name :" << brand_name;
        cout << "\nSpeed : " << speed<<" km/h";
        cout << "\n Model Name :" << model_name;
        cout << "\nPrice :" << price;
        return 0;
    }
};

int main()
{
   model m;
   m.gettter();
   m.display();
    return 0;
}