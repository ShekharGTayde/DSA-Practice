// hashing is concept about how many times num is availabe in array .
// it is done by using pre storing and fetching.


// normal approach
#include<bits/stdc++.h>
using namespace std;
int number(int n,int x,int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x) count=count+1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;

    int x;
    cin>>x;
  
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int result = number(n,x, arr);
    cout << result << endl;
    return 0;
}


// hashing approach
#include<bits/stdc++.h>
using namespace std;

int main(){
    //declaring no of elements
    int n;
    cin>>n;
    //declaring the array
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

   //declaring hash
   int hash[13]={0};
   for(int i=0;i<n;i++){
         hash[arr[i]]++;
   }


    //declaring no of queries
    int q;
    cin>>q;
    
    //declaring the element to be searched
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }

return 0;
}



// hashing approach with character
#include<bits/stdc++.h>
using namespace std;
int main(){
    //no of elements
    string s;
    cin>>s;
   
    
    //hash declare
    int hash[26]={0};//we use 26 because of lower case char it is 26 letters in alphabet.if we have no criteria to lower case then we write 256 hash it include all char
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++; //it uses ASC key to conver chaar into int
    }
     
    //no of quries
    int q;
    cin>>q;
    //no of elements prints
    while (q--)
    {
       char c;
       cin>>c;
       cout<<hash[c-'a']<<endl;
   }
   return 0;


}


// using map for beyond array limit
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
//pre compute
map<int,int>mpp;
for(int i=0;i<n;i++){
    mpp[arr[i]]++;
}

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}



//char hashing by using map
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
  
    //pre compute
    map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<mpp[c]<<endl;
    }
}


