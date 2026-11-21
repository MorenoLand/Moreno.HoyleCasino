// FUN_0062ddd0  0062ddd0

undefined * FUN_0062ddd0(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  FILE *pFVar2;
  char *_Format;
  
  puVar1 = PTR_DAT_00762088 + -4;
  if (DAT_0076208c == 0) {
    *(undefined4 *)(PTR_DAT_00762088 + -4) = 0;
  }
  else {
    *(int *)(PTR_DAT_00762088 + -4) =
         ((int)PTR_DAT_00762084 - (int)PTR_DAT_00762088 >> 2) * 5 + DAT_0076208c;
  }
  if (param_3 < 8) {
    _Format = "random: not enough state (%d bytes); ignored.\n";
    pFVar2 = __iob_func();
    fprintf(pFVar2 + 2,_Format,param_3);
    puVar1 = (undefined *)0x0;
  }
  else {
    if (param_3 < 0x20) {
      DAT_0076208c = 0;
      DAT_00762090 = 0;
      DAT_00762094 = 0;
    }
    else if (param_3 < 0x40) {
      DAT_0076208c = 1;
      DAT_00762090 = 7;
      DAT_00762094 = 3;
    }
    else if (param_3 < 0x80) {
      DAT_0076208c = 2;
      DAT_00762090 = 0xf;
      DAT_00762094 = 1;
    }
    else if (param_3 < 0x100) {
      DAT_0076208c = 3;
      DAT_00762090 = 0x1f;
      DAT_00762094 = 3;
    }
    else {
      DAT_0076208c = 4;
      DAT_00762090 = 0x3f;
      DAT_00762094 = 1;
    }
    PTR_DAT_00762088 = (undefined *)(param_2 + 4);
    PTR_PTR_00762098 = PTR_DAT_00762088 + DAT_00762090 * 4;
    FUN_0062dd10(param_1);
    if (DAT_0076208c == 0) {
      *(undefined4 *)(PTR_DAT_00762088 + -4) = 0;
    }
    else {
      *(int *)(PTR_DAT_00762088 + -4) =
           ((int)PTR_DAT_00762084 - (int)PTR_DAT_00762088 >> 2) * 5 + DAT_0076208c;
    }
  }
  return puVar1;
}

