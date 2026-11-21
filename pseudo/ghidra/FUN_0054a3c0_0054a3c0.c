// FUN_0054a3c0  0054a3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054a3c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0054a610();
  FUN_005d0a20(*(int *)(param_1 + 4) + iVar1);
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_005452a0();
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_005d0aa0();
  if (100000000 < iVar2 * iVar1) {
    FUN_005d13e0();
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18a88,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  FUN_00544d20();
  FUN_005451d0();
  return;
}

