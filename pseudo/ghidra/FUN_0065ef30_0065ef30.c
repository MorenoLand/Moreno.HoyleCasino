// FUN_0065ef30  0065ef30

void FUN_0065ef30(char param_1,undefined1 param_2,char *param_3)

{
  int iVar1;
  undefined4 extraout_var;
  
  FUN_005fb720(0);
  iVar1 = FUN_005e4390(extraout_var);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 0x3a) = param_1;
    if (param_1 == '\x02') {
      *(undefined1 *)(iVar1 + 0x3b) = param_2;
    }
    else {
      strcpy((char *)(iVar1 + 0x21),param_3);
    }
  }
  return;
}

