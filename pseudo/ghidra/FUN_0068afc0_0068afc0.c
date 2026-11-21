// FUN_0068afc0  0068afc0

undefined4 FUN_0068afc0(char *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  char *local_8;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    for (local_8 = param_1; *local_8 == ' '; local_8 = local_8 + 1) {
    }
    if (local_8 != param_1) {
      sVar2 = strlen(local_8);
      memmove(param_1,local_8,sVar2 + 1);
    }
    uVar1 = 1;
  }
  return uVar1;
}

