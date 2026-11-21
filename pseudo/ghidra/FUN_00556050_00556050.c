// FUN_00556050  00556050

void FUN_00556050(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  
  FUN_005d7f40(param_1);
  if (((*(int *)(param_1 + 0x18) == 4) && (*(char *)(param_1 + 4) == '\0')) && (DAT_00793420 != 0))
  {
    uVar4 = extraout_var;
    iVar2 = tolower((int)*(char *)(param_1 + 0x14));
    iVar3 = iVar2 + -0x31;
    switch(iVar2) {
    case 0x31:
      iVar2 = FUN_005f2a60(0x30f342,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f342,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005580f0(0);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x32:
      iVar2 = FUN_005f2a60(0x30f343,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f343,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005580f0(1);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x33:
      iVar2 = FUN_005f2a60(0x30f344,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f344,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005580f0(2);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x34:
      iVar2 = FUN_005f2a60(0x30f345,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f345,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005580f0(3);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x35:
      iVar2 = FUN_005f2a60(0x30f346,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f346,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005580f0(4);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x61:
      iVar2 = FUN_005f2a60(0x30f347,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f347,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00557ae0(3);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x62:
      iVar2 = FUN_005f2a60(0x30f349,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f349,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00557ae0(1);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 99:
      iVar2 = FUN_005f2a60(0x30f34c,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f34c,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00557ae0(5);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 100:
      iVar2 = FUN_005f2a60(0x30f34b,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f34b,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00557ae0(4);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x6d:
      iVar2 = FUN_005f2a60(0x30f34a,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f34a,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00557ae0(0);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x72:
      iVar2 = FUN_005f2a60(0x30f348,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x30f348,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_00557ae0(2);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      break;
    case 0x74:
      iVar2 = FUN_005f2a60(0x1391,0);
      if (iVar2 != 0) {
        FUN_005f2a60(0x1391,0);
        cVar1 = FUN_006026d0(iVar3,uVar4);
        if (cVar1 != '\0') {
          FUN_005db240();
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
    }
  }
  return;
}

