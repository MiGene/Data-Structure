#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
    if (n==NULL) return -1;
    //else if (n==mRoot) return std::min(shallowest_leaf(n->left),shallowest_leaf(n->right));
    //else if (n==mRoot && (n->left==NULL or n->right==NULL)) return 1+ std::max(shallowest_leaf(n->left),shallowest_leaf(n->right));
    else if (n->left==NULL or n->right==NULL) return 1+ std::max(shallowest_leaf(n->left),shallowest_leaf(n->right));
    else {
        return 1+ std::min(shallowest_leaf(n->left),shallowest_leaf(n->right));
    }

}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  //write your code here
  if (empty()) return -1;
  if (mSize == 1) return 0;
  return shallowest_leaf(mRoot);
}


#endif
