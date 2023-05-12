#include <iostream>

using namespace std;
class Uberx{
public:
  float duration;
  float distance;
  float surge;
  char character;
  int bookingFee;

Uberx(float du,float di,float s,char ch,int bf){
  duration=du;
  distance=di;
  surge=s;
  character=ch;
  bookingFee=bf;
}

int cost(){
switch(character){
case 'N':
    return 8+(0.45*duration)+(3.05*distance)+2;
      break;
case 'y':
    return (8+(0.45*duration)+(3.05*distance)+2)*surge;
      break;
    default:
      break;
}
}
};

class comfort:public Uberx{
public :
    comfort(float du,float di,float s,char ch,int bf):Uberx (du,di,s,ch,bf){
    }

int cost(){
switch(character){
case 'N':
    return 11+(0.67*duration)+(4.04*distance)+3;
      break;
case 'y':
    return (11+(0.67*duration)+(4.04*distance)+3)*surge;
      break;
    default:
      break;
}
}
};

class taxi:public Uberx {
public:
    taxi(float du,float di,float s,char ch,int bf):Uberx (du,di,s,ch,bf){}

int cost(){
 switch(character){
 case 'N':
    return 8+(0.34*duration)+(3.04*distance)+1;
      break;
 case 'y':
    return (8+(0.34*duration)+(3.04*distance)+1)*surge;
      break;
    default:
      break;
}
}
};
  float Ux ;
   float Cf;
  float Ti;
  int minFare;
void print(float Ux,float Cf,float Ti,int minFare){
if(minFare>Ux){
    cout << "The Uberx cost: "<< minFare << " EGB " << endl;
}
else{
    cout << "The Uberx cost: " <<Ux<<" EGB " << endl;
   }

   if(minFare>Cf){
    cout << "The comfort cost: "<< minFare << " EGB " << endl;
   }
else{
    cout << "The comfort cost: " <<Cf<<" EGB " << endl;
}
if(minFare>Ti){
    cout << "The comfort cost: "<< minFare << " EGB " << endl;
   }
else{
    cout << "The comfort cost: " <<Ti<<" EGB " << endl;
}
}



int main(){

  Uberx u1= Uberx(5,8,1.2,'y',2);
  comfort c1=comfort(5,8,1.2,'y',3);
   taxi t1=taxi (5,8,1.2,'y',1);

int minFare=30;
float UberxCost=(5,8,1.2,'y',2);
float ComfortCost=(5,8,1.2,'y',3);
float TaxiCost=(5,8,1.2,'y',1);

float Ux=u1.cost();
 float Cf=c1.cost();
  float Ti=t1.cost();
 print(Ux,Cf,Ti,minFare);





    return 0;
}

