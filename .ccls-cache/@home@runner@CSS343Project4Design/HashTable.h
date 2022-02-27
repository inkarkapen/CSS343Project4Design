#ifndef HASHTABLE_H
#define HASHTABLE_H

class hashTable {
  public:
    hashTable();

    // hash a char A-Z as int 0-25
    int hash(char letter);

  private:
    // holds char A-Z as 0-25
    int array[26];
};

#endif // HASHTABLE_H