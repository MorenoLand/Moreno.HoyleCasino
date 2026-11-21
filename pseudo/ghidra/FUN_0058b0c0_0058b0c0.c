// FUN_0058b0c0  0058b0c0

void FUN_0058b0c0(int param_1)

{
  char cVar1;
  undefined4 extraout_var;
  
  if (*(char *)(param_1 + 4) == '\0') {
    cVar1 = FUN_005f56a0(param_1);
    if (cVar1 == '\0') {
      if ((*(int *)(DAT_00793584 + 0x3b70) != 0) &&
         (cVar1 = FUN_005f54a0(extraout_var), cVar1 != '\0')) {
        FUN_0058a600();
      }
    }
    else {
      FUN_0058a570();
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}

