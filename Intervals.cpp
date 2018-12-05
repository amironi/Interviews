def hasOverlapped(a,b):
    return a.end >= b.start

vector<Point> InterSection( vector<Point>& a, vector<Point>& b ) {
    vector<Point> ret;

    int i = 0;
    int j = 0;

    while( i < a.size() && 
           j < b.size()) {
        if (hasOverlapped( a[i], b[j] )) {
            int x = max(a[i].start, b[j].start);
            int y = min(a[i].end, b[j].end);
            ret.push( point(x,y));
        }

        if (b[j] >= a[i] ) 
            i++;
        else 
            j++;
    }

    return ret;
}
