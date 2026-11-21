// FUN_0042c4b0  0042c4b0

void __fastcall FUN_0042c4b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e58e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = *(int *)(DAT_007906d4 + 0xad8);
  if (iVar3 == -1) {
    FUN_005e9f20("p != -1","..\\Casino\\crapsdisplay.cpp",0x454,
                 DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  if (param_1[0x2ba] != 0) {
    iVar1 = (**(code **)(*param_1 + 0xd8))(iVar3,0);
    iVar2 = FUN_005f5590();
    iVar3 = (**(code **)(*param_1 + 0xd4))(iVar3,0,iVar1 - iVar2 / 2);
    iVar1 = FUN_005f5550();
    (**(code **)(*(int *)param_1[0x2ba] + 0x44))(iVar3 - iVar1 / 2);
    pvVar4 = operator_new(0x28);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_00601110(4,1,0,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_24);
  }
  ExceptionList = local_10;
  return;
}

