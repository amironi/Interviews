

void getMaxDepth(BSN* t)
{
	if (!t) return 0;

	return 1 + max(getMaxDepth(t->mRight), getMaxDepth(t->mLeft) );
}

void maxPath(BSN* t)
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