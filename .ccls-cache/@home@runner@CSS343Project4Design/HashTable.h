#ifndef HASHTABLE_H
#define HASHTABLE_H

template <class T>
class hashTable {
  public:
    hashTable();
    void put(char key, T value);
    T get(char key);
    void remove(char key);
    
  private:
    // hash a char A-Z as int 0-25
    int hash(char letter);
    // holds char A-Z as 0-25
    int array[26];
};

#endif // HASHTABLE_H