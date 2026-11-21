// FUN_005dc8e0  005dc8e0

void __fastcall FUN_005dc8e0(int param_1)

{
  uint uVar1;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a94b1;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((DAT_00795f94 == '\0') && (DAT_00795f95 == '\0')) &&
     ((*(int *)(param_1 + 0x5c) == 0 || (*(char *)(*(int *)(param_1 + 0x5c) + 400) == '\0')))) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_24 = operator_new(0x194);
      local_8 = 0;
      if (local_24 == (undefined4 *)0x0) {
        local_24 = (undefined4 *)0x0;
      }
      else {
        FUN_005f5f50();
        *local_24 = HofAnimation::vftable;
        *(undefined1 *)(local_24 + 100) = 1;
      }
      *(undefined4 **)(param_1 + 0x5c) = local_24;
    }
    local_8 = 0xffffffff;
    FUN_005e85d0(uVar1);
  }
  ExceptionList = local_10;
  return;
}

