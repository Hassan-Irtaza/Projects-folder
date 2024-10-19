#include <iostream>
using namespace std;

int main(){
    int count = 0, waste = 0, std1 = 0, std2 = 0 , vote;
    
    //for loop
    for(int maxstudents = 0 ; maxstudents <= 15 ; maxstudents++){
        cout<<"enter your vote enter 1 for std1 and 2 for std2 or press zero to wastee your vote" <<endl;
        cin >> vote;
        if(vote == 1){
            std1++;
            count++;
        }
        else if(vote == 2){
            std2++;
            count++;
        }
        else if(vote == 0){
            waste++;
            count++;
        }
        else{
            cout<<"your vote has been wasted"<<endl;
            waste++;
            count++;
        } 
    
        //outputs
        cout << "Votes for std1: " << std1 << endl;
        cout << "Votes for std2: " << std2 << endl;
        cout << "Wasted votes: " << waste << endl;
        cout << "Total votes: " << count << endl;
   
    }
   

    //winner selction
        if(std1<std2){
            cout<<"the winner is ahmed"<<endl;
        }
        else if(std2>std1){
            cout<<"the winner is amna"<<endl;
        }
        else if(std1==std2){
            cout<<"the winner is ahmed and amna"<<endl;
        }

    return 0;
}
