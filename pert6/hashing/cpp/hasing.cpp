#include<iostream>
#include<string>
using namespace std;

class PwdMan {
    private: 
        int storedHash;
    public:
        int simpleHash(const string& password){
            int hash = 0;
            for (char ch : password){
                hash += static_cast<int>(ch);
            }
            return hash % 100;
        }

        void setPass(const string& password){
            storedHash = simpleHash(password);
            cout << "PASSWORD SET OKE" << endl; 
        }

        bool verifyPass(const string& inputPassword){
            return storedHash == simpleHash(inputPassword);
        }
};

int main(){
    PwdMan pwdMan;
    string password;
    cout << "enter password" << endl;
    cin >> password;
    pwdMan.setPass(password);

    string inputPassword;
    cout << "enter password to verify" << endl;
    cin >> inputPassword;
    if(pwdMan.verifyPass(inputPassword)){
        cout << "correct" << endl;
    }else {
        cout << "incorrect" << endl;
    }
    return 0;
}