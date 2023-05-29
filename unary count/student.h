#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) const {
  //you may write additional code here
  if (n==NULL) return 0;
  else if (n->right==NULL && n->left!=NULL) return process(n->left)+1;
  else if ((n->right!=NULL && n->left==NULL)) return process(n->right)+1;
  else {
    return process(n->left)+ process(n->right);
  }

}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  //write your code here
  if (mSize==0) return 0;
  else if (mSize==1) return 0;
  return process(mRoot);
}

#endif
