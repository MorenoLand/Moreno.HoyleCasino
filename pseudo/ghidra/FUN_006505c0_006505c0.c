// FUN_006505c0  006505c0

undefined4 __fastcall FUN_006505c0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac2d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*param_1 + 0x80))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0xa8))(), cVar1 == '\0')) {
    uVar2 = FUN_00630f40("SID_SHELL_GAMEINPROGRESS",4);
    uVar2 = FUN_00630f40("SID_GENERIC_CONFIRMTUTORIALSTART",uVar2);
    iVar3 = FUN_0062ff10(uVar2);
    if (iVar3 == 7) {
      ExceptionList = local_10;
      return 0;
    }
  }
  if (param_1[0xf] != 0) {
    FUN_005e9f20("false","..\\casinoShell\\room.cpp",0x61c);
    pvVar4 = (void *)param_1[0xf];
    if (pvVar4 != (void *)0x0) {
      FUN_00651950();
      operator_delete(pvVar4);
    }
  }
  (**(code **)(*param_1 + 0x204))(1);
  pvVar4 = operator_new(0x84);
  local_8 = 0;
  if (pvVar4 == (void *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_00651340(param_1);
  }
  local_8 = 0xffffffff;
  param_1[0xf] = local_2c;
  FUN_00651af0();
  ExceptionList = local_10;
  return 1;
}

