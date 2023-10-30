//1.) Accessing 2-D array
/*#include <iostream>
using namespace std;
int main(){
    int a[5][2] = {{0,0},
                    {1,2},
                    {2,4},
                    {3,6},
                    {4,8}};
    for(int i =0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            cout<<"a["<<i<<"]["<<j<<"]:";
            cout<<a[i][j]<<endl;
        }
    }
    return 0;
}*/
//2.) Array Element Swap
/*#include <iostream>
using namespace std;

int main(){
    int size, arr[100], temp, i;
    cout<<"Enter the size of array";
    cin>>size;

    cout<<"Enter the element";
    for(i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"after swapping";
    for(i = 1; i < size; i+=2){
        temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }
    for(i = 0; i< size; i++){
        cout<<arr[i]<<"";
    }

    return 0;
}
*/
//3.)Array of Object
/*#include <iostream>
using namespace std;

class Employee{
    int id;
    char name[30];
    public:

    void getdata();

    void putdata();
};


void Employee::getdata()
{
    cout<<"Enter Id :";
    cin>>id;
    cout<<"Enter Name :";
    cin>>name;
}

void Employee::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << endl;
}


int main()
{
    Employee emp[30];
    int n, i;
    cout<<"Enter Number of Employees - ";
    cin>> n;

    for(i = 0; i < n; i++)
        emp[i].getdata();

    cout << "Employee Data - " <<endl;

    for(i = 0; i < n; i++)
        emp[i].putdata();
}*/
//4.) Sort array
/*#include <iostream>
using namespace std;

int main(){
    int arr[size] = {132, 520, 232, 4343,435,45,567,768,78,8,989 ,2323,232};
    cout<<"Sorted array";

    for(int i = 0; i < size; i++){
        int small = i;
        for(int j = 1; j < size; j++){
            if( j < i){
                small = j;
            }

        }
        swap(i, small);
    }
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"";
    }
    cout<<"\n";
    return 0;
}
*?/
//5.)Array sum & avg
/*#include <iostream>
using namespace std;

int main(){
    int i, inputarray[10], no, pos;

    cout<<"Enter array";
    for(i = 0; i < 10; i++)
    {
        cin>>inputarray[i];
    }
    cout<<"which pos to delete";
    cin>>pos;
    if(pos>10){
        cout<<"Enter a valid number";
    }
    else{
    --pos;
    for(i = pos; i <= 9; i++){
        inputarray[i] = inputarray[i+1];
    }
    cout<<"New array";
    for(i = 0; i < 9; i++){
        cout<<inputarray[i];
        cout<<" ";
    }
    }
}
*/
//6.)Deletuion of array
/*#include <iostream>
using namespace std;

int main(){
    int i, inputarray[10], no, pos;

    cout<<"Enter array";
    for(i = 0; i < 10; i++)
    {
        cin>>inputarray[i];
    }
    cout<<"which pos to delete";
    cin>>pos;
    if(pos>10){
        cout<<"Enter a valid number";
    }
    else{
    --pos;
    for(i = pos; i <= 9; i++){
        inputarray[i] = inputarray[i+1];
    }
    cout<<"New array";
    for(i = 0; i < 9; i++){
        cout<<inputarray[i];
        cout<<" ";
    }
    }
}*/
//7.) Display even number or odd in array
/*#include <iostream>
using namespace std;

int main(){
    int numarr[100], evenarr[100], i, j = 0, k =0, num;
    cout<<"enter the size of array:";
    cin>>num;
    cout<<"array "<<num;
    for(i = 0; i<num; i++){
        cin>>numarr[i];
    }
    for(i = 0; i < num; i++){
        if(numarr[i]%2 == 0){
        //if(numarr[i]%2 != 0 ){ for odd
            evenarr[j] = numarr[i];
            j++;
        }
    }
    cout<<"Even array";
    for(i=0; i<j; i++){
        cout<<evenarr[i]<<" ";
    }
}*/

//8.) Display lower traingle of matrix
/*
#include <iostream>
using namespace std;

void lower_matrix(int mat[10][10], int row){
    int i, j;
    for(i = 0; i <row; i++)
    {
        for( j = 0; j <= i; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int i, j, row, col, mat[10][10];
    cout<<"Enter the number of row and column";
    cout<<"\n";
    cin>>row;
    cout<<"\n";
    cin>>col;
    cout<<"\n";
    cout<<"Enter elements:";

    for(i = 0; i<row; i++)
    {
        cout<<"\n";
        for(j = 0; j<col; j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"\n";
    lower_matrix(mat, row);
    return 0;
}*/

//9.) Display upper half of matrix
/*
#include <iostream>
using namespace std;

void upperhalf_of_matrix(int mat[10][10], int row, int col);
int main(){
    int mat[10][10], i, j, row, col;
    cout<<"Enter the number of roqw and cols ??"<<endl;
    cin>>row>>col;
    cout<<"Enter the elements";
    for(i = 0; i < row; i++){
            cout<<"\n";
        for( j = 0; j < col; j++){
            cin>>mat[i][j];
        }
    }
    upperhalf_of_matrix(mat, row, col);
    return 0;
}

void upperhalf_of_matrix(int mat[10][10], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++){
        for( j = 0; j < col; j++){
            if(i<=j){
                cout<<mat[i][j];
            }
            else{
             cout<<" ";
            }
        }
        cout<<"\n";
    }
}*/

//10.) Identity Matrix
/*#include <iostream>
using namespace std;

int main(){
    int mat[10][10], i, j, flag=0, order;
    cout<<"Enter the size of matrix"<<endl;
    cin>>order;

    cout<<"Enter the element";
    for(i = 0; i < order; i++)
        {
            cout<<"\n";
        for(j = 0; j < order; j++)
        {
             cin>>mat[i][j];
        }
    }
    for(i = 0; i < order; i++)
        {

        for(j = 0; j < order; j++)
        {
             if(i==j)
                {
                if(mat[i][j] != 1)
                {
                    flag = 1;
                    break;
                }
             }

             else
                {
                  if(mat[i][j] != 0)
                  {
                    flag = 1;
                    break;
                  }
        }
    }
}
if(flag==0)
    cout<<"An identity matrix";
else
cout<<"Not an Identity matrix";

return 0;
}*/
//11.) Inverase Matrix using Gauss jordan method
/*#include <iostream>
using namespace std;

int main(){
int i, j, k, n;
float a[10][10], d;

cout<<"Enter the order of matrix";
cin>>n;
cout<<"Enter the elements:"<<endl;
for(i = 1; i<=n; i++)
    for(j =1; j<=n; j++)
    cin>>a[i][j];

for(i=1; i<=n; i++)
    for(j=1; j <= 2*n; j++)
    if(j == (i+n))
       a[i][j] = 1;

for(i=1; i<=n; i++)
    for(j=1; j <= 2*n; j++)
}*/







//12.) Mtarix Addition
/*#include <iostream>
using namespace std;
int main(){
    int m,n,c,d,first[10][10], second[10][10], sum[10][10];

    cout<<"Enter the number of rows and columns of matrix: ";
    cin>>m>>n;
    cout<<"Enter the elements of first matrix: \n";

    for(c=0; c<m;c++)
        for(d=0; d<n;d++)
        cin>>first[c][d];

    cout<<"Enter the elements of second matrix: \n";

    for(c = 0; c<m; c++)
        for(d = 0; d<n; d++)
        cin>>second[c][d];

    for(c = 0; c<m; c++)
        for(d = 0; d<n; d++)
        sum[c][d] = first[c][d] + second[c][d];

    cout<<"Sum of entered matrix:-\n";

    for(c = 0; c<m ; c++){
        for(d = 0; d<n ; d++){
        cout<<sum[c][d]<<"\t";

        cout<<endl;
        }
    }

    return 0;
}
*/
/*
13.) Matrix Multiplication
 #include <iostream>
using namespace std;

int main(){
    int m, n, p, q,i, j, a[10][10], b[10][10], c[10][10];
    cout<<"Enter the rows and cols of 1st matrix ";
    cin>>m>>n;
    cout<<"Enter the rows and cols of 2nd matrix ";
    cin>>p>>q;

    if(n == p){
        cout<<"\nEnter the first matrix\n";
        for(i = 0; i<m; i++){
            for(j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        cout<<"\nEnter the second matrix\n";
        for(i = 0; i<p; i++){
            for(j=0; j<q; j++){
                cin>>b[i][j];
            }
        }

        cout<<"\nMultiplication of matrix\n";
        for(i = 0; i<m; i++){
            for(j =0; j<q; j++){
                c[i][j] = 0;
                for(int k = 0; k < n; k++)
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                cout<< c[i][j]<<"\t";
               }
                cout<<"\n";
            }
        }
        else
        cout<<"\nEnter the same order matrix!!!";
}
*/

//14.) Matrix Transpose
/*(#include <iostream>
using namespace std;

int main(){
    int n,m,i,j, a[10][10], t[10][10];
    cout<<"Enter the order of matrix\n";
    cin>>n>>m;
    cout<<"\nEnter the element of matrix\n";
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin>>a[i][j];
            }
    }
    cout<<"\nEntered Matrix\n";
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cout<<" "<< a[i][j];
            if(j == m-1)
                cout<<endl;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            t[j][i] = a[i][j];
        }
    }


    cout<<"\nTranspose Matrix\n";
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout<<" "<<t[i][j];
           if(j == n-1)
            cout<<endl;
        }
    }

    return 0;
}
*/

//15.)Merging Two Array
/*#include <iostream>
using namespace std;

int main(){
    int i, j , k, s, n, m, a[100], b[100], c[100];
    cout<<"Enter the size of first array\n";
    cin>>n;
    cout<<"\nEnter the elements\n";
    for(i = 0; i < n; i++){
        cin>>a[i];
}
    cout<<"\nEnter the size of second array\n";
    cin>>m;
    cout<<"\nEnter the elements\n";
    for(i = 0; i < m; i++){
        cin>>b[i];
}
    i = 0, j = 0;
for(k = 0; k < n+m; k++){
   if(a[i] < b[j])
   {
       c[k] = a[i];
       i++;
       if(i>n){
        goto b;
       }
   }else{
       c[k] = b[j];
       j++;

       if(j>m){
        goto a;
       }
   }
}

a:
    for(s = i; s < n; s++){
        k++;
        c[k] = a[s];
    }

b:
    for(s = j; s< m; s++){
        k++;
        c[k] = b[s];
   }

   cout<<"\nMerging Array\n";
   for(k = 0; k < n+m; k++){
        cout<<c[k]<<endl;
}
   return 0;

}*/

//16.) Remove Duplicate from Array
/*#include <iostream>
using namespace std;

int main(){
    int i, j , k, n, a[100];
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"\nEnter the elements\n";
    for(i = 0; i < n; i++){
        cin>>a[i];
}
   cout<<"\nOriginal Array\n";
    for(i = 0; i < n; i++)
        {
        cout<<a[i]<<" ";
}

cout<<"\nNew Array\n";
for(i = 0; i < n; i++)
    {
    for(j = i+1; j<n;)
    {
        if(a[j] == a[i])
        {
            for(k = j; k < n; k++){
                a[k] = a[k+1];
            }
            n--;
        }else
        {
            j++;
        }
    }
    }

    for(i = 0; i < n; i++){
        cout<<a[i]<<" ";
   }
   return 0;
}
*/

//17.)Search Array
/*#include <iostream>
using namespace std;

int main(){
    int i, n, m, a[100], flag = 0 ;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"\nEnter the elements\n";
    for(i = 0; i < n; i++){
        cin>>a[i];
}
   for(i = 0; i < n; i++){
        cout<<a[i]<<" ";
}
cout<<"\nEnter the element you want location\n";
cin>>m;
   for(i = 0; i < n; i++){
        if(a[i] == m){
            cout<<"\nElement is present at location\n"<<i + 1;
            flag = 1;
            break;
        }
  }
  if(!flag){
    cout<<"Element s not in array";
  }
return 0;

}*/

//18.)Skew Symmetric matrix
/*#include <iostream>
using namespace std;

int main(){
    int n,m,i,j,a[100][100], t[100][100], s[100][100], flag =0;;
    cout<<"Enter the order of matrix\n";
    cin>>m>>n;
    cout<<"\nEnter the elements\n";
    for(i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        if(j == n-1)
            cout<<endl;
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    cout<<"\nTranspose matrix\n";
    for(i = 0; i < n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<t[i][j]<<" ";
        if(j == n-1)
            cout<<endl;
        }
    }


    for(i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
        {
            s[i][j] = -a[i][j];
        }
    }
    cout<<"\nNegative matrix\n";
    for(i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<s[i][j]<<" ";
        if(j == n-1)
            cout<<endl;
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(t[i][j] == s[i][j])
            {
                flag = 1;
            }
        }
    }

    if(flag =1){
        cout<<"\nIts a skew matrix\n";
    }else{
        cout<<"\nIts not\n";
    }

}*/


//19.)Stack using Array
/*
#include <iostream>
using namespace std;

#define MAX 5
int top, state;

int pop(int stack[])
{

    int value;
    if(top == -1)
    {
        value = 0;
        state =0;
    }
    else
    {
        state = 1;
        value =stack[top];
        --top;
    }
    return value;

}
 void push(int stack[], int item)
 {
     if(top == (MAX - 1))
     {
         state =0;
     }
     else
     {
         state = 1;
         ++top;
         stack[top] = item;
     }
 }

 void showstack(int stack[])
 {
     int i;
     cout<<"\nStack contain\n";

     if(top == -1)
     {
         cout<<"empty";
     }

     else
     {
         for(i=top; i>=0; i--)
            cout<<stack[i]<<"\t";
     }
     cout<<"\n";
 }

 int main()
 {
     int stack[MAX], item;
     int ch;\
     top= -1;

     cout<<"\nSelect one of the following\n";
     cout<<"\n 1.)Push item in stack\n";
     cout<<"\n 2.)Pop item from stack \n";
     cout<<"\n 3.)Exit\n";

     do
     {
       do
       {
           cout<<"\nEnter your choice\n";
           cin>>ch;

           if(ch < 1 || ch > 3)
           {
               cout<<"invalid choice";
           }
       }

       while(ch < 1 || ch > 3);

       switch(ch)
       {
           case 1:
               cout<<"enter element you want to push:";
               cin>>item;
               cout<<item;
               push(stack, item);

               if(state)
               {
                   cout<<"\nafter push operation\n";
                   showstack(stack);

                   if(top == (MAX - 1))
                   {
                       cout<<"\n stack is full \n";
                   }
               }

               else
                cout<<"stack overflow";
               break;
           case 2:
            item = pop(stack);
            if(stack)
            {
                cout<<"popped item is:"<<item<<"\n after pop operation";
                showstack(stack);
            }

            else
                cout<<"stack underflow";
            break;

           default:
            cout<<"Exit";
       }
     }
     while(ch != 3);

     return 0;
 }
*/





