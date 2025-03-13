#include <iostream>
using namespace std;

int arr[15];
int n; //input jumlah data

void inputData(){
    while(true){
        cout << "Masukan Jumlah Data : ";
        cin >> n;

        if (n < 15){
            break;
        }
        else{
            cout << "Jumlah Data Maksimal 15" << endl;
        }
    }

    cout <<"==============" << endl;
    cout << "Masukkan Data" << endl;
    cout <<"==============" << endl;
    cout << endl;

    for (int i = 0; i < n; i++){
        cout << "Masukkan Data Ke- " << i + 1 << "=";
        cin >> arr[i];
    }

}

void bubbleSort(){
    int pass = 1; 
    do 
    {
    
        for (int j = 0; j <= n - 1 - pass; j++)
        {
        if(arr[j] > arr[j+1]){
            int temp;
            temp = arr[j];
            arr[j] = arr [j + 1];
            arr[j + 1] = temp;
        }
    }
    
      pass = pass + 1;
    }while (pass <= n - 1);
}
void displaysData (){
    cout << endl;
    cout << "===============" << endl;
    cout << "Data Setelah diurutkan" << endl;
    cout <<  "===============" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke- " << i + 1 << "=" << arr[i] << endl;
    }
}

int main()
{
    inputData();
    bubbleSort();
    displaysData();
    return 0;
}