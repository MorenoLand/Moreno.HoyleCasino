// ___security_init_cookie  00687914

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2005 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_00781870 == 0xbb40e64e) || ((DAT_00781870 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_00781870 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_00781870 == 0xbb40e64e) {
      DAT_00781870 = 0xbb40e64f;
    }
    else if ((DAT_00781870 & 0xffff0000) == 0) {
      DAT_00781870 = DAT_00781870 | DAT_00781870 << 0x10;
    }
  }
  DAT_00781874 = ~DAT_00781870;
  return;
}

