//
//  main.cpp
//  monedas
//
//  Created by Cindy Canul Canul on 29/06/16.
//  Copyright © 2016 Cindy Canul Canul. All rights reserved.
//

#include <iostream>

using namespace std;

int monedas(int N);

int main() {
   
    int N = 59;
    int x;
    
    
    
    
    x = monedas(N);
    
    
   // cout << x;
    
    if(x == -1){
        cout << "El numero debe estar entre el rango [0,..100000]";
    }
    
    

    
    
    return 0;
}


int monedas(int N){
    int numero = 100000;
    int num10;
    int varnum10,varnum5,varnum2,varnum1,varnum1;
    int divnum10,divnum5,divnum2;
    int restanum10,restanum5,restanum2;


    
    
    if ((N <0) || N > numero){
        return -1;
    }

    
    if(N%10 == 0){
        num10 = N/10;
        cout <<"10: "<< num10;
     
        
    }else{
        
        varnum10 = N%10; // 5
        restanum10 = N - (varnum10); // 40
        divnum10 = restanum10/10;

       
            if(varnum10%5 == 0){
                varnum5 = varnum10/5;
                
                cout <<"10:" << divnum10  <<" 5:"<< varnum5;
            }else{
                varnum5 = varnum10%5;
                restanum5 = varnum10 - (varnum5);
                divnum5 = restanum5/5;
                
                if(varnum5%2 == 0){
                    varnum2 = restanum5/5;
                    
                    cout <<"10:" << divnum10  <<" 5:"<< divnum5 <<" 2:" <<varnum2;
                }else{
                    varnum2 = varnum5%2;
                    restanum2 = varnum5 - (varnum2);
                    divnum2 = restanum2/2;
                    
                    if(varnum2%1 == 0){
                        varnum1 = restanum2/2;
                        
                        cout <<"10:" << divnum10  <<" 5:"<< divnum5 <<" 2:" <<divnum2 <<" 1:" << varnum1;
                    }
                    
                    
                    
                    
                    
                }
                
                
            }
        
        
        
    }
    

    
    return 0;
    
}
