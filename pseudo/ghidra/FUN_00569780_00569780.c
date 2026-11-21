// FUN_00569780  00569780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00569780(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00569fe0();
  iVar2 = FUN_005698c0(uVar1);
  iVar3 = FUN_0056b800();
  FUN_005620c0(iVar2 + iVar3);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x2e) == '\0') {
    FUN_005d0a20(*(int *)(param_1 + 4) + iVar2 + iVar3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = FUN_005d0aa0();
  if (100000000 < iVar3 * iVar2) {
    FUN_005d13e0();
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18a88,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_00561950();
  }
  FUN_00568450(0);
  FUN_00561950();
  if ((*(char *)(param_1 + 0x2e) == '\0') && (*(char *)((int)DAT_0162ee84 + 0x25) != '\0')) {
    (**(code **)(**(int **)(DAT_00793438 + 4) + 8))(7,0);
  }
  return;
}

