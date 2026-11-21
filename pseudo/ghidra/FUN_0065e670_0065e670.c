// FUN_0065e670  0065e670

void __fastcall FUN_0065e670(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac912;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_0065ff10(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x1c8) == 0) {
      pvVar3 = operator_new(0x1f0);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_00660b70();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c8) = local_20;
      (**(code **)(**(int **)(param_1 + 0x1c8) + 0x3c))();
      FUN_005f7340(0,0);
    }
    FUN_005f85d0();
  }
  else {
    uVar2 = FUN_00630f40("SID_SHELL_PLAYERLIMITREACHED",0);
    uVar2 = FUN_00630f40("SID_SHELL_100PLAYERS",uVar2);
    FUN_0062ff10(uVar2);
  }
  ExceptionList = local_10;
  return;
}

