//billing project
#include<iostream>
using namespace std;
int main()
{
  int returntotalbill(void);
  int Totalbill=returntotalbill();
  cout<<"total amount :  "<<Totalbill<<endl;;
  cout<<"thanku for your order"<<endl;
  return 0;
}
int returntotalbill(){
    char c;
    char selectagain;
    char item,vegitem,nonvegitem;
    float billamount=0;
    cout<<"---------------welcome to online food order-----------------"<<endl;
    cout<<"---------------please follow below instruction--------------"<<endl;
    cout<<"step 1 : please press s to start your your order"<<endl;
    cout<<"step 2 : you can order both veg and nonveg item"<<endl;
    cout<<"step 3 : please press a to select veg items"<<endl;
    cout<<"step 4 : please press b to select nonveg items"<<endl;
    cout<<"step 5 : you will get your final bill after your order"<<endl;
    start:
    cin>>c;
    if(c=='s'||c=='S')
    {
        items:
      cout<<"please select your choice"<<endl;
      cout<<"(a) veg items                         (b) nonveg items"<<endl;
      cin>>item;
      if(item=='a' || item=='A'){
    cout<<"please select 1,2,3,4,5 as per your choice"<<endl;
    cout<<" (1) paneer masala          price : 250/-"<<endl;
    cout<<" (2) paneer chilli          price : 250/-"<<endl;
    cout<<" (3) soya chaap             price : 100/-"<<endl;
    cout<<" (4) chole bhature          price : 120/-"<<endl;
    cout<<" (5) veg roll               price : 60/-"<<endl;
    vegitemslist:
    cin>>vegitem;
    if(vegitem=='1'){
        billamount=billamount+250;
    }
    else if(vegitem=='2'){
        billamount=billamount+250;
    }
    else if(vegitem=='3')
    {
        billamount=billamount+100;
    }
    else if(vegitem =='4'){
        billamount=billamount+120;
    }
    else if(vegitem=='5'){
        billamount=billamount+60;
    }
        else{
            cout<<"you have entered wrong choice,try again!"<<endl;
            goto vegitemslist;
        }
        cout<<"do you want to add more items y or n?"<<endl;
        cin>>selectagain;
        if(selectagain=='y'){
            goto items;
        }
        else {
            return billamount;
        }

      }
      else if(item=='b' || item=='B'){
        nonvegitemlist:
    cout<<"please select 1,2,3,4,5 as per your choice"<<endl;
    cout<<" (1) chicken masala          price : 250/-"<<endl;
    cout<<" (2) chicken chilli          price : 250/-"<<endl;
    cout<<" (3)  chicken lababdaar      price : 200/-"<<endl;
    cout<<" (4)  mutton biryani         price : 150/-"<<endl;
    cout<<" (5)  non veg roll           price : 60/-"<<endl;
    nonvegitemslist:
    cin>>nonvegitem;
    if(nonvegitem=='1'){
        billamount=billamount+250;
    }
    else if(nonvegitem=='2'){
        billamount=billamount+250;
    }
    else if(nonvegitem=='3')
    {
        billamount=billamount+200;
    }
    else if(nonvegitem =='4'){
        billamount=billamount+150;
    }
    else if(nonvegitem=='5'){
        billamount=billamount+60;
    }
        else{
            cout<<"you have entered wrong choice,try again!"<<endl;
            goto nonvegitemslist;
        }
        cout<<"do you want to add more items y or n?"<<endl;
        cin>>selectagain;
        if(selectagain=='y'){
            goto items;
        }
        else {
           return billamount;
        }
      }
      else{
        cout<<"you have entered wrong value , please try again!!"<<endl;
        goto items;
      }
      }
    else{
        cout<<"you have enter wrong value,please press s!";
        goto start;
    }
    return billamount;
}