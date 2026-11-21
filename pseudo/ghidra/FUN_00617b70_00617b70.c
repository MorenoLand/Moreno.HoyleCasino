// FUN_00617b70  00617b70

undefined4 FUN_00617b70(char *param_1,char *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  if ((((param_3 == 0x80) || (param_3 == 0x82)) || (param_3 == 0x84)) || (param_3 == 0x88)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((((param_2 == (char *)0x0) && (*param_1 == '\0')) &&
        ((param_1[1] == '\0' && (param_1[2] == '\0')))) ||
       ((param_2 != (char *)0x0 && (*param_2 == '\0')))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (((param_2 == (char *)0x0) && (*param_1 == '\0')) ||
          ((param_2 != (char *)0x0 && (*param_2 == '\0')))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

