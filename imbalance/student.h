// Your code here
#include <math.h>

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    //maxx = {minus,*data}
    //ถ้าผลต่างลูกซ้ายขวา มากกว่า ตัวที่เก็บผลต่าง max -> เปลี่ยนเป็นตัวนั้น
    //ถ้าผลต่่างเท่ากัน ก้เอาตัวที่ *data นเอยกส่า
    //get height ของซ้ายขวามาลบกัน
    if (mSize==1) return mRoot->data;
    else {
        pair<int, KeyT> maxx = {0,mRoot->data};
        compare(n,maxx);
        maxx = find_max(n->left,maxx);
        maxx = find_max(n->right,maxx);
        return maxx.second;
        //node* n = mRoot;
        //while ()
    }
}

int get_height(node *n) {
    if (n==NULL) return -1;
    else return 1 + max(get_height(n->left), get_height(n->right));
}

pair<int, KeyT> diff(node* n) {
    if (n==NULL) return {-2,0};
    else {
        int dif = abs(get_height(n->left) - get_height(n->right));
        return {dif,n->data};

    }
}

pair<int, KeyT> compare(pair<int, KeyT> p1, pair<size_t, *node> p2) {
    if (p1.first < p2.first) return p2;
    else if (p2.first < p1.first) return p1;
    else {
        if (p2.second < p1.second) return p2;
        return p1;
    }
    return p1;
}

pair<size_t, *node> find_max(node* n, pair<size_t, *node> maxx){
    if (n==NULL) return {0,mRoot->data};
    else {

        maxx = compare(find_max(diff(n)),maxx);
        return maxx;

    }
}



