/*
تمرین زیر بصورت این است که 
دو دوست با یکدیگر به رستوران رفته اند و حال میخواهند هزینه را با یکدیگر تقسیم کنند
پارامتر های مورد نیاز شما 
1 : هزینه کل
2 : میزان مالیات به درصد
*/

// وارد کردن کتابخانه های مورد نیاز
#include <iostream>

using namespace std;

// امضا توابع مورد نیاز
float half(float bill, float tax);

int main()
{
    //تعریف متغیر های مورد نیاز
    float bill_amount; //میزان صورت حساب
    float tax_percent; //میزان مالیات

    cout << "Bill before tax: ";
    cin >> bill_amount;

    cout << "Sale Tax Percent: ";
    cin >> tax_percent;

    cout << "You will owe " << half(bill_amount, tax_percent) << " each.\n";
}

float half(float bill, float tax)
{
    // این تابع باید بتواند میزان مالیات را به هزینه اضافه کند و سپس هزینه را بین دو نفر تقسیم کند(تقسیم هزینه با درصد میباشد)
    return 0.0;
}
