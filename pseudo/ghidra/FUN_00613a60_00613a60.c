// FUN_00613a60  00613a60

void __thiscall FUN_00613a60(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab102;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*param_2 < param_2[2]) {
    if (param_2[1] < param_2[3]) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) && (*(char *)(param_1 + 0x80) != '\0')) {
    local_28 = (undefined4 *)FUN_00612ef0(0x1c,DAT_00781870 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (local_28 == (undefined4 *)0x0) {
      local_28 = (undefined4 *)0x0;
    }
    else {
      FUN_0062aea0();
      *local_28 = VWindowRECT::vftable;
    }
    local_8 = 0xffffffff;
    local_28[2] = *param_2;
    local_28[3] = param_2[1];
    local_28[4] = param_2[2];
    local_28[5] = param_2[3];
    FUN_0062aa20(local_28);
  }
  ExceptionList = local_10;
  return;
}

