// FUN_00467f50  00467f50

void __fastcall FUN_00467f50(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined *puVar3;
  
  uVar1 = FUN_00630f40("SID_POKER_RAISE");
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0xe0))(uVar1);
  puVar3 = &DAT_006bb090;
  FUN_005f2a60(0x30e79f,0);
  FUN_005fd730(puVar3);
  piVar2 = (int *)FUN_005f2a60(0x30e79f,0);
  uVar1 = FUN_00630f40("SID_POKER_RAISE");
  (**(code **)(*piVar2 + 0xe0))(uVar1);
  return;
}

