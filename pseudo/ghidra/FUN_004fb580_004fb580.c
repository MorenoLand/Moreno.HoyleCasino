// FUN_004fb580  004fb580

void __fastcall FUN_004fb580(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_c;
  
  if ((DAT_00791eb8 != 0) && (*(int *)(DAT_00791eb8 + 0xa4) != 0)) {
    for (local_c = 7; -1 < local_c; local_c = local_c + -1) {
      iVar1 = FUN_0047e390(local_c);
      if (iVar1 == 0) {
LAB_004fb614:
        if (iVar1 != 0) {
          FUN_004c6d90(0);
          FUN_004c7030(0);
        }
      }
      else {
        uVar2 = FUN_005dcb00(*(undefined4 *)(iVar1 + 4),param_1);
        piVar3 = (int *)FUN_0063aac0(param_1,uVar2);
        if (*piVar3 == 0) goto LAB_004fb614;
        FUN_005d9180(local_c,0);
      }
    }
  }
  return;
}

