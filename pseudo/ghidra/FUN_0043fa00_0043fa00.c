// FUN_0043fa00  0043fa00

void __fastcall FUN_0043fa00(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e8d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00630f40("SID_HORSERACING",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  if (*(int *)(param_1 + 0x18) == 0) {
    pvVar2 = operator_new(500);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0043d170();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = local_20;
  }
  FUN_00440020();
  ExceptionList = local_10;
  return;
}

