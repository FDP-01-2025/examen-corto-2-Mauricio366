#include <iostream>

using namespace std;

int main(){

int age,gen,ms,fes,yn,wallet=200, cost;

int sfs = 64,fs =96, ps = 200;
int cs = 70, es = 100, sp = 250;


//Here we ask them for their age
cout<<"Welcome to our online shoe shop"<<endl;

cout<<"First of all, can you please tell us your age? so we can help you with the size"<<endl;
cin>> age;
//here we compare the age for the price
if(age>=0&&age<=12){

cout<<"The best size for this age is 34"<<endl;

}else if(age>=13&&age<=17){


cout<<"The best size for this age is 38"<<endl;

}else if(age>=18&&age<=64){


cout<<"The best size for this age is 40"<<endl;

}else if(age >=65){

cout<<"The best size for this age is 42"<<endl;

}else{

cout<<"Please enter a valid age"<<endl;

}

//We start with the switch here
cout<<"----------That is the size we sujest for your age----------"<<endl;

cout<<"l         Now, please select one of this options          l"<<endl;

cout<<"l        1. Male                                          l"<<endl;

cout<<"l        2.Female                                         l"<<endl;

cout<<"l        2.Rather not to say it                           l"<<endl;

cout<<"-----------------------------------------------------------"<<endl;

cin >> gen;
//this one is for gender
switch(gen){

case 1: 

cout<<"You selected the male option, here we have some good choices for ya"<<endl;

cout<<"----------         Male shoes options            ----------"<<endl;

cout<<"l        1. Shoes for sports                              l"<<endl;

cout<<"l        2. Formal shoes                                  l"<<endl;

cout<<"l        3. Premium shoe                                  l"<<endl;

cout<<"l        Please select one option                         l"<<endl;

cout<<"-----------------------------------------------------------"<<endl;

cin>> ms;
//this one is for male shoes
switch (ms){

case 1:

cout<<"You selected shoes for sports"<<endl;

cout<<"Do you want to buy it? Please select 4 if yes or 5 if no"<<endl;
cin >> yn;
//This one is for yes and no
switch (yn){

case 4: cout<<"You selected yes, we now proced with the purchase"<<endl;

cost = wallet - sfs;

cout<<"The price of the shoe is " <<sfs<<endl;

cout<<"The amount of money you have left is "<<cost<<endl;

break;

case 5: 

cout<<"You said no, we wiil not proced with the purchase"<<endl;

cout<<"The amount of money you have left is "<<wallet<<endl;


break;

//----------------------------------------------------------------------

case 2:

cout<<"You selected the formal shoes"<<endl;

cout<<"Do you want to buy it? Please select 1 if yes or 2 if no"<<endl;
cin >> yn;


switch (yn){

case 4: cout<<"You selected yes, we now proced with the purchase"<<endl;

cost = wallet - fs;

cout<<"The price of the shoe is " <<fs<<endl;

cout<<"The amount of money you have left is "<<cost<<endl;

break;

case 5: 

cout<<"You said no, we wiil not proced with the purchase"<<endl;

cout<<"The amount of money you have left is "<<wallet<<endl;


break;

}

//-------------------------------------------------------------------

case 3:

cout<<"You selected premium shoes"<<endl;

cout<<"Do you want to buy it?"<<endl;
cin >> yn;

switch(yn){
case 1:

cout<<"You selected shoes for sports"<<endl;

cout<<"Do you want to buy it? Please select 4 if yes or 5 if no"<<endl;
cin >> yn;

switch (yn){

case 4: cout<<"You selected yes, we now proced with the purchase"<<endl;

cost = wallet - sfs;

cout<<"The price of the shoe is " <<sfs<<endl;

cout<<"The amount of money you have left is "<<cost<<endl;

break;

case 5: 

cout<<"You said no, we wiil not proced with the purchase"<<endl;

cout<<"The amount of money you have left is "<<wallet<<endl;


break;
//--------------------------------------------------------------------------------------------------------

default: cout<<"Please select a valid option"<<endl;

break;

//-------------------------------------------------------------------------------------------------------------
}






}


}

}

case 2: 

cout<<"You selected the female option, here we have some good choices for ya"<<endl;

cout<<"----------       Female shoes options            ----------"<<endl;

cout<<"l        1. Casual shoes                                  l"<<endl;

cout<<"l        2. Elegant shoes                                 l"<<endl;

cout<<"l        3. Premium shoe                                  l"<<endl;

cout<<"l        Please select one option                         l"<<endl;

cout<<"-----------------------------------------------------------"<<endl;

cin>> fes;

switch (fes){

case 1:

cout<<"You selected casual shoes"<<endl;

cout<<"Do you want to buy it? Please select 4 if yes or 5 if no"<<endl;
cin >> yn;

switch (yn){

case 4: cout<<"You selected yes, we now proced with the purchase"<<endl;

cost = wallet - cs;

cout<<"The price of the shoe is " <<cs<<endl;

cout<<"The amount of money you have left is "<<cost<<endl;

break;

case 5: 

cout<<"You said no, we will not proced with the purchase"<<endl;

cout<<"The amount of money you have left is "<<wallet<<endl;


break;

//----------------------------------------------------------------------

case 2:

cout<<"You selected the elegant"<<endl;

cout<<"Do you want to buy it? Please select 4 if yes or 5 if no"<<endl;
cin >> yn;


switch (yn){

case 4: cout<<"You selected yes, we now proced with the purchase"<<endl;

cost = wallet - es;

cout<<"The price of the shoe is " <<es<<endl;

cout<<"The amount of money you have left is "<<cost<<endl;

break;

case 5: 

cout<<"You said no, we will not proced with the purchase"<<endl;

cout<<"The amount of money you have left is "<<wallet<<endl;


break;

}

//-------------------------------------------------------------------

case 3:

cout<<"You selected premium shoes"<<endl;

cout<<"Do you want to buy it?"<<endl;
cin >> yn;

switch(yn){
case 1:

cout<<"You selected shoes for sports"<<endl;

cout<<"Do you want to buy it? Please select 4 if yes or 5 if no"<<endl;
cin >> yn;

switch (yn){

case 4: cout<<"You selected yes, we now proced with the purchase"<<endl;

cost = wallet - sp;

cout<<"The price of the shoe is " <<sp<<endl;

cout<<"The amount of money you have left is "<<cost<<endl;

break;

case 5: 

cout<<"You said no, we wiil not proced with the purchase"<<endl;

cout<<"The amount of money you have left is "<<wallet<<endl;


break;
//--------------------------------------------------------------------------------------------------------

default: cout<<"Please select a valid option"<<endl;

break;

//-------------------------------------------------------------------------------------------------------------
}


break;



}


}

}
return 0;
}


































































return 0;
}
