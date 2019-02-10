
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void endLine();

int main(){
    int k=0; //Tree amount
    int a[k]; //Tree array
    
    beginning:
    
    cout<<"Type the amount of tree(s): ";
    cin>>k;
    quebraLinha();
    
        for (int i = 0; i < k; i++) {
        	cout<<"Type the height of the "<<i+1<<"th: ";
        	cin>>a[i];
        	quebraLinha();
	    }
	    
    vector<int> list;
    
        for (int i = 0; i < k; i++) {
            bool verify = true;
            if (i != k - 1) {
                for (int j = 0; j < k - 1; j++) {
                    if (j + 1 == i) {
                        if (a[j] > a[j + 2]) {
                            verify = false;
                            break;
                        }
                    } else if (j > i || j < i) {
                        if (a[j] > a[j + 1]) {
                            verify = false;
                            break;
                        }
                    }
                }
            } else {
                for (int j = 0; j < k - 1; j++) {
                    if (j + 1 < i) {
                        if (a[j] > a[j + 1]) {
                            verify = false;
                            break;
                        }
                    }
                }
            }
            
            if (verify) {
                list.push_back(i + 1);
            }
        }
        
        cout<<"Exists "<< list.size() <<" way(s) to cut, making non-decreasing";
        
        quebraLinha();
        
        if (!list.empty()) {
            cout<<"Cut the tree on the position: ";
            for (int i = 0; i < list.size(); i++) {
                if (i == 0) {
                    cout<<list[i];
                } else {
                    cout<<" or "<<list[i];
                }
            }
        }
        
        string option="0";
        
        quebraLinha();quebraLinha();
        cout<<"Do you want try it again? (1 = Yes /  0 No)";
        quebraLinha();
        
        cin>>option;
        	if(option=="1"){
        		system("cls");
        		goto beginning;
			}else if(option=="0"){
				system("cls");
				system("exit");
			}else{
				system("cls");
				cout<<"Invalid format, the system get down.";
				quebraLinha();
			}
        
}

void endLine(){
	cout<<endl;
}
