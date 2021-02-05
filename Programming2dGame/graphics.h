#ifndef _GRAPHICS_H
#define _GRAPHICS_H
#define WIN32_LEAN_AND_MEAN
#ifdef _DEBUG
#define D3D_DEBUG_INFO
#endif // DEBUG
#include <d3d9.h>
#include "constants.h"
#include "gameError.h"

#define LP_3DDEVICE LPDIRECT3DDEVICE9
#define LP_3D LPDIRECT3D9

#define COLOR_ARGB_DWORD
#define SETCOLOR_ARGB(a, r, g, b) \
((COLOR_ARGB) (((a) & 0xff) << 24) | (((r)&0xff) << 16) | ((g) & 0xff) << 8) | ((b) & 0xff)))

class Graphics
{
private:
	LP_3D	direct3d;
	LP_3DDEVICE device3d;
	D3DPRESENT_PARAMETERS d3dpp;

	HRESULT result;
	HWND hwnd;
	bool fullscreen;
	int width;
	int height;
	void initD3Dpp();

public:
	Graphics();
	virtual ~Graphics();
	void releaseAll();

	void initialize(HWND hw, int width, int height, bool fullscreen);

	HRESULT showBackbuffer();
};


#endif // !1
