#include <bits/stdc++.h>

int findUnique(int *arr, int size) 

{   

      int ans = 0;    

      std::unordered_map<int, int> mp;   

      for (int i = 0; i < size; i++)  

      {        

              mp[arr[i]]++;   

       }    

       for (auto i : mp) 

       {        

              if (i.second == 1) {           

                    ans = i.first;       

               }   

         }    

         return ans;

 }  
