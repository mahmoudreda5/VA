#include <bits/stdc++.h>
#include "Trie.h";

using namespace std;

Trie::Trie() {
	this->isLeaf = false;
	for (int i = 0; i < ALPHABET_SIZE; i++)
		this->character[i] = nullptr;
}

void Trie::insert(string key)
{
    // start from root node
    Trie* curr = this;
    for (int i = 0; i < key.length(); i++)
    {
        // create a new node if path doesn't exists
        if (curr->character[key[i]] == nullptr)
            curr->character[key[i]] = new Trie();

        // go to next node
        curr = curr->character[key[i]];
    }

    // mark current node as leaf
    curr->isLeaf = true;
}

bool Trie::search(string key)
{
    // return false if Trie is empty
    if (this == nullptr)
        return false;

    Trie* curr = this;
    for (int i = 0; i < key.length(); i++)
    {
        // go to next node
        curr = curr->character[key[i]];

        // if string is invalid (reached end of path in Trie)
        if (curr == nullptr)
            return false;
    }

    // if current node is a leaf and we have reached the
    // end of the string, return true
    return curr->isLeaf;
}

bool Trie::haveChildren(Trie const* curr)
{
    for (int i = 0; i < ALPHABET_SIZE; i++)
        if (curr->character[i])
            return true;    // child found

    return false;
}
