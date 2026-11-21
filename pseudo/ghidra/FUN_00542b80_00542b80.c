// FUN_00542b80  00542b80

int FUN_00542b80(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_var;
  
  iVar2 = FUN_00548f80(param_1);
  iVar3 = FUN_00641280(*(undefined2 *)(DAT_00793404 + 0x28 + param_1 * 0xc),extraout_var);
  iVar4 = FUN_00641280(*(undefined2 *)(DAT_00793404 + 0x2a + param_1 * 0xc));
  iVar5 = FUN_00549e80(param_1,1);
  iVar6 = FUN_00549f80(param_1);
  iVar7 = FUN_00549fa0(param_1);
  cVar1 = FUN_0054a050(param_1);
  if (cVar1 != '\0') {
    if ((iVar3 == 0xe) && (cVar1 = FUN_00549ad0(), cVar1 != '\0')) {
      return 0x1e;
    }
    cVar1 = FUN_005497a0();
    if (cVar1 != '\0') {
      return iVar6 / 2 + 0x13;
    }
  }
  if (iVar5 == 0x15) {
    iVar6 = 0;
  }
  else if ((iVar6 < 0x15) && (iVar6 != iVar7)) {
    if (iVar6 == 0xc) {
      iVar6 = 0xd;
    }
  }
  else if (iVar6 < 8) {
    iVar6 = 1;
  }
  else if ((iVar2 != 2) || (((iVar3 != 5 || (iVar4 != 3)) && ((iVar3 != 3 || (iVar4 != 5)))))) {
    if ((iVar2 != 2) || (((iVar3 != 5 || (iVar4 != 2)) && ((iVar3 != 2 || (iVar4 != 6)))))) {
      if (iVar6 < 0x11) {
        iVar6 = iVar6 + -4;
      }
      else if (iVar6 < 0x16) {
        iVar6 = 0;
      }
      else if (iVar7 < 8) {
        iVar6 = 1;
      }
      else if (iVar7 < 0x11) {
        iVar6 = iVar7 + -4;
      }
      else {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 3;
    }
  }
  else {
    iVar6 = 2;
  }
  return iVar6;
}

