#include<iostream>
using namespace std;

int countWays(int score)
{
    int i;

    //create an array to store the calculated results for smaller score
    int result[score+1];

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

int main()
{
    int score;

    cout<<"Enter the score"<<endl;
    cin>>score;

    cout<<"No. of ways to reach the given score are"<<endl;
    cout<<countWays(score);

    cout<<endl;
    return 0;
}
