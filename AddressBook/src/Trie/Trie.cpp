#include <bits/stdc++.h>
#include "Trie.h"

using namespace std;

Trie::Trie()
{
	this->isLeaf = false;
	this->address = "";
	for (int i = 0; i < ALPHABET_SIZE; i++)
		this->character[i] = nullptr;
}

void Trie::insert(string name, string address)
{
    // start from root node
    Trie* curr = this;
    for (int i = 0; i < (int)name.length(); i++)
    {
        // create a new node if path doesn't exists
    	// don't care about spaces
    	if(name[i] >= 'a' && name[i] <= 'z') {
    		 if (curr->character[name[i] - 'a'] == nullptr)
				curr->character[name[i] - 'a'] = new Trie();

			// go to next node
			curr = curr->character[name[i] - 'a'];
    	}
    }

    // mark current node as leaf
    curr->isLeaf = true;
    curr->address = address;
}

string Trie::search(string name)
{
    // return false if Trie is empty
    if (this == nullptr)
        return "";

    Trie* curr = this;
    for (int i = 0; i < (int)name.length(); i++)
    {
        // go to next node
    	// don't care about spaces
        if(name[i] >= 'a' && name[i] <= 'z'){
        	curr = curr->character[name[i] - 'a'];

			// if string is invalid (reached end of path in Trie)
			if (curr == nullptr)
				return "";
        }
    }

    // if current node is a leaf and we have reached the
    // end of the string, return true
    return curr->address;
}

bool Trie::haveChildren(Trie const* curr)
{
    for (int i = 0; i < ALPHABET_SIZE; i++)
        if (curr->character[i])
            return true;    // child found

    return false;
}

void Trie::bfs() {
	queue<pair<Trie *, char>> q;
	q.push({this, '#'});

	while(!q.empty()) {
		pair<Trie *, char> element = q.front(); q.pop();
		Trie* curr = element.first; char parent = element.second;

		cout << "parent: " << parent << " children: ";
		for(int i = 0; i < ALPHABET_SIZE; i++) if(curr->character[i] != nullptr) {
			cout << (char) ('a' + i) << " ";
			q.push({curr->character[i], 'a' +  i});
		}

		cout << "\n";
	}
}

void Trie::visualize()
{
	// visualize trie levels using BFS algorithm
	bfs();
}

