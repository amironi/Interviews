
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
     if (node == NULL) return;
     printInorder(node->left);
     printf("%d ", node->data);  
     printInorder(node->right);
}
 

 /* Iterative function for inorder tree traversal */
void printInorder(struct tNode *t)
{
  while (1)
  {
    /* Reach the left most tNode of the current tNode */
    if(t !=  NULL)
    {
      /* place pointer to a tree node on the stack before traversing 
        the node's left subtree */
     	s.push( t);                                               
        t = t->left;  
    }
    else                                                             
    {
      if (!s.isEmpty())
      {
        current = s.pop();
        
        printf("%d ", current->data);
 
        current = current->right;
      }
      else
        return; 
    }
  } 
}     

struct node * inOrderSuccessor(node *root, node *n)
{
  if( n->right != NULL )
    return minValue(n->right);
 
  node *p = n->parent;

  while(p && n != p->left)
  {
     n = p;
     p = p->parent;
  }
  return parent;
}
