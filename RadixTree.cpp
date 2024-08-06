#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

template <typename ValueType>
class RadixTree {
public:
 RadixTree(){
    //root = new Node;
  //  std::unordered_map<std::string,ValueType&> tree;
 };
 ~RadixTree(){

 };
 void insert(std::string key, const ValueType& value){
 //    int copy= value;
    tree[key] = new ValueType(value);
    //  bool cont = true;
    //  Node* p = root;
    //  for(int i =0;i<key.size();i++){
    //      int ascii = int(key.at(i));
    //     if (p->child[ascii] != nullptr && extra.empty()){
    //         p = child[ascii];
    //         continue;
    //     }
    //     else if(p->child[ascii] != nullptr && !extra.empty()){
    //         if (extra.size())
    //         for(int j =i;j<key.size();j++){
                
    //         }
    //     }
    //     else{
    //         p->extra = key.substr(i);
    //         p->end = true;
    //         p->val = value;
    //         break;
    //     }
    //  }
 };
 ValueType* search(std::string key) const{
    if(tree.empty())
        return nullptr;
    auto it = tree.find(key);
    if (it == tree.end()){
        return nullptr;
    }
    else return (it->second);
 };
 private:
    std::unordered_map<std::string,ValueType *> tree;
    // struct Node{
    //     vector<Node*> child(128,nullptr);
    //     string extra ="";
    //     bool end = false; 
    //     ValueType val = ValueType();
    // }
    //Node* root;   
};

int main(){
    RadixTree<int> tree;
    tree.insert("andrew",59);
    tree.insert("arvin",1);
    std::cout << *(tree.search("arvin")) << std::endl;
    std::cout << *(tree.search("andrew")) << std::endl;
}