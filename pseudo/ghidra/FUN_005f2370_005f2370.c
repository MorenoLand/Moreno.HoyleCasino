// FUN_005f2370  005f2370

void __thiscall FUN_005f2370(int *param_1,undefined4 param_2,int param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9e12;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = FUN_005f2300(param_2);
  if (iVar3 != 0) {
    cVar1 = FUN_005f8970(uVar2);
    if ((cVar1 == param_4) && (*(int *)(iVar3 + 0x1b4) == param_3)) {
      ExceptionList = local_10;
      return;
    }
    FUN_005f25d0(param_2);
  }
  pvVar4 = operator_new(0x358);
  local_8 = 0;
  if (pvVar4 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_005fd860(param_3,param_4,DAT_015e55e8[5]);
  }
  local_8 = 0xffffffff;
  FUN_005fdc10(param_2);
  FUN_0060c840(local_24);
  (**(code **)(*param_1 + 0x30))(local_24,param_2);
  (**(code **)(*DAT_015e55e8 + 0x4c))(local_24,param_2);
  ExceptionList = local_10;
  return;
}

