#include <iostream>
#include<list>
#define size_max 4
using namespace std;


class VehicleQueue{
    public:

    string arr[size_max];  //array List
    int first = 0;
    int last = -1;

    int enqueue(string p){
        if(last >= size_max-1){
            cout<<"queue is full.."<<endl;
            return 0;
        }
        arr[++last]=p;
        return 0;
    }


    void printout(){
        for(int i=first;i<=last;i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
    string getCar_number(){
        return arr[1];
    }
    string getCounter_number(){
        return arr[3];
    }
    void search_info(){
        cout<<"date :"<<arr[0]<<endl;
        cout<<"car Number: "<<arr[1]<<endl;
        cout<<"Ticket_number : "<<arr[2]<<endl;
        cout<<"counter : "<<arr[3]<<endl;
    }

};
int main(){
    std:: list<VehicleQueue> heavy_duty;
    std::list<VehicleQueue>medium_duty;
    std::list<VehicleQueue>light_duty;

    int heavy_count=0;
    int medium_count=0;
     int light_count=0;


     int x=0;
     while (x==0)
     {
        // options output
    cout <<"enter the vehicle type: "<<endl;
    cout<<"1 for heavy vehicle."<<endl;
    cout<<"2 for medium vehicle."<<endl;
    cout<<"3 for light vehicle."<<endl;
    cout<<"4 for show details."<<endl;

    string a;
    cin>>a;
    if (a=="4")
    {
       x=1;
    }

    // for
    if (a=="1"){
     string b;
     cout <<"enter the date: "<<endl;
     cin>>b;
     VehicleQueue mq;
     mq.enqueue(b);//date
     cout <<"enter the car number: "<<endl;
     cin>>b;
     mq.enqueue(b);//car number
     cout <<"enter the ticket number: "<<endl;
     cin>>b;
    mq.enqueue(b);//ticket number
    heavy_count++;
    b=to_string(heavy_count);
    mq.enqueue(b);//counter
    //heavy_count++;
    heavy_duty.push_front(mq);

    };

    if (a=="2"){
       string b;
     cout <<"enter the date: ";
     cin>>b;

     VehicleQueue hv;

    hv.enqueue(b);//date
     cout <<"enter the car number: ";
     cin>>b;
     hv.enqueue(b);//car number
     cout <<"enter the ticket number: ";
     cin>>b;
    hv.enqueue(b);//ticket number
    medium_count++;
    b=to_string(medium_count);
    hv.enqueue(b);//counter
    //medium_count++;
    medium_duty.push_front(hv);

    };

    if (a=="3"){

         string b;
     cout <<"enter the date: ";
     cin>>b;
     VehicleQueue h;
    h.enqueue(b);//date
     cout <<"enter the car number: ";
     cin>>b;
      h.enqueue(b);//car number
     cout <<"enter the ticket number: ";
    cin>>b;
    h.enqueue(b);//ticket number

    light_count++;
    b=to_string(light_count);
    h.enqueue(b);//counter
    light_duty.push_front(h);

    };

     }



   cout<<"...HEAVY DUTY VEHICLE... "<<endl;
   if(heavy_duty.empty()){
        cout<< "There are no heavy vehicles."<<endl;
        };

   // Declare iterator; iterator mane jeta ghurbe mane hoilo "i"
   string car;
   cout<<"enter the car number you want to search : ";
   cin>>car;
     std::list<VehicleQueue>::iterator it;
     string search_heavy =car;
     for (it = heavy_duty.begin(); it != heavy_duty.end(); it++)
     {

        string car_num = it->getCar_number();
        it->printout();// print toll info heavy_duty

        if(car_num==search_heavy){
             cout<<"...  Car number matched  ...."<<endl;
             it->search_info();
          }
     }




    cout<<"...MEDIUM DUTY VEHICLE..."<<endl;
    if(medium_duty.empty()){
        cout<< "There are no medium vehicles."<<endl;
        };

    //std::list<VehicleQueue>::iterator it;
    // Declare iterator; iterator mane jeta ghurbe mane hoilo "i"
    string search_medium =car;
    for (it = medium_duty.begin(); it != medium_duty.end(); it++)
    {

        string car_num = it->getCar_number();//it holo vehicle queue  classer object
        it->printout();

        if(car_num==search_medium){
            cout<<"...  Car number matched  ...."<<endl;
            it->search_info();
        }
    }


    cout<<"...LIGHT DUTY VEHICLE..."<<endl;
    if(light_duty.empty()){
        cout<< "There are no light vehicles."<<endl;
        };


   // std::list<VehicleQueue>::iterator it;
   // Declare iterator; iterator mane jeta ghurbe mane hoilo "i"
    string search_light=car;
    for (it = light_duty.begin(); it != light_duty.end(); it++)
    {

        string car_num = it->getCar_number();
        it->printout();

        if(car_num==search_light){
            cout<<"...  Car number matched  ...."<<endl;
            it->search_info();
        }
    }

    cout<<"number of heavy_duty vehicle : "<<heavy_duty.size()<<endl; // koyta heavy duty vehicle ase
    cout<<"number of medium_duty vehicle :"<<medium_duty.size()<<endl;
    cout<< "number of light_duty vehicle : "<<light_duty.size()<<endl;

    int heavy_toll=800;
    int medium_toll=500;
    int light_toll=300;


    int count_counter1=0;//koyta vehicle dhukse
    int count_counter2=0;
    int count_counter3=0;
    int counter1_collection=0;//koto taka collection hoise
    int counter2_collection=0;
    int counter3_collection=0;

    for (it=heavy_duty.begin();it !=heavy_duty.end();it++){
       string counter_num=it->getCounter_number();//seser counter number ta dibe prothome then ++
       if(counter_num=="1"){
            count_counter1++;
            counter1_collection+=heavy_toll;
       }
       else if(counter_num=="2"){
            count_counter2++;
            counter2_collection+=heavy_toll;

       }
       else if(counter_num=="3"){
            count_counter3++;
            counter3_collection+=heavy_toll;
       }
       else{
           cout<<"... counter number error ..."<<endl;
       }

    }
    // cout<<"...heavy..."<<endl;
    // cout<<"number of vehicles in counter1 :"<<count_counter1<<endl;
    // cout<<"number of vehicles in counter2 :"<<count_counter2<<endl;
    // cout<<"number of vehicles in counter3 :"<<count_counter3<<endl;

    for(it=medium_duty.begin();it !=medium_duty.end();it++){
        string counter_num=it->getCounter_number();
        if(counter_num=="1"){
            count_counter1++;
            counter1_collection+=medium_toll;
        }
        else if(counter_num=="2"){
            count_counter2++;
            counter2_collection+=medium_toll;
        }
        else if(counter_num=="3"){
            count_counter3++;
            counter3_collection+=medium_toll;
        }
        else{
            cout<<"... counter number error ..."<<endl;
        }

    }
    // cout<<"...medium ..."<<endl;
    // cout<<"number of vehicles in counter1 :"<<count_counter1<<endl;
    // cout<<"number of vehicles in counter2 :"<<count_counter2<<endl;
    // cout<<"number of vehicles in counter3 :"<<count_counter3<<endl;

    for(it=light_duty.begin();it !=light_duty.end();it++){
        string counter_num=it->getCounter_number();
        if(counter_num=="1"){
            count_counter1++;
            counter1_collection+=light_toll;
        }
        else if(counter_num=="2"){
            count_counter2++;
            counter2_collection+=light_toll;
        }
        else if(counter_num=="3"){
            count_counter3++;
            counter3_collection+=light_toll;
        }
        else{
            cout<<"...counter number error..."<<endl;
        }

    }
   // cout<<"...light ..."<<endl;
    cout<<"number of vehicles in counter1 :"<<count_counter1<<endl;//per counter a koyta gari dhukse
    cout<<"number of vehicles in counter2 :"<<count_counter2<<endl;
    cout<<"number of vehicles in counter3 :"<<count_counter3<<endl;

    cout<<"counter1 collection : "<<counter1_collection<<endl;//counter thake koto tk asche
    cout<<"counter2 collection : "<<counter2_collection<<endl;
    cout<<"counter3 collection : "<<counter3_collection<<endl;

    int total=counter1_collection+counter2_collection+counter3_collection;
    cout<<"total : "<<total<<endl;



    return 0;

}

