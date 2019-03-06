#include <iostream>
#include<cstring>
using namespace std;
bool Permutation(char *s1,char *s2){
    int l1=strlen(s1);
    int l2=strlen(s2);
    if(l1!=l2)
        return false;
    int freq[25]={0};
    for(int i=0;i<l1;i++){
    freq[s1[i]-'a']+=1;
    }
    for(int i=0;i<l2;i++){
    freq[s1[i]-'a']-=1;
    }
    for(int i=0;i<l1;i++){
     if(freq[i]!=0)
        return false;
    }
    return true;

}
int main()
{
    char s1[10],s2[10];
    cout<<"Enter first string :";
    cin.getline(s1,10);
    cout<<"\nEnter the second string :";
    cin.getline(s2,10);
    if(Permutation(s1,s2))
        cout<<"\nThey are permutation";
    else
        cout<<"\nThey are not permutations";
}
