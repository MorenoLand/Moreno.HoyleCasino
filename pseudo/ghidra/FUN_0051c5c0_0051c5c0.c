// FUN_0051c5c0  0051c5c0

void __fastcall FUN_0051c5c0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  FUN_005dcb00(0);
  iVar3 = FUN_005d5a50();
  iVar1 = *(int *)(&DAT_007207d4 + *(int *)(param_1 + 0x1c0) * 4);
  if (iVar1 == 50000) {
    uVar4 = FUN_0051c580();
    cVar2 = FUN_0051f610(uVar4);
    if (cVar2 == '\0') {
      piVar5 = (int *)FUN_005fb300(0);
      (**(code **)(*piVar5 + 0xd0))();
      piVar5 = (int *)FUN_005fb550(1);
      uVar4 = FUN_00630f40("SID_POKERTOURNAMENT_MUSTWINLOWERFIRST");
      (**(code **)(*piVar5 + 0xb4))(uVar4);
      return;
    }
  }
  if (iVar3 < iVar1) {
    piVar5 = (int *)FUN_005fb300(0);
    (**(code **)(*piVar5 + 0xd0))();
    piVar5 = (int *)FUN_005fb550(1);
    uVar4 = FUN_00630f40("SID_POKERTOURNAMENT_NOTENOUGHMONEY");
    (**(code **)(*piVar5 + 0xb4))(uVar4);
  }
  else {
    piVar5 = (int *)FUN_005fb550(1);
    uVar4 = FUN_00630f40("SID_POKERTOURNAMENT_CLICKONCHIP");
    (**(code **)(*piVar5 + 0xb4))(uVar4);
    piVar5 = (int *)FUN_005fb300(0);
    (**(code **)(*piVar5 + 0xcc))();
  }
  return;
}

