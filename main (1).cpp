/*  
                               P.SATHIYA 
                     SRI AKILANDESWARI WOMEN'S COLLEGE
                   
                      SUPERMARKET MANAGEMENT SYSTEM  
                    
                    
    1. WELCOME MESSAGE
    
    2.LIST OF ITEMS (5-10 items display those items using cout)
    
    3.CHOSSE YOUR ITEM (for every item , create a class . In that class , rate of basic quantity)
    
    4. LAST TOTAL COST (add all the rate)
    
    
    VEGETABLES ITEMS list
    
    1.Spinach
    
       *.Price
       *.Quantity
       *.Total Cost
       
    2.Watercress
    
       *.Price
       *.Quantity
       *.Total Cost
       
    3.CARROT 
    
       *.Price
       *.Quantity
       *.Total Cost
       
       
    4.BETROOT 
    
       *.Price
       *.Quantity
       *.Total Cost
       
    5.BOARDBEANS 
    
       *.Price
       *.Quantity
       *.Total Cost
       
    6.BROCCOLI 
    
       *.Price
       *.Quantity
       *.Total Cost
       
    7.CAULIFLOWER 
    
       *.Price
       *.Quantity
       *.Total Cost
       
    8.CELERY 
    
       *.Price
       *.Quantity
       *.Total Cost
       
    9.CHARD 
    
       *.Price
       *.Quantity
       *.Total Cost
       
    10.GARLIC
    
       *.Price
       *.Quantity
       *.Total Cost
    
    
    
*/


/*======================================================================================*/


#include <iostream>
using namespace std;



/***SPINACH PRICE***/

float Spinach(){
    cout<<"Spinach 1kg = rs 25";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*25;
    return quantity*25;
}
/***SPINACH END***/

/*======================================================================================*/


/***WATERCRESS PRICE***/

float Watercress(){
    cout<<"Watercress 1kg = rs 30";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*30;
    return quantity*30;
}

/***WATERCREESS END***/ 

/*======================================================================================*/


/***CARROT PRICE***/

float Carrot(){
    cout<<"Carrot 1kg = rs 40";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*40;
    return quantity*40;
}
 
 
/***CARROT END***/ 

/*======================================================================================*/


/***BETROOT PRICE***/

float Betroot(){
    cout<<"Betroot 1kg = rs 50";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*50;
    return quantity*50;
}

/***BETROOT END***/


/*======================================================================================*/


/***BOARDBEANS PRICE***/

float Boardbeans (){
    cout<<"Boardbeans 1kg = rs 45";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*45;
    return quantity*45;
}
  
/***BOARDBEANS END***/  

/*======================================================================================*/


/***BROCCOLI PRICE***/

float Broccoli(){
    cout<<"Broccoli 1kg = rs 60";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*60;
    return quantity*60;
}

/***BROCCOLI END***/

/*======================================================================================*/


/***CAULIFLOWER PRICE***/

float Cauliflower (){
    cout<<"Cauliflower 1kg = rs 35";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*35;
    return quantity*35;
}

/***CAULIFLOWER END***/

/*======================================================================================*/


/***CELERY PRICE***/

float Celery (){
    cout<<"Celery 1kg = rs 55";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*55;
    return quantity*55;
}

/***CELERY END***/

/*======================================================================================*/


/***CHARD PRICE***/

float Chard(){
    cout<<"Chard 1kg = rs 70";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*70;
    return quantity*70;
}

/***CHARD END***/

/*======================================================================================*/


/***GRALIC PRICE***/

float Garlic(){
    cout<<"Garlic 1kg = rs 65";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost is:"<<quantity*65;
    return quantity*65;
}

/***GRALIC END***/

/*======================================================================================*/


int main()
{
    int option;
    float baseamount, totalamount,a,b,c,d,s,r,k,m,w,q;
    
    cout<<"\t\t****************WELCOME TO OUR WONDERFUL SUPERMARKET***************\t\t";
    start:
    
    cout<<"\n1.Spinach \n2.Watercress \n3.Carrot \n4.Betroot \n5.Boardbeans \n6.Broccoli \n7.Cauliflower \n8.Celery \n9.Chard \n10.Garlic ";
     cout<<"\nEnter your choice:";cin>>option;
      switch(option){
          case 1:
          a=Spinach();
          break;
          case 2:
          b=Watercress();
          break;
          case 3:
          c=Carrot();
          break;
          case 4:
          d=Betroot();
          break;
          case 5:
          s=Boardbeans();
          break;
          case 6:
          r=Broccoli();
          break;
          case 7:
          k=Cauliflower();
          break;
          case 8:
          m=Celery();
          break;
          case 9:
          w=Chard();
          break;
          case 10:
          q=Garlic();
          break;
          
          
          default:
            exit(0);
      }
      
      totalamount=a+b;
      cout<<"\nthe total cost is:"<<totalamount;
      goto start;
      totalamount=c+d;
      cout<<"\nthe total cost is:"<<totalamount;
      goto start;
      totalamount=s+r;
      cout<<"\nthe total cost is:"<<totalamount;
      goto start;
      totalamount=k+m;
      cout<<"\nthe total cost is:"<<totalamount;
      goto start;
      totalamount=w+q;
      cout<<"\nthe total cost is:"<<totalamount;
      goto start;
    
    

    return 0;
}


