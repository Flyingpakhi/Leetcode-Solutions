class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie {
    TrieNode *root;

   public:
    Trie() { 
        root = new TrieNode('\0'); 
    }
    void insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        insertWord(child, word.substr(1));
    }
    void insert(string word) {
        insertWord(root, word); 
    }
    bool searching(TrieNode*root,string word) {
        if(word.size()==0){
            if(root->isTerminal==true){
                return true;
            }
            else{
                return false;
            }
        }
        int index=word[0]-'a';
        TrieNode* child;
        if(root->children[index]==NULL){
            return false;
        }
        child=root->children[index];
        return searching(child,word.substr(1));
    }
    bool search(string word) {
        return searching(root,word);
    }
     bool start(TrieNode*root,string word) {
        if(word.size()==0){
            return true;
        }
        int index=word[0]-'a';
        TrieNode* child;
        if(root->children[index]==NULL){
            return false;
        }
        child=root->children[index];
        return start(child,word.substr(1));
    }
    
    bool startsWith(string prefix) {
        return start(root,prefix);
    }
};