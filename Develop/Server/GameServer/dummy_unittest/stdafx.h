// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 및 프로젝트 관련 포함 파일이 
// 들어 있는 포함 파일입니다.
//

#pragma once

#define _CRT_SECURE_NO_DEPRECATE

#define WIN32_LEAN_AND_MEAN		// 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
// Windows 헤더 파일입니다.

#include <atlstr.h>

#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <string>

#include <Winsock2.h>
#include <mswsock.h>
#include <crtdbg.h>
#include <windows.h>

// C의 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <stdio.h>
#include <time.h>


#include "tbb/task.h"
#include "tbb/task_scheduler_init.h"
#include "tbb/atomic.h"


// 정밀한 릭체크가 필요하면 디파인합니다.
//#define VLD_CHECK_LEAK		


#if defined(VLD_CHECK_LEAK) && defined(_DEBUG)

#define VLD_MAX_DATA_DUMP		0xFF		// vld에서 데이터 덤프는 FF Byte만 해랑.

#include "../../../sdk/vld/vld.h"
#pragma comment(lib,"vldmt.lib")
#else
#include "MMemoryLeak.h"
#endif

#include "MMemPool.h"


#include "gmock/gmock.h"

#undef TEST
#include "UnitTest++.h"

// cml
#include "MTypes.h"
#include "MMath.h"
#include "MVector3.h"
#include "MBox.h"
#include "MDebug.h"
#include "MThread.h"
#include "MUID.h"
#include "MXml.h"
#include "MLua.h"
#include "MSync.h"
#include "MProfiler.h"
#include "MCrashDump.h"
#include "lua_tinker.h"
#include "MWLua.h"
#include "MFileSystem.h"
#include "MTime.h"
#include "MMatrix.h"

// CSCommon
#include "CCommandTable.h"
#include "CSItemData.h"
#include "CStringRes.h"

#include "SUnitTest.h"

#pragma comment(lib,"winmm.lib")
