#include <iostream>

using namespace std;

int main()
{
    int distance[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<< "way Number :"<<i<<"Road Number :" <<j<<endl;
            cin>>distance[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<distance[i][j]<< " , ";
        }
          cout<<endl;
    }

     int totalDistance=0;
     int roadDistance[4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){

           int roadDistance;
            totalDistance = totalDistance+distance[i][j];
        }
        roadDistance[i]=totalDistance;

    }

     cout << "Total Distance is :" << endl;
    for(int i=0;i<4;i++){
        cout<<roadDistance[i]<<" ," ;
    }

    cout << endl;

    int min=roadDistance[0];
    int roadNumber=0;
    for(int i=0;i<4;i++){
        if(roadDistance[i]<min){
           roadDistance[i]=min;
            roadNumber=i;
      }
    }
   cout<<"The minimum distance is:" <<min<<endl;
   cout<<"The shortest road is road number :" << roadNumber+1<<endl;


    return 0;
}
