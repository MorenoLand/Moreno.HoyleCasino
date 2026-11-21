// FUN_00658d40  00658d40

undefined4 __thiscall FUN_00658d40(int param_1,undefined1 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if (param_3 == -1) {
    param_3 = *(int *)(param_1 + 0x278);
  }
  iVar2 = FUN_006651c0(param_3);
  if (iVar2 != 0) {
    cVar1 = FUN_006596d0();
    if (cVar1 != '\0') {
      switch(param_2) {
      case 0:
        if (*(char *)(*(int *)(param_1 + 0x1dc) + 0x4e + param_3) <
            *(char *)(*(int *)(param_1 + 0x1dc) + 0x4d + param_3)) {
          param_3 = param_3 + 1;
        }
        break;
      case 1:
        if (*(char *)(*(int *)(param_1 + 0x1dc) + 0x41 + param_3) <=
            *(char *)(*(int *)(param_1 + 0x1dc) + 0x42 + param_3)) {
          param_3 = param_3 + 1;
        }
        break;
      case 2:
        if (*(char *)(*(int *)(param_1 + 0x1dc) + 0x4d + param_3) <
            *(char *)(*(int *)(param_1 + 0x1dc) + 0x4e + param_3)) {
          param_3 = param_3 + 1;
        }
        break;
      case 3:
        if (*(char *)(*(int *)(param_1 + 0x1dc) + 0x42 + param_3) <
            *(char *)(*(int *)(param_1 + 0x1dc) + 0x41 + param_3)) {
          param_3 = param_3 + 1;
        }
      }
    }
    switch(param_2) {
    case 0:
      cVar1 = *(char *)(*(int *)(param_1 + 0x1dc) + 0x4d + param_3);
      iVar2 = FUN_00664d40(param_3);
      if (iVar2 <= cVar1 + -1) {
        return 1;
      }
      break;
    case 1:
      cVar1 = *(char *)(*(int *)(param_1 + 0x1dc) + 0x41 + param_3);
      iVar2 = FUN_00664f50(param_3);
      if (cVar1 + 1 <= iVar2) {
        return 1;
      }
      break;
    case 2:
      cVar1 = *(char *)(*(int *)(param_1 + 0x1dc) + 0x4d + param_3);
      iVar2 = FUN_00664dd0(param_3);
      if (cVar1 + 1 <= iVar2) {
        return 1;
      }
      break;
    case 3:
      cVar1 = *(char *)(*(int *)(param_1 + 0x1dc) + 0x41 + param_3);
      iVar2 = FUN_00664ec0(param_3);
      if (iVar2 <= cVar1 + -1) {
        return 1;
      }
    }
  }
  return 0;
}

