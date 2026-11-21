// FUN_00688580  00688580

void FUN_00688580(undefined4 param_1,HMODULE param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  uint uStack_1c0;
  _FILETIME local_1b0;
  HMODULE local_1a8;
  DWORD local_1a4;
  HANDLE local_1a0;
  CHAR local_19c [108];
  int *local_130;
  CHAR local_12c [268];
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_0068736b;
  local_14 = ExceptionList;
  local_c = DAT_00781870 ^ 0x702b80;
  uStack_1c0 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_1c0;
  ExceptionList = &local_14;
  local_8 = 0;
  local_20 = uStack_1c0;
  DVar1 = GetModuleFileNameA(param_2,local_12c,0x104);
  if (((DVar1 != 0) && (local_1a8 = param_2, (short)param_2->unused == 0x5a4d)) &&
     (local_130 = (int *)((int)&param_2->unused + param_2[0xf].unused), *local_130 == 0x4550)) {
    local_1a0 = CreateFileA(local_12c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    local_19c[0] = (CHAR)PTR_006b27f8;
    memset(local_19c + 1,0,99);
    local_1a4 = 0;
    if (local_1a0 != (HANDLE)0xffffffff) {
      local_1a4 = GetFileSize(local_1a0,(LPDWORD)0x0);
      BVar2 = GetFileTime(local_1a0,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_1b0);
      if (BVar2 != 0) {
        wsprintfA(local_19c," - file date is ");
        iVar3 = lstrlenA(local_19c);
        FUN_00688770(local_19c + iVar3,local_1b0.dwLowDateTime,local_1b0.dwHighDateTime);
      }
      CloseHandle(local_1a0);
    }
    FUN_00688440(param_1,"%s, loaded at 0x%08x - %d bytes - %08x%s\r\n",local_12c,param_2,local_1a4,
                 local_130[2],local_19c);
  }
  local_8 = 0xfffffffe;
  ExceptionList = local_14;
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}

