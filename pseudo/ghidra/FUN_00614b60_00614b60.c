// FUN_00614b60  00614b60

void __thiscall
FUN_00614b60(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,int param_8,int param_9,undefined4 param_10,int param_11,int param_12
            ,undefined4 param_13,int param_14,int param_15,int param_16,int param_17,int param_18,
            undefined4 param_19,undefined4 param_20,undefined4 param_21)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_005f50c0(param_3,param_4,param_5,param_21);
  *(undefined4 *)(param_1 + 0x5c) = param_6;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 4) = *(undefined4 *)(param_1 + 4);
  if (param_2 == 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x70))();
  }
  else {
    FUN_005eae80(param_2,param_3,param_4,param_5,0xffffffff);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = *(undefined4 *)(param_1 + 4);
  FUN_005f61d0(param_19,param_20,param_3 + param_17,param_4 + param_18,param_5 + 1,0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 4) = *(undefined4 *)(param_1 + 4);
  FUN_005eae80(param_7,param_3 + param_8,param_4 + param_9,param_5 + 2,0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 4) = *(undefined4 *)(param_1 + 4);
  FUN_005eae80(param_10,param_3 + param_11,param_4 + param_12,param_5 + 2,0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 4) = *(undefined4 *)(param_1 + 4);
  cVar1 = FUN_00615160();
  if (cVar1 == '\0') {
    FUN_00615e80(param_4 + param_15,param_4 + param_16);
    uVar3 = 0xffffffff;
    param_5 = param_5 + 3;
    uVar2 = FUN_00615eb0(param_5,0xffffffff);
    FUN_005eae80(param_13,param_3 + param_14,uVar2,param_5,uVar3);
  }
  else {
    FUN_00615e80(param_3 + param_15,param_3 + param_16);
    uVar3 = 0xffffffff;
    param_5 = param_5 + 3;
    param_4 = param_4 + param_14;
    uVar2 = FUN_00615eb0(param_4,param_5,0xffffffff);
    FUN_005eae80(param_13,uVar2,param_4,param_5,uVar3);
  }
  return;
}

