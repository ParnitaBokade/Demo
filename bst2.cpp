#include <iostream>
#include <iostream>
#include <map>
using namespace std;
class Red_Black_Tree{
private:
    map<int,string> tree;
public:
    void Insert(){
        int key;
        cout<<"Insert key : ";
        cin>>key;
        string val;
        cout<<"Value: ";
        cin>>val;
        tree[key]=val;
    }
    void Erase(){
        int key;
        cout<<"Insert the key to be deleted:";
        cin>>key;
        tree.erase(key);
    }
    string Search(int key){
        auto a=tree.find(key);
        return a!=tree.end()?a->second :"Key not found";
    }
    void Display(){
        cout<<"Red Black Tree:"<<endl;
        for(const auto& pair:tree){
            cout<<"Key: "<<pair.first<<", Value: "<<pair.second<<endl;
        }
    }
};
int main(){
    Red_Black_Tree RBT;
int select;
        while(true)
        {
            cout<<"Enter 1. To insert"<<endl<<"Enter 2. To delete"<<endl<<"Enter 3. To display"<<endl<<"Enter 4. To stop the execution of red black tree"<<endl;
            cout<<"Enter the operation no.: ";
            cin>>select;
            if(select==1){
                RBT.Insert();
                RBT.Display();
            }
            else if(select==2)
            {
                RBT.Erase();
                RBT.Display();
            }
            else if(select==3)
            {
                RBT.Display();
            }
            else if(select==4)
            {
                exit(0);
            }
            else
            {
                cout<<"Please enter the correct choice.";
            }
        }
    RBT.Display();
    return 0;
}