#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count(node* n) {
    /*if ((n->right == NULL)) {
        std::cout << "l ";
            return 1;

    }*/
    if (n==NULL) {
            //std::cout << "n ";
            return 0;

    }
    else if ((n->right)==NULL && (n->left)==NULL) {
        //std::cout << "l ";
        return 1;
    }
    else {
        //std::cout << "c ";
        return leaves_count(n->left)+leaves_count(n->right);

    }
}


template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count() {
  //write your code here
  if (mSize==0) return 0;
  else if (mSize==1) {
        //std::cout << "2 ";
        return 1;
  }
  else if (mSize>1) { //std::cout << "3 ";
        return leaves_count(mRoot);
  }

}


#endif
