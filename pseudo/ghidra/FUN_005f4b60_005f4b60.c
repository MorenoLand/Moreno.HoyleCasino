// FUN_005f4b60  005f4b60

uint __thiscall FUN_005f4b60(int *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  
  cVar2 = FUN_005f54c0();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 == 1) {
      if (*(char *)(param_2 + 4) == '\0') {
        uVar3 = (**(code **)(*param_1 + 0x84))(param_2);
        if ((uVar3 & 0xff) != 0) {
          if ((*(byte *)(param_1 + 2) == 0) && ((*(uint *)(param_2 + 0x1c) & 8) != 0)) {
            uVar3 = (**(code **)(*param_1 + 0x28))(param_2);
            return uVar3;
          }
          uVar3 = (uint)*(byte *)(param_1 + 2);
          if ((*(char *)((int)param_1 + 9) == '\0') &&
             (uVar3 = param_2, (*(uint *)(param_2 + 0x1c) & 0x10) != 0)) {
            uVar3 = (**(code **)(*param_1 + 0x2c))(param_2);
            return uVar3;
          }
        }
        param_2 = uVar3 & 0xffffff00;
      }
      else {
        param_2 = param_2 & 0xffffff00;
      }
    }
    else if (iVar1 == 2) {
      if ((*(char *)(param_2 + 4) == '\0') &&
         (((cVar2 = (**(code **)(*param_1 + 0x84))(param_2), cVar2 != '\0' ||
           ((char)param_1[2] != '\0')) || (*(char *)((int)param_1 + 9) != '\0')))) {
        if (((char)param_1[2] != '\0') && ((*(uint *)(param_2 + 0x1c) & 8) != 0)) {
          uVar3 = (**(code **)(*param_1 + 0x30))(param_2);
          return uVar3;
        }
        piVar4 = param_1;
        if ((*(char *)((int)param_1 + 9) != '\0') &&
           (piVar4 = (int *)0x0, (*(uint *)(param_2 + 0x1c) & 0x10) != 0)) {
          uVar3 = (**(code **)(*param_1 + 0x34))(param_2);
          return uVar3;
        }
        return (uint)piVar4 & 0xffffff00;
      }
      param_2 = 0;
    }
    else if (iVar1 == 4) {
      if (*(char *)(param_2 + 4) == '\0') {
        param_2 = (**(code **)(*param_1 + 0x38))(param_2);
      }
      else {
        param_2 = param_2 & 0xffffff00;
      }
    }
    else {
      param_2 = 1;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

