#include<iostream>
using namespace std;
class sports;
class electronics;
class sum;
class input{
friend class sum;
friend class sports;

protected:

public:
    virtual void display()=0;
    static int i;
    int section,ee,price[100];
    void info(){
        int pass,tt=4,mno;
    string name;
    cout<<"                         WELCOME TO SHOP"<<endl<<endl<<"ENTER PHONE NUMBER"<<endl<<endl;
    cin>>mno;
    cout<<endl;
    cout<<"ENTER YOUR 4 DIGIT PASSCODE"<<endl<<endl;
    cin>>pass;

    }
    void pric(){
    price[0]=1000;
    for(int q=1;q<4;q++)
    {
        price[q]=price[q-1]*10;
    }
    }
void getdata(){
cout<<endl<<"ENTER YOUR CHOICE"<<endl<<endl<<"ENTER"<<endl<<endl<<"1. ELECTRONICS"<<endl<<endl<<"2. SPORTS"<<endl<<endl;
cin>>section;
}
int putdata(){
if(section==1)
return 1;
if(section==2)
return 2;

if(section!=1 || section!=2)
cout<<"invalid choice";
}
};
int input::i=0;
class electronics: virtual  public input{
    public:
int choice,totl;
public:
int elec(){
    cout<<"**********************************************************************"<<endl<<endl;
cout<<"1. MOBILES"<<endl<<endl<<"2. LAPTOP "<<endl<<endl<<"PRESS 8 FOR MAIN MENU"<<endl<<endl;
cin>>choice;
if(choice==8)
    return 8;
else{
if(choice==1){
            cout<<"**********************************************************************"<<endl<<endl;
cout<<"1. MOTOROALA G5 PLUS   : RS"<<price[1]<<endl<<endl<<"2. APPLE IPHONE 8 PLUS : RS"<<price[2]<<endl<<endl<<"3. SAMSUNG GALAXY S8   : RS"<<price[3]<<endl<<endl<<"PRESS 9 FOR PREVIOUS MENU"<<endl<<endl;
cin>>choice;
if(choice==9)
    return 9;
else{
for(int ii=1;ii<=3;ii++){
if(choice==ii){
        i++;
        cout<<"TOTAL ITEM PURCHASED IS = "<<i<<endl;
                totl=price[ii];
        return price[ii];
}
}
}
}
else if(choice==2){
        cout<<"**********************************************************************"<<endl;
cout<<"1. HP NOTEBOOK    : RS"<<price[1]<<endl<<endl<<"2. APPLE MACBOOK  : RS"<<price[2]<<endl<<endl<<"3. LENOVO         :RS"<<price[3]<<endl<<endl<<"PRESS 9 FOR PREVIOUS MENU"<<endl<<endl;
cin>>choice;
if(choice==9)
    return 9;
else{
for(int ii=1;ii<=3;ii++){
if(choice==ii){
    i++;
    cout<<"TOTAL ITEM PURCHASED IS = "<<i<<endl<<endl;
            totl=price[ii];
        return price[ii];
}
}
}
}
}
}


};
class sports: virtual public input{
public:
int choice,tot;

void spo(){
        cout<<"**********************************************************************"<<endl<<endl;
cout<<"1. CRICKET ACCESSSERIES"<<endl<<endl<<"2. SPORTS KIT"<<endl<<endl<<"PRESS 8 FOR MAIN MENU"<<endl<<endl;
cin>>choice;
if(choice==8)
int l=0;
else{
if(choice==1){
        cout<<"**********************************************************************"<<endl<<endl;
cout<<"1. BAT  :   RS"<<price[1]<<endl<<endl<<"2. STUMPS : RS"<<price[2]<<endl<<endl<<"3. BALL :   RS"<<price[3]<<endl<<endl<<"PRESS 9 FOR PREVIOUS MENU"<<endl<<endl;
cin>>choice;
if(choice==9)
   tot=9;
else{
for(int ii=1;ii<=3;ii++){
if(choice==ii){
    i++;
    cout<<"TOTAL ITEM PURCHASED IS = "<<i<<endl<<endl;
        tot=price[ii];

}
}
}
}
else if(choice==2){
        cout<<"**********************************************************************"<<endl;
cout<<"1. BADMINTON RACKET: RS"<<price[1]<<endl<<"2. FOOTBALL:         RS"<<price[2]<<endl<<"3. VOLLYBALL :       RS"<<price[3]<<endl<<"PRESS 9 FOR PREVIOUS MENU"<<endl;
cin>>choice;
if(choice==9)
    tot=9;
else{
for(int ii=1;ii<=3;ii++){
if(choice==ii){
    i++;
    cout<<"TOTAL ITEM PURCHASED IS = "<<i<<endl<<endl;
            tot=price[ii];

}
}
}
}
}
}
operator int(){
int p;
p=tot;
return p;
}
};
class sum:public electronics,public sports{
    int total,x,y,k;
public:
sum(){
x=0;
y=0;
}
 sum(int a,int b){
    x=a;
    y=b;
    k=a+b;
    cout<<"----------------------------------------------------------"<<endl<<endl;
cout<<"TOTAL BILL BY constructor FUNCTION IS RS: "<<k<<endl<<endl;
}

sum operator +(sum o){
sum e5;
e5.totl=totl+o.totl;
return e5;
}
void display(){
        cout<<"----------------------------------------------------------"<<endl<<endl;
cout<<"TOTAL BY OPERATOR OVERLOADING IS RS: "<<totl<<endl<<endl;
}
void add(int ,int );
};



inline void sum::add(int a,int b){
total=a+b;
cout<<"----------------------------------------------------------"<<endl<<endl;

cout<<"YOUR BILL IS : RS"<<total<<endl<<endl;
}


int main(){
int b=0,c=0,s7=0,j=5,entry,dd=0,ddd=0;


sum s,su1,su3,s1,s2,s3;
s.info();
s.pric();
s1.pric();
s2.pric();
while(j==5){
s.getdata();
b=s.putdata();
if(b==1){
c=s.elec();
dd=c+dd;
}
{
    while(c==9){
        c=s.elec();
        dd=c+dd;
    }
}
if(b==2){
s.spo();
s7=s;
ddd=s7+ddd;
}
{


    while(s==9){
        s.spo();
        s7=s;
        ddd=s7+ddd;
}
}
cout<<"**********************************************************************"<<endl<<endl;
cout<<"IF U WANT TO CONTINUE PRESS 5 ELSE PRESS 0"<<endl<<endl;
cin>>j;
}
s.add(dd,ddd);
 //s2(c,s7);
cout<<"SHOPPING BY OPERATOR OVERLOADING PRESS 1"<<endl;
cin>>entry;
if(entry==1){
s1.elec();
s2.elec();
s3=s1+s2;
s3.display();
}
return 0;
}
