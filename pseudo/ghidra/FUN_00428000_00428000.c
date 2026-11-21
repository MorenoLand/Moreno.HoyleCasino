// FUN_00428000  00428000

void FUN_00428000(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(DAT_007906d4 + 0xac4) == 0) {
    iVar1 = FUN_005dcb00(param_1);
    if ((*(int *)(iVar1 + 8) == 0x16) ||
       (iVar1 = FUN_005dcb00(param_1), *(int *)(iVar1 + 8) == 0x15)) {
      FUN_00428470(param_1,2,1);
    }
    else {
      FUN_00428470(param_1,0,1);
    }
  }
  else {
    FUN_00428be0(param_1);
    iVar1 = FUN_005dcb00(param_1);
    switch(*(undefined4 *)(iVar1 + 8)) {
    case 0x13:
      FUN_00428470(param_1,1,1);
      FUN_00428470(param_1,4,1);
      FUN_004288c0(param_1);
      break;
    case 0x14:
      FUN_00428470(param_1,1,1);
      FUN_004288c0(param_1);
      iVar1 = FUN_0062fbf0(4);
      if (iVar1 == 0) {
        FUN_00428470(param_1,4,1);
      }
      iVar1 = FUN_0062fbf0(4);
      if (iVar1 == 0) {
        FUN_00428470(param_1,0x3d,1);
      }
      break;
    case 0x15:
      FUN_00428470(param_1,3,1);
      FUN_00428a50(param_1);
      iVar1 = FUN_0062fbf0(2);
      if (iVar1 == 0) {
        FUN_00428470(param_1,5,1);
      }
      break;
    case 0x16:
      FUN_00428470(param_1,3,1);
      FUN_00428470(param_1,5,1);
      FUN_00428a50(param_1);
      break;
    case 0x17:
      FUN_00428470(param_1,1,1);
      FUN_004288c0(param_1);
      iVar1 = FUN_0062fbf0(4);
      if (iVar1 == 0) {
        FUN_00428470(param_1,4,1);
      }
      FUN_00428470(param_1,0x2d,1);
      FUN_00428470(param_1,0x2e,1);
      break;
    case 0x18:
      FUN_00428470(param_1,1,1);
      FUN_004288c0(param_1);
      iVar1 = FUN_0062fbf0(2);
      if (iVar1 != 0) {
        FUN_00428470(param_1,4,1);
      }
      FUN_00428470(param_1,0x31,1);
      FUN_00428470(param_1,0x36,1);
      break;
    case 0x19:
      FUN_00428470(param_1,1,1);
      FUN_004288c0(param_1);
      iVar1 = FUN_0062fbf0(2);
      if (iVar1 != 0) {
        FUN_00428470(param_1,4,1);
      }
      iVar1 = FUN_0062fbf0(100);
      if (iVar1 < 10) {
        FUN_00428470(param_1,0x11,1);
      }
      break;
    case 0x1a:
      FUN_00428470(param_1,1,1);
      FUN_004288c0(param_1);
      iVar1 = FUN_0062fbf0(4);
      if (iVar1 < 2) {
        FUN_00428470(param_1,4,1);
      }
      switch(*(undefined4 *)(DAT_007906d4 + 0xac4)) {
      case 4:
      case 6:
      case 8:
      case 10:
        FUN_00428470(param_1,*(int *)(DAT_007906d4 + 0xac4) + 8,1);
      }
      break;
    case 0x1b:
      FUN_00428470(param_1,1,1);
      iVar1 = FUN_0062fbf0(2);
      if (iVar1 == 0) {
        FUN_00428470(param_1,0x3d,1);
      }
      iVar1 = FUN_0062fbf0(100);
      if (iVar1 < 10) {
        FUN_00428470(param_1,0x12,1);
      }
      break;
    case 0x1c:
      FUN_00428470(param_1,1,1);
      FUN_004288c0(param_1);
      iVar1 = FUN_0062fbf0(2);
      if (iVar1 != 0) {
        FUN_00428470(param_1,4,1);
      }
      break;
    default:
      uVar3 = 1;
      uVar2 = FUN_00428880(1);
      FUN_00428470(param_1,uVar2,uVar3);
    }
  }
  return;
}

