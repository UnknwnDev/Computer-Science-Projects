#include <iostream>
#include <string>

using namespace std;

void url_braker(string url); 


int main(){

    string url;

    cout << "Enter URL here: ";
    cin >> url; 
    cout << "\n"; 

    url_braker(url);

}

void url_braker(string url){
    string scheme;
    string authority;
    string path;

    string temp;
    // Gets Scheme
    for (int i = 0; i < url.length(); i++){
        if (url[i] != ':'){
            temp += url[i];
            if (url[i + 1] == ':'){
                scheme = temp; 
            }
        }
    }

    url.erase(0, scheme.size() + 3);
    temp = "//";
    
    //Gets Authority
    for (int i = 0; i < url.length(); i++){
        temp += url[i];
        if (url[i + 1] == '/'){
            authority = temp;
            break;
        }
    }
    
    url.erase(0, authority.size() - 1);
    path = url;

    cout << "scheme = " << scheme << ":\n";
    cout << "authority = " << authority << "\n";
    cout << "path = " << path << "\n";
}