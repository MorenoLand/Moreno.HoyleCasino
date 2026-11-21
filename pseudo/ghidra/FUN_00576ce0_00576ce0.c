// FUN_00576ce0  00576ce0

void __thiscall FUN_00576ce0(int param_1,uint param_2)

{
  void *pvVar1;
  undefined4 local_24;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6427;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0x38 + local_14 * 4) + 0x178) = 2;
    pvVar1 = operator_new(0x1c);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_00577b80(0,~-(uint)(local_14 != 0) & param_2);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_24);
  }
  ExceptionList = local_10;
  return;
}

