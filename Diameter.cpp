
void getMaxDepth(BSN* t)
{
	if (!t) return 0;

	return 1 + max(getMaxDepth(t->mRight), getMaxDepth(t->mLeft) );
}


/* Function to get diameter of a binary tree */
int diameter(struct node * tree)
{
   /* base case where tree is empty */
   if (tree == NULL)
     return 0;
 
  /* get the height of left and right sub-trees */
  int lheight = height(tree->left);
  int rheight = height(tree->right);
 
  /* get the diameter of left and right sub-trees */
  int ldiameter = diameter(tree->left);
  int rdiameter = diameter(tree->right);
 
  /* Return max of following three
   1) Diameter of left subtree
   2) Diameter of right subtree
   3) Height of left subtree + height of right subtree + 1 */
  return max(lheight + rheight + 1, max(ldiameter, rdiameter));
} 
 
 
int maxPath(BSN* t)
{
	if (!t) return 0;

	return max(
		getMaxDepth(t->mRight) + getMaxDepth(t->mLeft) + 1, 
		maxPath(t->mRight), 
		maxPath(t->mLeft) );
}

main()
{
	maxPath(root);

	cout << "maxLen =" << ml << endl;
}