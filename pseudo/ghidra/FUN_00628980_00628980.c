// FUN_00628980  00628980

void __thiscall
FUN_00628980(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab59b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
    pvVar2 = operator_new(0x14);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = (int *)0x0;
    }
    else {
      local_24 = (int *)FUN_00629ab0();
    }
    param_2 = local_24;
  }
  local_8 = 0xffffffff;
  FUN_0060c840(param_2);
  iVar3 = FUN_005f5400(uVar1);
  param_2[2] = iVar3;
  param_2[4] = param_5;
  (**(code **)(*param_2 + 4))(param_3,param_4);
  (**(code **)(*param_1 + 0xd0))();
  ExceptionList = local_10;
  return;
}

