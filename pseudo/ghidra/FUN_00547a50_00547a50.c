// FUN_00547a50  00547a50

void FUN_00547a50(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  
  FUN_005d7f40(param_1);
  if (((*(int *)(param_1 + 0x18) == 4) && (*(char *)(param_1 + 4) == '\0')) && (DAT_00793404 != 0))
  {
    uVar4 = extraout_var;
    iVar2 = tolower((int)*(char *)(param_1 + 0x14));
    iVar3 = iVar2 + -0xd;
    switch(iVar2) {
    case 0xd:
      iVar2 = FUN_005f2a60(0x31166d,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x31166d,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005449a0(6);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x62:
      iVar2 = FUN_005f2a60(0x31166a,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x31166a,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005494e0(0);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 99:
      iVar2 = FUN_005f2a60(0x31166c,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x31166c,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005494e0(2);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 100:
      iVar2 = FUN_005f2a60(0x311670,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x311670,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005449a0(4);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x68:
      iVar2 = FUN_005f2a60(0x31166e,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x31166e,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005449a0(7);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x6d:
      iVar2 = FUN_005f2a60(0x31166b,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x31166b,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005494e0(1);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x6e:
      iVar2 = FUN_005f2a60(0x311673,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x311673,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005449a0(1);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x70:
      iVar2 = FUN_005f2a60(0x311671,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x311671,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005449a0(3);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x73:
      iVar2 = FUN_005f2a60(0x31166f,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x31166f,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005449a0(5);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x74:
      FUN_005f2a60(0x1391,0);
      cVar1 = FUN_006026d0(iVar3,uVar4);
      if (cVar1 != '\0') {
        FUN_005db240();
        *(undefined1 *)(param_1 + 4) = 1;
      }
      break;
    case 0x79:
      iVar2 = FUN_005f2a60(0x311672,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x311672,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005449a0(0);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
    }
  }
  return;
}

