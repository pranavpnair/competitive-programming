Node* MergeLists( Node* a, Node* b)
{
  Node* result = NULL;
 
  /* Base cases */
  if (a == NULL)
     return b;
  else if (b==NULL)
     return a;
 
  /* Pick either a or b, and recur */
  if (a->data <= b->data)
  {
     result = a;
     result->next = MergeLists(a->next, b);
  }
  else
  {
     result = b;
     result->next = MergeLists(a, b->next);
  }
  return result;
}
