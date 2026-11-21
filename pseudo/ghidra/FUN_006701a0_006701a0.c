// FUN_006701a0  006701a0

uint FUN_006701a0(undefined4 param_1,int param_2)

{
  longlong lVar1;
  FILE *_File;
  uint uVar2;
  long lVar3;
  uint uVar4;
  void *_Dst;
  int local_38;
  int local_28;
  int local_20;
  uint local_8;
  
  local_38 = param_2 * 0x1e0;
  _File = (FILE *)FUN_0066fc60(&DAT_006d8524);
  if (_File == (FILE *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0x129);
    uVar2 = 0;
  }
  else {
    fseek(_File,0,2);
    lVar3 = ftell(_File);
    if (lVar3 < local_38) {
      local_38 = lVar3;
    }
    uVar4 = (local_38 - 5U) / 0x18;
    lVar1 = (ulonglong)uVar4 * 0x18;
    _Dst = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    uVar2 = (lVar3 - 5U) / 0x18;
    local_8 = uVar2 / 0x14;
    if (uVar2 % 0x14 != 0) {
      local_8 = local_8 + 1;
    }
    memset(_Dst,0,uVar4 * 0x18);
    local_20 = 0;
    for (local_28 = local_8 * 0x1e0 + 5; (local_20 < param_2 && (4 < local_28));
        local_28 = local_28 + -0x1e0) {
      fseek(_File,(local_8 - (local_20 + 1)) * 0x1e0 + 5,0);
      fread((void *)(local_20 * 0x2d00 + (int)_Dst),0x18,0x14,_File);
      local_20 = local_20 + 1;
    }
    fclose(_File);
  }
  return uVar2;
}

