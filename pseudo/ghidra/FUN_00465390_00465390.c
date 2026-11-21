// FUN_00465390  00465390

void __thiscall FUN_00465390(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f492;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    FUN_00465480(DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  else if (*(int *)(param_1 + 0x20) != param_2) {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00465480(DAT_00781870 ^ (uint)&stack0xfffffffc);
    }
    *(int *)(param_1 + 0x20) = param_2;
    for (local_14 = 0; local_14 < *(int *)(param_1 + 0x20); local_14 = local_14 + 1) {
      pvVar1 = operator_new(0x18);
      local_8 = 0;
      if (pvVar1 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_00463c70();
      }
      local_8 = 0xffffffff;
      FUN_0060c7d0(local_24);
      iVar2 = FUN_0060ca40(0);
      *(undefined4 *)(iVar2 + 4) = 0xc;
    }
  }
  ExceptionList = local_10;
  return;
}

