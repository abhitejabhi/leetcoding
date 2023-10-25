class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans=0;
       while(mainTank>0)
       {
           if(mainTank-5>=0)
           {
               ans+=50;
               mainTank-=5;
               if(additionalTank>0)
               {
                   mainTank++;
                   additionalTank--;
               }
           }else if(mainTank>0)
           {
               ans+=(mainTank*10);
               mainTank=0;
           }
       }
        return ans;
    }
};