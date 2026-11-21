// FUN_004fc950  004fc950

void __thiscall
FUN_004fc950(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_40;
  int local_28 [4];
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a27d9;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28[0] = param_6;
  local_28[1] = param_7;
  local_28[2] = param_8;
  if (*(int *)(param_1 + 0x90) == 0) {
    pvVar2 = operator_new(0x3d0);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_0051ebd0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x90) = local_40;
    FUN_0051ec30(param_2);
    FUN_0051ec50(param_3,param_4);
    FUN_0051ec80(param_5);
    for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
      if (local_28[local_18] != -1) {
        local_14 = FUN_0047e390(local_28[local_18]);
        uVar3 = FUN_004c6150();
        local_28[3] = FUN_004c6a70();
        FUN_0051ecb0(uVar3,local_28[3]);
      }
    }
    (**(code **)(**(int **)(param_1 + 0x90) + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0(uVar1);
  ExceptionList = local_10;
  return;
}

