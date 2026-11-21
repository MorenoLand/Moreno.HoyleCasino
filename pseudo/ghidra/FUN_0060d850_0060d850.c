// FUN_0060d850  0060d850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0060d850(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UINT cLines;
  DWORD dwMessageId;
  DWORD dwLanguageId;
  void *lpvBits;
  HLOCAL *lpBuffer;
  BITMAPINFO *lpbmi;
  DWORD nSize;
  UINT ColorUse;
  va_list *Arguments;
  HLOCAL local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  int local_c;
  void *local_8;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    local_2c = *param_2;
    local_28 = param_2[1];
    local_24 = param_2[2];
    local_20 = param_2[3];
    uVar2 = FUN_00623910();
    local_34 = FUN_006238f0();
    local_3c = 0;
    local_38 = 0;
    local_30 = uVar2;
    uVar3 = FUN_00613620();
    local_14 = FUN_00613600();
    local_14 = local_14 & 0xffff;
    local_1c = 0;
    local_18 = 0;
    local_10 = uVar3 & 0xffff;
    cVar1 = FUN_00624a70(&local_2c,&local_1c,param_2,&local_3c);
    if (cVar1 != '\0') {
      local_2c = local_2c + *(int *)(param_1 + 0x28);
      local_28 = local_28 + *(int *)(param_1 + 0x2c);
      local_24 = local_24 + *(int *)(param_1 + 0x28);
      local_20 = local_20 + *(int *)(param_1 + 0x2c);
      iVar4 = FUN_006238b0();
      if (iVar4 < 0) {
        iVar4 = FUN_00623910();
        local_8 = (void *)FUN_006238d0(iVar4 + -1);
        iVar5 = FUN_00623910();
        iVar4 = param_2[3];
        iVar6 = FUN_006238b0();
        local_8 = (void *)((iVar5 - iVar4) * -iVar6 + (int)local_8);
      }
      else {
        local_8 = (void *)FUN_006238d0(0);
      }
      _DAT_015e51b0 = FUN_00623910();
      _DAT_015e51ac = FUN_006238f0();
      _DAT_015e51b6 = FUN_00623930();
      _DAT_015e51b6 = _DAT_015e51b6 << 3;
      ColorUse = 0;
      lpbmi = (BITMAPINFO *)&DAT_015e51a8;
      lpvBits = local_8;
      cLines = FUN_00623910();
      local_c = SetDIBitsToDevice(*(HDC *)(param_1 + 0x90),local_2c,local_28,local_24 - local_2c,
                                  local_20 - local_28,*param_2,0,0,cLines,lpvBits,lpbmi,ColorUse);
      if (local_c == 0) {
        Arguments = (va_list *)0x0;
        nSize = 0;
        lpBuffer = &local_40;
        dwLanguageId = 0x400;
        dwMessageId = GetLastError();
        FormatMessageA(0x1100,(LPCVOID)0x0,dwMessageId,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments)
        ;
        FUN_0062fde0("Error returned by SetDIBitsToDevice: %s",local_40);
        LocalFree(local_40);
      }
    }
  }
  return;
}

