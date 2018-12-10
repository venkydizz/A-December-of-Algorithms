#include <iostream>

using namespace std;

int main()
{
    int ab,bc,ca,pq,qr,rp,ABC,PQR,BCA,QRP,CAB,RPQ,count=0,angcount=0;
    cout<<"enter the sides of triangle ABC";
    cin>>ab>>bc>>ca;
   
    cout<<"enter the sides of triangle PQR";
    cin>>pq>>qr>>rp;
     
    cout<<"now enter the angles ABC,BCA,CAB";
    cin>>ABC>>BCA>>CAB;
   
    cout<<"now enter the angles PQR,QRP,RPQ";
    cin>>PQR>>QRP>>RPQ;
    
    //SSS similarity
    if((ab/pq==bc/qr)&&(bc/qr==ca/rp)&&(ab/pq==ca/rp))
    {
        count++;

    }
    
    
    //SAS similarity
    if(ab/pq==bc/qr){
       if(ABC==PQR)
       {
       angcount++;
           
       }
    }
        
     if(bc/qr==ca/rp)
     {
        if(BCA==QRP)
       {
           angcount++;
       }
     }
    if(ab/pq==ca/rp)
    {
      if(CAB==RPQ)
      {
       angcount++;
    }}
    if(angcount>0)
    {
        count++;
    }
    
    
    
    //AAA similarity
    if((ABC==PQR)||(BCA==QRP)||(CAB==RPQ))
    {
        count++;

    }
    
    
    
    if(count>0)
    {
        cout<<"the triangles are similar";
    }
   





    return 0;
}

