// FUN_005f73e0  005f73e0

void __thiscall
FUN_005f73e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa00e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x1b4) == 0) {
    pvVar2 = operator_new(0x1d0);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005ec5a0();
    }
    *(undefined4 *)(param_1 + 0x1b4) = local_28;
  }
  local_8 = 0xffffffff;
  *(int *)(*(int *)(param_1 + 0x1b4) + 4) = param_1;
  uVar7 = 0xffffffff;
  uVar6 = 0x11;
  uVar5 = 3;
  param_5 = param_5 + 3;
  param_4 = param_4 + 7;
  uVar4 = 0x14;
  iVar3 = FUN_005f8550(0x14,param_4,param_5,3,0x11,0xffffffff,uVar1);
  FUN_005ec8f0(param_2,param_3,iVar3 + -0x14,uVar4,param_4,param_5,uVar5,uVar6,uVar7);
  (**(code **)(**(int **)(param_1 + 0x1b4) + 0x74))();
  ExceptionList = local_10;
  return;
}

