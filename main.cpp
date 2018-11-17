#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void switch_array(char arr1 [], int b1, int b2)
{
    char temp;
    if (b1 >= b2)
        cout << "The array after switch is : " << arr1 << endl;
    else
    {
        temp = arr1[b1];
        arr1[b1] = arr1[b2];
        arr1[b2] = temp;
        switch_array(arr1, b1+1, b2-1);
    }
}
void switch_string(string a , int b3 , int b4){
int len= a.length();
char newarray[len];
strcpy(newarray,a.c_str());
switch_array(newarray, b3 , b4);



}
int main()
{
    char arr[6] {'A', 'B', 'C', 'D', 'E','\0'};
    string arrs = "abcde";
    switch_array(arr, 1, 4);
    switch_string(arrs,1,4);


    return 0;
}
