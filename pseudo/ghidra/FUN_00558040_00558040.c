// FUN_00558040  00558040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00558040(int param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    cVar1 = FUN_005573a0(param_2);
    if (cVar1 == '\0') {
      FUN_00557a30(param_2);
    }
    else {
      iVar2 = FUN_00557a80(param_2);
      *(undefined2 *)(param_1 + 0x18 + iVar2 * 2) = 0;
    }
    FUN_00554950();
  }
  (**(code **)(*DAT_0162ee84 + 0x80))(0x186a3,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  return;
}

