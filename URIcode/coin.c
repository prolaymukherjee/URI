#include<iostream>

int s[100];
int arraySize = 10;

using namespace std;

void testSort(){
    for(int i = 0; i < arraySize; i++){
        int index = i;
        for(int j = 0; j < i; j++){
            if(s[index] > s[j]){
                int temp = s[index];
                s[index] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main(){
    int c;
    cout << "Enter the MAX COIN: ";
    cin >> c;
    cout << "Enter the number of coin: ";
    cin >> arraySize;
    cout << "Enter the coins: " << endl;
    for(int i = 0; i < arraySize; i ++){
        cin >> s[i];
    }

    testSort();

    int i = 0;
    while (c>0){
        int num = c / s[i];
        c = c-num*s[i];
        if(s[i]!=0){
            cout << "Coins " << s[i] << " Percentage " << num << endl;
        }
        i++;
        if(i == arraySize){
            break;
        }
    }
}
