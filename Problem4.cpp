#include<iostream>
using namespace std;
int main()
{
    int day=0;
    float humidity,temperature,t_temp=0,t_humid=0,avg_t,avg_h;
    cout<<"Enter humidity and temperature of 5 days: "<<endl;

    for(int i=1;i<=5;i=i+1){

        cout<<"enter the temperature of day"<<i<<endl;
        cin>>temperature;
        t_temp=t_temp+temperature;

        cout<<"enter the humidity of day"<<i<<endl;
        cin>>humidity;
        t_humid=t_humid+humidity;

        day=day+1;

    }
    avg_t=t_temp/day;
    avg_h=t_humid/day;

    cout<<"avg temperature"<<avg_t<<endl;
    cout<<"avg humidity"<<avg_h<<endl;

    return 0;
}
