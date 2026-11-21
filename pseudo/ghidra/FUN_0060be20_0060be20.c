// FUN_0060be20  0060be20

void __thiscall
FUN_0060be20(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,
            undefined4 param_13)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aad0c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005ec8f0(param_6,param_5,param_7,param_8,param_3 + param_9,param_4 + param_10,param_11 + 1,
               param_12,param_13);
  if ((*(int *)(param_1 + 0x1dc) == 0) && (param_2 != 0)) {
    pvVar2 = operator_new(0x178);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005eaaf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1dc) = local_28;
  }
  if (*(int *)(param_1 + 0x1dc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x1dc) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eae80(param_2,param_3,param_4,param_11,0xffffffff);
  }
  if ((*(int *)(param_1 + 0x1e0) == 0) && (param_2 == 0)) {
    pvVar2 = operator_new(0x5c);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005f6130();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e0) = local_2c;
  }
  if (*(int *)(param_1 + 0x1e0) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005f61d0(param_7 + 10,param_8 + 6,param_9 + -5,param_10 + -3,param_11,0xffffffff);
    FUN_005f6490(0,0,0);
  }
  ExceptionList = local_10;
  return;
}

