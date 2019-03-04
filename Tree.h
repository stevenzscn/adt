#ifndef _TREE_H_
#define _TREE_H_

struct TreeNode {
    int value = 0;
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;
};

enum TraversalType {
    PRE_ORDER = 0,
    IN_ORDER = 1,
    POST_ORDER = 2,
    LEVEL_ORDER = 3,
};

void PrintTree(const TreeNode *root, int traType = 0);

#endif
