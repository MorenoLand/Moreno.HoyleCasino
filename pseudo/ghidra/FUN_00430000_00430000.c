// FUN_00430000  00430000

void __fastcall FUN_00430000(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00434af0(param_1);
  if (cVar1 == '\0') {
    FUN_0042a4a0(*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0));
  }
  FUN_0042a270();
  cVar1 = FUN_00434af0(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00437150();
    if (cVar1 == '\0') {
      cVar1 = FUN_00437250();
      if (cVar1 == '\0') {
        cVar1 = FUN_00437200();
        if (cVar1 == '\0') {
          cVar1 = FUN_00437340();
          if (cVar1 != '\0') {
            *(undefined4 *)(DAT_007906d4 + 0xaec) = 2;
            *(undefined4 *)(DAT_007906d4 + 0xadc) = 0;
            *(undefined1 *)(DAT_007906d4 + 0xac0) = 0;
            *(undefined4 *)(DAT_007906d4 + 0xac4) = 0;
            cVar1 = FUN_005da7b0();
            if (cVar1 != '\0') {
              (**(code **)(*DAT_007906d0 + 0x2d4))();
            }
          }
        }
        else {
          *(int *)(DAT_007906d4 + 0xadc) = *(int *)(DAT_007906d4 + 0xadc) + 1;
          *(undefined4 *)(DAT_007906d4 + 0xaec) = 1;
          *(undefined4 *)(DAT_007906d4 + 0xac4) = 0;
        }
      }
      else {
        *(int *)(DAT_007906d4 + 0xadc) = *(int *)(DAT_007906d4 + 0xadc) + -1;
        *(undefined4 *)(DAT_007906d4 + 0xaec) = 3;
      }
    }
    else {
      *(int *)(DAT_007906d4 + 0xadc) = *(int *)(DAT_007906d4 + 0xadc) + 1;
      *(undefined4 *)(DAT_007906d4 + 0xaec) = 4;
    }
  }
  else {
    *(int *)(DAT_007906d4 + 0xac4) = *(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0)
    ;
  }
  return;
}

