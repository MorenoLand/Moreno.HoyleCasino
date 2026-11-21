// FUN_005dbd00  005dbd00

void __thiscall FUN_005dbd00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  int *local_28;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a935b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_005dcb00(0,DAT_00781870 ^ (uint)&stack0xfffffffc);
  (**(code **)(*param_1 + 0x2a8))(local_18,uVar1);
  if (local_18[0] < 1000) {
    uVar1 = FUN_00630f40("SID_CASINO_TOURNAMENTPLAY",0);
    uVar1 = FUN_00630f40("SID_CASINO_TOURNAMENT_NEEDMONEYTOPLAY",uVar1);
    FUN_0062ff10(uVar1);
  }
  else {
    if (DAT_007947bc == (int *)0x0) {
      pvVar2 = operator_new(0x1c4);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_28 = (int *)0x0;
      }
      else {
        local_28 = (int *)FUN_005ce650(param_2,param_3);
      }
      local_8 = 0xffffffff;
      DAT_007947bc = local_28;
      (**(code **)(*local_28 + 0x3c))();
      FUN_005f7340(0,0);
    }
    FUN_005f85d0();
  }
  ExceptionList = local_10;
  return;
}

