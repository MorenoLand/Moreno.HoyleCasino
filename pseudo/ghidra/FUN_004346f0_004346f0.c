// FUN_004346f0  004346f0

undefined4 __fastcall FUN_004346f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  if (*(int *)(param_1 + 0xac4) == 0) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      cVar1 = FUN_004349b0(local_8);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      FUN_005dcb00(local_8);
      piVar2 = (int *)FUN_0063aac0();
      if (((*piVar2 != 0) && (iVar3 = FUN_005dcb00(local_8), *(char *)(iVar3 + 0x4a1) == '\0')) &&
         (iVar3 = FUN_005dcb00(local_8), *(char *)(iVar3 + 0x4a0) == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}

