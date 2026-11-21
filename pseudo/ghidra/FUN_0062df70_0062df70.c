// FUN_0062df70  0062df70

undefined * FUN_0062df70(int *param_1)

{
  int iVar1;
  FILE *pFVar2;
  int iVar3;
  undefined *puVar4;
  char *_Format;
  
  iVar3 = *param_1 % 5;
  iVar1 = *param_1;
  puVar4 = PTR_DAT_00762088 + -4;
  if (DAT_0076208c == 0) {
    *(undefined4 *)(PTR_DAT_00762088 + -4) = 0;
  }
  else {
    *(int *)(PTR_DAT_00762088 + -4) =
         ((int)PTR_DAT_00762084 - (int)PTR_DAT_00762088 >> 2) * 5 + DAT_0076208c;
  }
  if ((iVar3 < 0) || (4 < iVar3)) {
    _Format = "random: state info corrupted; not changed.\n";
    pFVar2 = __iob_func();
    fprintf(pFVar2 + 2,_Format);
  }
  else {
    DAT_00762090 = *(int *)(&DAT_00761fd8 + iVar3 * 4);
    DAT_00762094 = *(int *)(&DAT_00761fec + iVar3 * 4);
    DAT_0076208c = iVar3;
  }
  PTR_DAT_00762088 = (undefined *)(param_1 + 1);
  if (DAT_0076208c != 0) {
    PTR_DAT_00762084 = (undefined *)((int)PTR_DAT_00762088 + (iVar1 / 5) * 4);
    PTR_DAT_00762080 =
         (undefined *)((int)PTR_DAT_00762088 + ((iVar1 / 5 + DAT_00762094) % DAT_00762090) * 4);
  }
  PTR_PTR_00762098 = (undefined *)((int)PTR_DAT_00762088 + DAT_00762090 * 4);
  return puVar4;
}

