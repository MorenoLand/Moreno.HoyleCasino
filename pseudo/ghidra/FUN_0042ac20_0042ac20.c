// FUN_0042ac20  0042ac20

void __fastcall FUN_0042ac20(undefined4 param_1)

{
  char cVar1;
  int local_8;
  
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1,param_1);
  cVar1 = FUN_00637630();
  if ((cVar1 == '\0') || (DAT_00795f94 != '\0')) {
    for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
      if (*(int *)(*(int *)(DAT_007906d4 + 4 + local_8 * 4) + 0x110) == 0) {
        FUN_005cb9b0();
      }
    }
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0xf);
  }
  else {
    FUN_0042dcf0();
  }
  return;
}

