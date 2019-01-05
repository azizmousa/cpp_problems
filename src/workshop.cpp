#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Define the structs Workshop and Available_Workshops.
struct Workshop{
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops{
    int n;
    vector<Workshop> workshops;
};
//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops *initialize(int const start_time[], int const duration[], int const n);
int CalculateMaxWorkshops(Available_Workshops *const ptr);

int main(int argc, char *argv[]){
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++){
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}

Available_Workshops *initialize(int const start_time[], int const duration[], int const n){
    static Available_Workshops avsh;
    Available_Workshops *ptr = &avsh;
    ptr->n = n;
    for (int i = 0; i < n; ++i){
        Workshop wshop;
        wshop.start_time = start_time[i];
        wshop.duration = duration[i];
        wshop.end_time = wshop.start_time + wshop.duration;
        ptr->workshops.push_back(wshop);     
    }
    return ptr;
}

bool compar(Workshop a, Workshop b){return a.end_time<b.end_time;}

int CalculateMaxWorkshops(Available_Workshops *const ptr){
    int maxShops = ptr->n;
    int previous = 0;
    sort(ptr->workshops.begin(), ptr->workshops.begin()+maxShops, compar);
    
    cout<<endl;
    for (int i = 1; i < ptr->n; ++i){
        if (!(ptr->workshops[i].start_time >= ptr->workshops[previous].end_time)){
            maxShops--;
        }
        else{
            previous = i;
        }
    }
    return maxShops;
}
