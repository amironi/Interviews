// firewndatl.h : header file
//
/////////////////////////////////////////////////////////////////////////////
// CFireWnd window

class CFireWnd : public CWindowImpl<CFireWnd>
{
private:
	BOOL m_bInOnPalChanged;
protected:
	LRESULT OnPaint(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnPalChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnQueryNewPalette(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

public:
BEGIN_MSG_MAP(CFireWnd)
	MESSAGE_HANDLER(WM_PAINT, OnPaint)
	MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
	MESSAGE_HANDLER(WM_PALETTECHANGED, OnPalChanged)
	MESSAGE_HANDLER(WM_QUERYNEWPALETTE, OnQueryNewPalette)
END_MSG_MAP()

// Construction
public:
	CFireWnd();

// Attributes
public:

	// Fire Attributes
	int m_nDecay;
	int m_nFlammability;
	int m_nMaxHeat;
	int m_nSpreadRate;
	int m_nSize;
	int m_nSmoothness;
	int m_nDistribution;
	int m_nChaos;


protected:

	int m_MaxBurn;
	BYTE* m_Fire;
	static unsigned long m_RandSeed;
	// Seed used by faster Rand().

	// Device Context Attributes
	HDC m_hMemDC;
	HDC m_hWinDC;

	// Palette Attributes
	RGBQUAD m_rgbPalette[256];
	HPALETTE m_hrgbPalette;
	HPALETTE m_hOldPalette;

	// Bitmap Attributes
	HBITMAP m_hBitmap;
	HBITMAP m_hOldBitmap;
	BYTE* m_pBits;

// Operations
public:
	enum { red = 1, green = 2, blue = 3 };
	void InitFire(int nColor);
	//CPalette* GetPalette();
	HPALETTE GetPalette();
	void RenderFlame();
	//void PaintFlame(CDC* pDC = NULL);
	void PaintFlame(HDC hDC=NULL);
	void SetMaxBurn(int nMax);
	int GetMaxBurn();
	//CSize GetBitmapSize();
	SIZE GetBitmapSize();

protected:
	void CreatePalette(int nColor);
	void CreateBitmap();
	void BurnPoint(BYTE* pRow, BYTE* pNextRow);

	// This function replaces the crt lib rand() function.
	// The CRT lib function is very slow.  Since rand() is
	// one of the most frequently called functions it was
	// necessary to optimize it.  This function may be
	// inlined and is computationally simple.
	unsigned long Rand();


// Implementation
public:
	virtual ~CFireWnd();

	// Generated message map functions

};

inline unsigned long CFireWnd::Rand()
{
	// Using the current seed, generate a new random value
	// and seed and return it.  The random value is shifted
	// to reduce some of the noise and produce a more
	// realistic flame.
	return (m_RandSeed = 1664525L * m_RandSeed + 1013904223L) >> 5;
}

inline void CFireWnd::BurnPoint(BYTE* pRow, BYTE* pNextRow)
{
	BYTE* pTarget;

	int off = Rand() % (m_nDistribution + 1);

	int val = m_nDecay + 1;
	val = Rand() % val;
	val = *pNextRow - val;

	if (Rand() & 1)
		pTarget = pRow + off;
	else
		pTarget = pRow - off;

	if (val > 16)
		*pTarget = (BYTE)val;
	else
		*pTarget = 16;
}

/////////////////////////////////////////////////////////////////////////////
