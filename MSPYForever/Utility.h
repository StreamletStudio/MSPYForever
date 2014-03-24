#pragma once
#include <Windows.h>
#include <xl/String/xlString.h>


enum OSVersion
{
    OSV_Win8,
    OSV_Win81,
    OSV_Other,
};

namespace Utility
{
    bool IsWow64();
    OSVersion GetOSVersion();
    bool SetPrivilege(LPCTSTR szPrivilegeName, bool bEnable);

    xl::String GetKnownDir(int csidl);
    xl::String GetSystemDir();
    xl::String GetSysWow64Dir();
    xl::String GetWinDir();
    xl::String GetExeDir();

    bool SHCopyDir(HWND hWnd, LPCTSTR lpszSourceDir, LPCTSTR lpszDestDir);

    bool RunProcess(LPCTSTR lpszCmdLine, bool bWait = true);

    bool RegisterComDll(LPCTSTR lpszFileName);
    bool MergeRegFile(LPCTSTR lpszFileName);
}