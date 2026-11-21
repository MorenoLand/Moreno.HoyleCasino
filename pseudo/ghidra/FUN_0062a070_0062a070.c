// FUN_0062a070  0062a070

void __thiscall
FUN_0062a070(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            int param_7,int param_8,undefined4 param_9,int param_10,int param_11,undefined4 param_12
            ,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            int param_17,int param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23)

{
  void *pvVar1;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab6a2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5010(DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f53e0(param_23);
  if (*(int *)(param_1 + 0x48) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48) = local_28;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 4) = *(undefined4 *)(param_1 + 4);
  FUN_005eae80(param_2,param_3,param_4,param_5,0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 4) = *(undefined4 *)(param_1 + 4);
  FUN_005eae80(param_6,param_3 + param_7,param_4 + param_8,param_5 + 1,0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = *(undefined4 *)(param_1 + 4);
  FUN_005eae80(param_9,param_3 + param_10,param_4 + param_11,param_5 + 1,0xffffffff);
  if (*(int *)(param_1 + 0x54) == 0) {
    pvVar1 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar1 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = local_2c;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 4) = *(undefined4 *)(param_1 + 4);
  FUN_005ec8f0(param_12,param_13,param_15,param_16,param_3 + param_17,param_4 + param_18,param_5 + 1
               ,param_22,0xffffffff);
  *(undefined4 *)(param_1 + 0x68) = param_13;
  *(undefined4 *)(param_1 + 0x6c) = param_14;
  *(undefined4 *)(param_1 + 0x5c) = param_19;
  *(undefined4 *)(param_1 + 0x60) = param_20;
  *(undefined4 *)(param_1 + 100) = param_21;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
  ExceptionList = local_10;
  return;
}

