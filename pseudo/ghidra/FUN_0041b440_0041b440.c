// FUN_0041b440  0041b440

void __thiscall FUN_0041b440(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_10;
  int local_8;
  
  if (param_2 == -1) {
    local_8 = -1;
  }
  else {
    if (param_2 == 4) {
      local_10 = 0;
    }
    else {
      local_10 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
    }
    local_8 = local_10;
  }
  switch(*(undefined4 *)(param_1 + 0x4d4)) {
  case 0:
    FUN_00419a10(param_2);
    break;
  case 1:
    cVar1 = FUN_0041b990(param_2,0xffffffff);
    if (cVar1 == '\0') {
      iVar2 = FUN_00419980(param_2,local_8);
      if (iVar2 == 0x15) {
        FUN_00419a10(param_2);
      }
      else if ((*(char *)(param_1 + 0x118 + param_2 * 0x118) != '\0') &&
              (cVar1 = FUN_0041ade0(param_2,local_8), cVar1 == '\0')) {
        FUN_00419a10(param_2);
      }
    }
    else {
      FUN_0041bba0(param_2,local_8,0,1,1);
      FUN_004191f0(param_2,local_8,6);
      FUN_00419a10(param_2);
      iVar2 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar2 + 0x4b0) = 1;
    }
    break;
  case 2:
    cVar1 = FUN_0041b990(param_2,0xffffffff);
    if (cVar1 != '\0') {
      FUN_0041bba0(param_2,local_8,0,1,1);
      FUN_004191f0(param_2,local_8,6);
      iVar2 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar2 + 0x4b0) = 1;
    }
    FUN_00419a10(param_2);
    break;
  case 4:
    FUN_00419a10(param_2);
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4b0) = 1;
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0xffffffff;
  return;
}

