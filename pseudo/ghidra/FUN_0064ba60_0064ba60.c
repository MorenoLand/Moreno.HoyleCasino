// FUN_0064ba60  0064ba60

void __thiscall FUN_0064ba60(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int local_2c;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abfa9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = 0xffffffff;
  iVar1 = FUN_005f53c0(0xffffffff,DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005eae80(param_2,0,0,iVar1 + 5,uVar3);
  if (param_3 != 0) {
    pvVar2 = operator_new(0x5c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005f6130();
    }
    local_8 = 0xffffffff;
    param_1[0x5f] = local_28;
    FUN_005f61d0(0,0,0,0,1000,0xffffffff);
    FUN_005f6580(0xfc,0xf8,199);
    pvVar2 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    param_1[0x60] = local_2c;
    FUN_005ec8f0(param_3,4,0,0,0,0,4,0x30,0xffffffff);
  }
  (**(code **)(*param_1 + 0x70))();
  ExceptionList = local_10;
  return;
}

