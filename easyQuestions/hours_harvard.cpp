#include<iostream>

using namespace std;

int get_total_hours(char total, int arr[],int week_gone ){
    int avg=0;;
    if(total=='t' || total == 'T'){
        for(int i = 0 ; i < week_gone; i++){
            avg+=arr[i];
        }
        cout<<avg;
    }else{
        for(int i = 0 ; i < week_gone; i++){
            avg+=arr[i];
        }
        avg=avg/week_gone;
        cout<<avg;
    }
    return avg;
}

int main(){
    //average hours . how many weeks . hours per week
    int arr_of_average[100];
    int weeks_gone, hours_done;
    char a_or_total;
    cout<<"number of weeks taking cs50: ";
    cin>>weeks_gone;
    for(int i = 0 ; i < weeks_gone ; i++){
        cout<<"Week "<<i<<"Hw Hours: ";
        cin>>hours_done;
        arr_of_average[i]=hours_done;
    }
    cout<<"Enter T for total hours, A for average hours per week : ";
    cin>>a_or_total;
    get_total_hours(a_or_total,arr_of_average, weeks_gone);
}

