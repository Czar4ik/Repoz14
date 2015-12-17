/*
2,9,16,23
Написать приложение, выводящее в центре окна текст различным шрифтом
( меняется имя шрифта, размер, цвет, начертание символов) в ответ на
нажатия клавиш «1», «2», … и т.д. (всего 9 различных стилей).
Добавить обработку нажатия на правую клавишу мыши, при котором будут
рисоваться окружности с разным цветом, радиусом и координатами.
Двойное нажатие на правую клашиу мыши прекращает рисование и очищает окно.
*/



#include <afxwin.h>  
#include <string.h>  

class CMainWin : public CFrameWnd {
public:
	CMainWin();
	int i = 0;

	afx_msg void OnChar(UINT ch, UINT, UINT);
	afx_msg void OnPaint();
	afx_msg void OnRButtonDown(UINT flags, CPoint Loc);
	afx_msg void OnRButtonDblClk(UINT flags, CPoint Loc);
	DECLARE_MESSAGE_MAP()
};

class CApp : public CWinApp
{
public:
	BOOL InitInstance();
};

BOOL CApp::InitInstance()
{
	m_pMainWnd = new CMainWin;
	m_pMainWnd->ShowWindow(SW_RESTORE);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}

CMainWin::CMainWin()
{
	this->Create(0, L"Обработка сообщений");
}

BEGIN_MESSAGE_MAP
	(CMainWin /* класс */, CFrameWnd /* базовый класс */)
	ON_WM_CHAR()
	ON_WM_PAINT()
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()



afx_msg void CMainWin::OnChar(UINT ch, UINT, UINT)
{
	switch (ch)
	{
	case '1':
		i = 1;
		OnPaint();
		break;
	case '2':
		i = 2;
		OnPaint();
		break;
	case '3':
		i = 3;
		OnPaint();
		break;
	case '4':
		i = 4;
		OnPaint();
		break;
	case '5':
		i = 5;
		OnPaint();
		break;
	case '6':
		i = 6;
		OnPaint();
		break;
	case '7':
		i = 7;
		OnPaint();
		break;
	}
	this->InvalidateRect(0);
}



afx_msg void CMainWin::OnRButtonDown(UINT, CPoint loc)
{
	i = 8;
	OnPaint();
	//this->InvalidateRect(0);
}
afx_msg void CMainWin::OnRButtonDblClk(UINT, CPoint loc)
{
	i = 10;
	OnPaint();
	//this->InvalidateRect(0);
}



afx_msg void CMainWin::OnPaint() 
{
	CPaintDC dc(this);
	if (i == 1)
	{
		CFont font;
		VERIFY(font.CreateFont(
			50,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_NORMAL,                 // nWeight
			FALSE,                     // bItalic
			FALSE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			_T("Arial")));                 // lpszFacename
		CFont* def_font = dc.SelectObject(&font);
		dc.TextOut(300, 200, _T("Hello"), 5);
		dc.SelectObject(def_font);
		font.DeleteObject();
	}

	if (i == 2)
	{
		CFont font;
		VERIFY(font.CreateFont(
			50,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_NORMAL,                 // nWeight
			FALSE,                     // bItalic
			FALSE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			_T("Times New Roman")));                 // lpszFacename
		CFont* def_font = dc.SelectObject(&font);
		dc.TextOut(300, 200, _T("Hello"), 5);
		dc.SelectObject(def_font);
		font.DeleteObject();
	}

	if (i == 3)
	{
		CFont font;
		VERIFY(font.CreateFont(
			100,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_NORMAL,                 // nWeight
			FALSE,                     // bItalic
			FALSE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			_T("Times New Roman")));                 // lpszFacename
		CFont* def_font = dc.SelectObject(&font);
		dc.TextOut(300, 200, _T("Hello"), 5);
		dc.SelectObject(def_font);
		font.DeleteObject();
	}

	if (i == 3)
	{
		CFont font;
		VERIFY(font.CreateFont(
			100,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_NORMAL,                 // nWeight
			FALSE,                     // bItalic
			FALSE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			_T("Times New Roman")));                 // lpszFacename
		CFont* def_font = dc.SelectObject(&font);
		dc.TextOut(300, 200, _T("Hello"), 5);
		dc.SelectObject(def_font);
		font.DeleteObject();
	}

	if (i == 4)
	{
		CFont font;
		VERIFY(font.CreateFont(
			100,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_NORMAL,                 // nWeight
			TRUE,                     // bItalic
			FALSE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			_T("Times New Roman")));                 // lpszFacename
		CFont* def_font = dc.SelectObject(&font);
		dc.TextOut(300, 200, _T("Hello"), 5);
		dc.SelectObject(def_font);
		font.DeleteObject();
	}

	if (i == 5)
	{
		CFont font;
		VERIFY(font.CreateFont(
			100,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_NORMAL,                 // nWeight
			TRUE,                     // bItalic
			TRUE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			_T("Times New Roman")));                 // lpszFacename
		CFont* def_font = dc.SelectObject(&font);
		dc.TextOut(300, 200, _T("Hello"), 5);
		dc.SelectObject(def_font);
		font.DeleteObject();
	}

	if (i == 6)
	{
		CFont font;
		VERIFY(font.CreateFont(
			100,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_BOLD,                 // nWeight
			TRUE,                     // bItalic
			TRUE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			_T("Times New Roman")));                 // lpszFacename
		CFont* def_font = dc.SelectObject(&font);
		dc.SetTextColor(RGB(134, 111, 255));
		dc.TextOut(300, 200, _T("Hello"), 5);
		dc.SelectObject(def_font);
		font.DeleteObject();
	}

	if (i == 7)
	{
		CFont font;
		VERIFY(font.CreateFont(
			100,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_BOLD,                 // nWeight
			TRUE,                     // bItalic
			TRUE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			_T("Times New Roman")));                 // lpszFacename
		CFont* def_font = dc.SelectObject(&font);
		dc.SetTextColor(RGB(134, 111, 255));
		dc.SetBkColor(RGB(255, 111, 255));
		dc.TextOut(300, 200, _T("Hello"), 5);
		dc.SelectObject(def_font);
		font.DeleteObject();
	}

	if (i == 8)
	{
		int x, y, z, position1, position2;
		x = rand() % 255;
		y = rand() % 255;
		z = rand() % 255;
		int hhh = 300;
		position1 = rand() % 100;
		position2 = rand() % 200 + hhh;

		CPen MyPen(PS_SOLID, 0, RGB(x, y, z)); // настраиваем перо
		dc.SelectObject(MyPen); // выбираем перо в контекст устройства
		dc.Ellipse(position1, position1, position2, position2);

	}

	if (i == 10)
	{
		this->InvalidateRect(0);
		//dc.EndPage();
		//InvalidateRect(0);
	}
}

CApp App;