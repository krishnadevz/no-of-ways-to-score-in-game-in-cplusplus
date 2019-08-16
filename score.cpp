#include<iostream>
#include<string>
using namespace std;

typedef long long int LL;

LL countWays(LL score)
{
    LL i;

    //create an array to store the calculated results for smaller score
    LL result[score+1];

    //result[i]=no. of ways to reach score i

    //initialization
    result[0]=1;   //since, there is only one way to reach NIL score is to don't make any move

    //initialize result[0]=0 for all other values
    for(i=1;i<=score;i++)
        result[i]=0;

    //First count the ways to reach the score i using only 3
    for(i=3;i<=score;i++)
        result[i]+=result[i-3];

    //Now, count the ways using move 5
    for(i=5;i<=score;i++)
        result[i]+=result[i-5];

    //now, the final result will be calculated
    for(i=10;i<=score;i++)
        result[i]+=result[i-10];

    return result[score];
}

    // the function checks the validation of the input
LL readInt(){
    string s;
    cin>>s;
    if(s.size() > 6)
        return -1;
    for (int i = 0; i < s.size(); i++) 
        if (isdigit(s[i]) == false) 
            return -1; 
  
    return stoll(s); 
}

int main()
{
    LL score;

    cout<<"Enter the score"<<endl;
    score = readInt();

/*
    Range of input allowed reduces to 1e6 as an array of length score+1 is
    being created and limited space on the disc limits the size of integer array
    that can be created.
*/

    if(score < 0)
        cout<<"Please enter a positive number in the limits of 1e6 \n";
    else {
        cout<<"No. of ways to reach the given score are"<<endl;
        cout<<countWays(score)<<endl;
    }

    return 0;
}
