#include <iostream>
#include <ctime>
#include <time.h>
#include <cstdlib>
using namespace std;

bool state = false;

char input;

int prob[100];
int tmp;
int i = 0;

void randomize(){
    srand(time(0));
    int r = (rand() % 100);
    prob[0] = r;
    while(i<100){
        state = false;
        int r = (rand() % 100);
        tmp = r;
        int x = 0;
        while(x != i){
            if(r != prob[x]){
                x++;
            }else{
                state = true;
                break;
            }
        }
        if(state){
        }else{
            i++;
            prob[i] = tmp;
            cout<<prob[i]<<" ";
        }
    }
}
int main()
{
    randomize();
    cout<<"\nStart Roulette? (y/n): ";
    cin>>input;
    if(input == 'y'){
        srand(time(0));
        int r = (rand() % 100);
        cout<<"R: "<<r<<endl;
        for(int i=0; i<100; i++){
            if(r == prob[i]){
                cout<<"Index: "<<i;
                if(i < 5){                      //Range 0 - 4 is 5, so probability 5%
                    cout<<"\nSkin Reward: Lesley Legend!!!";
                }else if(i >= 5 && i < 45){     //Range 5 - 45 is 44, so probability 40%
                    cout<<"\nSkin Reward: Belerick";
                }else if(i >= 45 && i < 55){    //Range 45 - 55 is 10, so probability 10%
                    cout<<"\nSkin Reward: Gusion";
                }else if(i >= 55 && i < 75){    //Range 55 - 75 is 20, so probability 20%
                    cout<<"\nSkin Reward: Grock";
                }else if(i >= 75 && i < 100){   //Range 75 - 100 is 25, so probability 25%
                    cout<<"\nSkin Reward: Kotak";
                }
            }
        }
    }
}
