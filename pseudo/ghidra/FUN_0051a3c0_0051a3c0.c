// FUN_0051a3c0  0051a3c0

void __thiscall FUN_0051a3c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 1) {
    uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_CLEAR_STATISTICS_TITLE",1);
    uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_CLEAR_MESSAGE",uVar1);
    iVar2 = FUN_0062ff10(uVar1);
    if (iVar2 == 1) {
      FUN_00520590();
      FUN_00519e10();
      if (*(char *)(param_1 + 0x1fc) == '\0') {
        (**(code **)(*DAT_007947e0 + 0x334))(0x30d401,0xffffffff);
      }
      else {
        FUN_0047fb90(3);
      }
    }
  }
  else {
    FUN_00519e10();
  }
  return;
}

