// FUN_004b7b20  004b7b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7b20(undefined4 *param_1,undefined1 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = FUN_0047e420();
  if (((&DAT_00791868)[iVar7] == '\0') && ((&DAT_00791ab8)[iVar7] == '\0')) {
    FUN_005e9f20("bHighVertOK[ currentPlayer ] || bHighHorizOK[ currentPlayer ]",
                 "..\\Casino\\PokerHoldemAI.cpp",0x1b24);
  }
  if ((&DAT_00791d80)[iVar7] != 5) {
    DAT_00791890 = FUN_0047e3b0();
    FUN_004b1060(5);
    sVar5 = FUN_004f91a0();
    iVar8 = FUN_0062fbf0(0x14);
    iVar9 = FUN_0062fbf0(0x14);
    dVar1 = (double)(iVar8 - iVar9) * _DAT_006bc270;
    sVar6 = FUN_004f1d60();
    dVar4 = ((dVar1 + 1.0) * (1.0 - 1.0 / (double)(int)sVar5)) /
            ((double)(int)sVar6 / _DAT_006b4b00);
    dVar1 = *(double *)(&DAT_007916e8 + iVar7 * 8);
    dVar2 = *(double *)(&DAT_007918f8 + iVar7 * 8);
    dVar3 = *(double *)(&DAT_007917a8 + iVar7 * 8);
    if (dVar4 < dVar1 * *(double *)(&DAT_00791958 + iVar7 * 8)) {
      *param_1 = 3;
      if (*(double *)(&DAT_007918f8 + iVar7 * 8) <= *(double *)(&DAT_007917a8 + iVar7 * 8)) {
        if ((&DAT_00791ab8)[iVar7] != '\0') {
          *param_2 = 1;
          return;
        }
        if (dVar4 < dVar1 * dVar2) {
          *param_2 = 0;
          return;
        }
      }
      else {
        if ((&DAT_00791868)[iVar7] != '\0') {
          *param_2 = 0;
          return;
        }
        if (dVar4 < dVar1 * dVar3) {
          *param_2 = 1;
          return;
        }
      }
    }
    (&DAT_00791580)[iVar7] = 0;
  }
  if ((&DAT_00791580)[iVar7] == '\0') {
    if (*(double *)(&DAT_007916e8 + iVar7 * 8) <= *(double *)(&DAT_00791958 + iVar7 * 8)) {
      *param_1 = 2;
    }
    else {
      *param_1 = 1;
    }
  }
  else {
    *param_1 = 3;
    if (*(double *)(&DAT_007918f8 + iVar7 * 8) <= *(double *)(&DAT_007917a8 + iVar7 * 8)) {
      if ((&DAT_00791ab8)[iVar7] == '\0') {
        *param_2 = 0;
      }
      else {
        *param_2 = 1;
      }
    }
    else if ((&DAT_00791868)[iVar7] == '\0') {
      *param_2 = 1;
    }
    else {
      *param_2 = 0;
    }
  }
  return;
}

