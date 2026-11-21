// FUN_005d8850  005d8850

void FUN_005d8850(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  
  cVar1 = FUN_00635cb0(8);
  if ((((cVar1 == '\0') || (DAT_00793584 != 0)) || (*(char *)(DAT_0079357c + 0x88) == '\0')) &&
     ((DAT_00793584 == 0 || (*(int *)(DAT_00793584 + 0x3c0c) == 0)))) {
    uVar4 = extraout_var;
    cVar1 = FUN_005e2f60(extraout_var);
    if (cVar1 == '\0') {
      if (DAT_00793584 != 0) {
        FUN_005890f0(0);
      }
    }
    else {
      iVar2 = FUN_005f3e50();
      if (DAT_0075d7ac == -1) {
        cVar1 = FUN_005e2f60(uVar4);
        DAT_0075d7ac = cVar1 * 0xe10 + iVar2;
      }
      iVar3 = FUN_005f3e50();
      if (DAT_0075d7ac <= iVar3) {
        FUN_005e0ea0();
        cVar1 = FUN_005e2f60();
        DAT_0075d7ac = cVar1 * 0xe10 + iVar2;
        if (DAT_00793584 != 0) {
          FUN_00589050(*(undefined4 *)(DAT_007947e0 + 0x98));
        }
      }
      if (DAT_00793584 != 0) {
        FUN_005890f0(DAT_0075d7ac - iVar2);
      }
    }
  }
  return;
}

