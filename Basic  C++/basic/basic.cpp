//first program in c++

// #include<iostream>
// if there are multiple libraries is in used then we dont write include and library name instead we write bits
#include<bits/stdc++.h>

using namespace std;
//instead of using std everytime we can use using namespace std;

int main(){
    int x;
    cin >> x;
    cout << "Your input is " << x << endl;
    // std::cout << "Good Morning" << std::endl;
    // std::cout << "Shekhar Tayde" << std::endl;

    cout << "Good Morning" << endl;
    cout << "Shekhar Tayde" << endl;
    return 0;
}


//data types in c++
#include<bits/stdc++.h>

using namespace std;
int main(){
    //integer values represented by int, long, long long
    int x = 10;
    cout << "The value of x is: "  << x << endl;
    //lonbg is used for large integer values
    long y = 11111111;
    cout << "The value of y is: "  << y << endl;
    
    //decimal values represented by float and double
    float a = 10.44;
    cout << "The value of a is: "  << a << endl;
    double b = 10.4444444444444444;
    cout << "The value of b is: "  << b << endl;
    
    //character values represented by char
    char c = 'A';
    cout << "The value of c is: "  << c << endl;

    //string values represented by string and getline
    string s ; //it just get word before space
    cin >> s;
    cout << "The value of s is: "  << s << endl;
    //getline is used to get the whole line including spaces
    // string s;
    // getline(cin, s);  
    // cout << "The value of s is: "  << s << endl;

    //boolean values represented by bool
    bool d = true;
    cout << "The value of d is: "  << d << endl;

}


//conditions 
#include<bits/stdc++.h>

using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout << "you are adult"<<endl;

    }else{
        cout << "you are not adult"<<endl;
    }
    return 0;
}

//switch statement
#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6: 
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid day"<<endl;
    }
    return 0;
}


//2D Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][5];
    //first valur defines the rowand second value defines column
    arr[1][3]=66;
    cout<<arr[1][3];
    return 0;
}

//for loop
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int i;
    for(i=0;i<=10;i++){
        cout<<"Hello World"<<endl;
    }
return 0;
}

while loop
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int i=1;
    while(i<=10){
        cout<<"Hello World"<<i<<endl;
        i+=5;
    }
return 0;
}

// do while loop (cond does't match it run at least once)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i =3;
    do{
        cout<<"Hello World "<<i<<endl;
        i++;
    }while(i<=2);
    return 0;
}

//functions
#include<bits/stdc++.h>
using namespace std;
//in cpp function we dont need to write function keyword
int sum(int num1,int num2){
    return num1+num2;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int res = sum(num1,num2);
    cout<<"The sum is: "<<res<<endl;
    return 0;
}

//pass by value(it deals with copy of value)
#include<bits/stdc++.h>
using namespace std;

void doSomething(int a){
    cout<<"The value of a  is: "<<a<<endl;
    a+=5;
    cout<<"The value of a  is: "<<a<<endl;
    a+=5;
    cout<<"The value of a  is: "<<a<<endl;
};
int main(){
    int a=5;
    doSomething(a);
    cout<<"The value of a is: "<<a<<endl;
    return 0;
}

//pass by reference(it deals with original value it done by just adding &)
#include<bits/stdc++.h>
using namespace std;

void doSomething(int &a){
    cout<<"The value of a  is: "<<a<<endl;
    a+=5;
    cout<<"The value of a  is: "<<a<<endl;
    a+=5;
    cout<<"The value of a  is: "<<a<<endl;
};
int main(){
    int a=5;
    doSomething(a);
    cout<<"The value of a is: "<<a<<endl;
    return 0;
}



