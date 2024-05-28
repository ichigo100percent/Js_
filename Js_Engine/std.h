#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <queue>
#include <stack>
#include <algorithm>
#include <Windows.h>
#include <assert.h>


#include <d3d11.h>
#include <d3dcompiler.h>
#include <wrl.h>
#include "SimpleMath.h"
#include "DirectXTex.h"

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3dcompiler.lib")

const int g_Width = 800;
const int g_Height = 600;

using namespace Microsoft::WRL;

#define CHECK(p)	assert(SUCCEEDED(p))
