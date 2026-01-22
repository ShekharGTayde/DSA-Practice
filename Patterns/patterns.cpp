#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
         for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
         for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

//print9 is the combination of print7 and print8
// int main(){
//     int n ;
//     cin>>n;
//     print7(n);
//     print8(n);
//     return 0;
// }

void print10(int n){
    for(int i=1;i<=2*n -1;i++){
        int star = i;
        if(i>n) star = 2*n - i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print11(int n){
    int start = 1;
    for(int i=0;i<=n;i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1 - start; // toggle between 0 and 1
        }
        cout<<endl;
    }
}

void print12(int n){
    int space = 2* (n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2; // decrease space by 2 for the next row
    }
}

void print13(int n){
    int num=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}

void print14(int n){
    for(int i=0;i<=n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print15(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+(n-i-1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print16(int n){
   for(int i=0;i<=n;i++){
        char ch = 'A'+i;
        for(char j=0;j<=i;j++){
            cout<<ch<<" ";
            }
        cout<<endl;
    }
}

void print17(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //character
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=  2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print18(int n){
    for(int i=0;i<n;i++){
        for(char j='E'-i;j<='E';j++){
            cout<<j;
        }
        cout<<endl;
    }
}

//print19 is the combination of 19A nad 19B
void print19A(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //space
        
      
        for(int j=1;j<=2*i;j++){
            cout<<" ";
           
        }
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print19B(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=2*(n-i-1);j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print20(int n){
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int star = i;
        if(i>=n) star = 2*n -i;
        //star
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //star
         for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space -=2;
        else space +=2;
    }
}

void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int bottom = (2*n-2) - i;
            cout<<(n-min(min(top, left), min(right, bottom)))<<" ";
    }

    cout<<endl;
}
}

void vectors(){
    vector<int> v(3,100);
    v.insert(v.begin()+1,2,5);

    for(auto it:v){
        cout<< it << " ";
    }
}


int main(){
    
    vectors();
    // p2(n);a
}
