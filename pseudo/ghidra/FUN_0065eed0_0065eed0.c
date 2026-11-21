// FUN_0065eed0  0065eed0

void FUN_0065eed0(undefined1 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  FUN_005fb720(0);
  iVar1 = FUN_005e4390(extraout_var);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x3a) == '\x02') {
      *(undefined1 *)(iVar1 + 0x3b) = param_1;
    }
    else {
      strcpy((char *)(iVar1 + 0x21),param_2);
    }
  }
  return;
}

