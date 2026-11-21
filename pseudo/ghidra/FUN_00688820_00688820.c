// FUN_00688820  00688820

void FUN_00688820(undefined4 param_1)

{
  DWORD DVar1;
  CHAR local_294 [200];
  _FILETIME local_1cc;
  _MEMORYSTATUS local_1c4;
  CHAR local_1a4 [264];
  undefined1 local_9c [108];
  uint local_30;
  undefined4 local_2c;
  _SYSTEM_INFO local_28;
  
  local_30 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  GetSystemTimeAsFileTime(&local_1cc);
  FUN_00688770(local_9c,local_1cc.dwLowDateTime,local_1cc.dwHighDateTime);
  FUN_00688440(param_1,"Error occurred at %s.\r\n",local_9c);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,local_1a4,0x104);
  if (DVar1 == 0) {
    lstrcpyA(local_1a4,"Unknown");
  }
  local_2c = 200;
  lstrcpyA(local_294,"Unknown");
  FUN_00688440(param_1,"%s, run by %s.\r\n",local_1a4,local_294);
  GetSystemInfo(&local_28);
  FUN_00688440(param_1,"%d processor(s), type %d.\r\n",local_28.dwNumberOfProcessors,
               local_28.dwProcessorType);
  local_1c4.dwLength = 0x20;
  GlobalMemoryStatus(&local_1c4);
  FUN_00688440(param_1,"%d MBytes physical memory.\r\n",local_1c4.dwTotalPhys + 0xfffff >> 0x14);
  __security_check_cookie(local_30 ^ (uint)&stack0xfffffffc);
  return;
}

