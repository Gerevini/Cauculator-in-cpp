#include <iostream>
#include <string>


using namespace std;


int Sum(char *x, char *y){
    
    int z = atoi(x);
    int w = atoi(y);
    return z + w;
}



int Decrase(char *x, char *y){
    
    int z = atoi(x);
    int w = atoi(y);
    return z - w;
}


int Division(char *x, char *y){
    
    int z = atoi(x);
    int w = atoi(y);
    return z/w;
}


int Multiplication(char *x, char *y){
    
    int z = atoi(x);
    int w = atoi(y);
    return z*w;
}

int main(int argc, char *argv[]){   
    if(std::string(argv[1]) == "Sum"){
        cout << Sum(argv[2], argv[3]);
    }
        if(std::string(argv[1]) == "Decrase"){
        cout << Decrase(argv[2], argv[3]);
    }
        if(std::string(argv[1]) == "Division"){
        cout << Division(argv[2], argv[3]);
    }
        if(std::string(argv[1]) == "Multiplication"){
        cout << Multiplication(argv[2], argv[3]);
    }
}