// FUN_00567390  00567390

void FUN_00567390(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  
  FUN_005d7f40(param_1);
  uVar4 = extraout_var;
  if (((DAT_0079343c == 0) || (*(char *)(DAT_0079343c + 0x18) == '\0')) ||
     ((*(int *)(param_1 + 0x18) != 1 &&
      ((*(int *)(param_1 + 0x18) != 4 ||
       (iVar2 = tolower((int)*(char *)(param_1 + 0x14)), iVar2 != 0x73)))))) {
    if (((DAT_0079343c == 0) || (*(char *)(DAT_0079343c + 0x18) == '\0')) &&
       (((*(int *)(param_1 + 0x18) == 4 && (*(char *)(param_1 + 4) == '\0')) && (DAT_0079343c != 0))
       )) {
      iVar2 = tolower((int)*(char *)(param_1 + 0x14));
      iVar3 = iVar2 + -0x31;
      switch(iVar2) {
      case 0x31:
        FUN_005f2a60(0x312222,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00569580(0);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 0x32:
        FUN_005f2a60(0x312223,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00569580(1);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 0x33:
        FUN_005f2a60(0x312224,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00569580(2);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 0x34:
        FUN_005f2a60(0x312225,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00569580(3);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 0x35:
        FUN_005f2a60(0x312226,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00569580(4);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 0x61:
        FUN_005f2a60(0x312227,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00568fb0(3);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 0x62:
        FUN_005f2a60(0x312228,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00568fb0(1);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 99:
        FUN_005f2a60(0x31222b,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00568fb0(5);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 100:
        FUN_005f2a60(0x31222a,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00568fb0(4);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 0x6d:
        FUN_005f2a60(0x312229,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00568fb0(0);
          *(undefined1 *)(param_1 + 4) = 1;
        }
        break;
      case 0x74:
        FUN_005f2a60(0x1391,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005db240();
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
    }
  }
  else {
    *(undefined1 *)(DAT_0079343c + 0x19) = 1;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

