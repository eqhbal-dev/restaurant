// تمرین زیر بصورت این است که 
// دو دوست با یکدیگر به رستوران رفته اند و حال میخواهند هزینه را با یکدیگر تقسیم کنند
// پارامتر های مورد نیاز شما 
// 1 : هزینه کل
// 2 : میزان مالیات به درصد

#include <iostream>

using namespace std;

float half(float bill, float tax, int tip);

int main()
{
    float bill_amount, tax_percent;
    int tip_percent;

    cout << "Bill before tax and tip: ";
    cin >> bill_amount;

    cout << "Sale Tax Percent: ";
    cin >> tax_percent;
    
    cout << "Tip percent: ";
    cin >> tip_percent;

    cout << "You will owe " << half(bill_amount, tax_percent, tip_percent) << " each.\n";
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    // این تابع باید بتواند میزان مالیات را به هزینه اضافه کند و سپس هزینه را بین دو نفر تقسیم کند(تقسیم هزینه با درصد میباشد)
    return 0.0;
}
