void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    size_t round;
    if (mSize%2==1) {
        round = mSize/2 + 1; //? NS
    }
    else {
        round = mSize/2;
    }
    //std::cout << round << " //";

    //CP::list<T>::iterator itend2 = end(); itend2--;
    CP::list<T>::iterator itstart1 = begin();
    CP::list<T>::iterator itend1 = begin();
    CP::list<T>::iterator itstart2 = begin();
    for (int i=0; i<round; i++) {
        ++itstart2;
    }



    //std::cout << *itstart1 << " / " << *itend1 << " / " << *itstart2 << " / " << *itend2 << " / ";


    list1.mSize += round;
    mHeader->next->prev = list1.mHeader->prev;
    list1.mHeader->prev->next = mHeader->next;
    list1.mHeader->prev = itstart2.ptr->prev;
    itstart2.ptr->prev->next = list1.mHeader;

    list2.mSize += (mSize-round);
    itstart2.ptr->prev = list2.mHeader->prev;
    list2.mHeader->prev->next = itstart2.ptr;
    list2.mHeader->prev = mHeader->prev;
    mHeader->prev->next = list2.mHeader;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;

    mSize =0;
    //std::cout << list1.mSize << "/ " << list2.mSize;
}

