constexpr i64 INF = 1E18;
constexpr int N = 1E6 + 10;

int trie[N][26];
int val[N];
bool exist[N];
int tot;

int newNode() {
    tot++;
    fill(trie[tot], trie[tot] + 26, 0);
    val[tot] = 0;
    return tot;
}

void insert(string s) {
    int p = 1;
    int l = s.length();
        
    for (int i = 0; i < l; i++) {
        int x = s[i] - 'a';
        if (!trie[p][x]) {
            trie[p][x] = newNode();
        }

        p = trie[p][x];
        val[p]++;
    }

    exist[p] = true;
}

int query(string s) {
    int p = 1;
    int l = s.length();

    for (int i = 0; i < l; i++) {
        int x = s[i] - 'a';
        if (!trie[p][x]) return 0;
        p = trie[p][x];
    }

    return val[p];
}

/*
    tot = 0;
    newNode();
*/