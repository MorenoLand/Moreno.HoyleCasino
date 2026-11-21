// FUN_00526b50  00526b50

void FUN_00526b50(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 extraout_var;
  
  FUN_005d9f50(param_1,param_2);
  cVar1 = FUN_00523440(extraout_var);
  if (((cVar1 == '\0') && (*(char *)(DAT_00793374 + 0xdbc) == '\0')) &&
     (*(int *)(DAT_00793374 + 0xdb8) != -1)) {
    *(undefined4 *)(DAT_00793374 + 0xdb8) = 0xffffffff;
    FUN_005226b0();
  }
  return;
}

