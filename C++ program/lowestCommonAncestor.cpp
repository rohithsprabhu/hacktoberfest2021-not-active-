
int par[800005][26]; // binary lifting array

// LCA: returns lowest common ancestor of two nodes in O(logN) time where N is size of a tree.
// Needs to have par matrix initialized, it takes O(logN) time as well. Skiped implementation, since data may be inputed differently.
int LCA(int a, int b){
    if(level[a]<level[b])swap(a,b);
    int old_a = a;
    int old_b = b;
    // always lift a, a will be deeper

    int lift_a_by = level[a] - level[b];

    for(int bit=0;bit<26;bit++){
        if(lift_a_by & (1<<bit)){
            a = par[a][bit];
        }
    }

    if(a == b){
        go_up[old_a] = max(level[old_a] - level[old_b], go_up[old_a]);
        //cout << "a, b :" << old_a + 1 << " " << old_b  + 1<< " has dif : " << level[old_a] - level[old_b] <<  endl;
        return;
    }

    // lift both
    for(int bit=25;bit>=0;bit--){
        if(par[a][bit] == par[b][bit])continue;
        a = par[a][bit];
        b = par[b][bit];
    }

    return par[a][0];
}
