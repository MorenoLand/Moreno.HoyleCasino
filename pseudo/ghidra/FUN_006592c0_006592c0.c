// FUN_006592c0  006592c0

void __fastcall FUN_006592c0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x278) < 3) {
    uVar3 = FUN_006651e0(0);
    uVar3 = FUN_00675b40(*(undefined4 *)(param_1 + 0x278),0,uVar3);
    FUN_00664730(*(undefined4 *)(param_1 + 0x278),uVar3);
    if (*(int *)(param_1 + 0x278) == 0) {
      uVar3 = FUN_006651e0(0);
      uVar3 = FUN_00675b40(1,0,uVar3);
      FUN_00664730(1,uVar3);
    }
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  else {
    cVar1 = FUN_00657820();
    if (cVar1 == '\0') {
      FUN_00664730(*(undefined4 *)(param_1 + 0x278),0);
    }
    else {
      iVar2 = FUN_00606570();
      if (iVar2 == 0x3fd) {
        switch(*(undefined4 *)(param_1 + 0x278)) {
        case 3:
        case 4:
          FUN_00664730(3,0);
          break;
        default:
          FUN_005e9f20("false","..\\casinoShell\\facemakerdialog.cpp",0x43a);
          break;
        case 8:
        case 9:
          FUN_00664730(8,0);
        }
      }
      else if (iVar2 == 0x3fe) {
        switch(*(undefined4 *)(param_1 + 0x278)) {
        case 3:
        case 4:
          FUN_00664730(4,0);
          break;
        default:
          FUN_005e9f20("false","..\\casinoShell\\facemakerdialog.cpp",0x448);
          break;
        case 8:
        case 9:
          FUN_00664730(9,0);
        }
      }
      else if (iVar2 == 0x3ff) {
        switch(*(undefined4 *)(param_1 + 0x278)) {
        case 3:
        case 4:
          FUN_00664730(3,0);
          FUN_00664730(4,0);
          break;
        default:
          FUN_005e9f20("false","..\\casinoShell\\facemakerdialog.cpp",0x458);
          break;
        case 8:
        case 9:
          FUN_00664730(8,0);
          FUN_00664730(9,0);
        }
      }
    }
    FUN_006067e0();
    FUN_006067e0();
    *(undefined4 *)(param_1 + 0x27c) = 0xffffffff;
  }
  uVar3 = 0;
  iVar2 = FUN_00657bb0(0);
  FUN_00657e60(iVar2 * 0xc,uVar3);
  FUN_00657b10();
  return;
}

