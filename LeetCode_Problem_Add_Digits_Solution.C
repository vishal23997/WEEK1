

int addDigits(int num){
    if(num<=0)
        return 0;
    if(num>0 && num<10)
        return num;
    int rem=0,sum=0;
    if(num>=10)
    {
        while(num!=0)
        {
            rem=rem+num%10;
            num/=10;
            if(num==0)
            {
                if(rem>9)
                {
                    num=rem;
                    rem=0;
                }
            }
        }  
    }
    return rem;
}
