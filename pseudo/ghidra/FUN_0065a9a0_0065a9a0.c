// FUN_0065a9a0  0065a9a0

void __fastcall FUN_0065a9a0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x218) != 0) && (cVar1 = FUN_005f54a0(), cVar1 != '\0')) {
    cVar1 = FUN_00657820();
    if (cVar1 == '\0') {
      uVar3 = FUN_006651e0(0);
      uVar3 = FUN_00675b40(*(undefined4 *)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x210),uVar3);
      FUN_00664730(*(undefined4 *)(param_1 + 0x214),uVar3);
      if (*(int *)(param_1 + 0x214) == 0) {
        uVar3 = FUN_006651e0(0);
        uVar3 = FUN_00675b40(1,0,uVar3);
        FUN_00664730(1,uVar3);
      }
    }
    else {
      iVar2 = FUN_00606570();
      if (iVar2 == 0x3fd) {
        switch(*(undefined4 *)(param_1 + 0x214)) {
        case 3:
        case 4:
          uVar3 = FUN_006651e0(0);
          uVar3 = FUN_00675b40(3,*(undefined4 *)(param_1 + 0x210),uVar3);
          FUN_00664730(3,uVar3);
          break;
        default:
          FUN_005e9f20("false","..\\casinoShell\\facemakerdialog.cpp",0x642);
          break;
        case 8:
        case 9:
          uVar3 = FUN_006651e0(0);
          uVar3 = FUN_00675b40(8,*(undefined4 *)(param_1 + 0x210),uVar3);
          FUN_00664730(8,uVar3);
        }
      }
      else if (iVar2 == 0x3fe) {
        switch(*(undefined4 *)(param_1 + 0x214)) {
        case 3:
        case 4:
          uVar3 = FUN_006651e0(0);
          uVar3 = FUN_00675b40(4,*(undefined4 *)(param_1 + 0x210),uVar3);
          FUN_00664730(4,uVar3);
          break;
        default:
          FUN_005e9f20("false","..\\casinoShell\\facemakerdialog.cpp",0x652);
          break;
        case 8:
        case 9:
          uVar3 = FUN_006651e0(0);
          uVar3 = FUN_00675b40(9,*(undefined4 *)(param_1 + 0x210),uVar3);
          FUN_00664730(9,uVar3);
        }
      }
      else if (iVar2 == 0x3ff) {
        switch(*(undefined4 *)(param_1 + 0x214)) {
        case 3:
        case 4:
          uVar3 = FUN_006651e0(0);
          uVar3 = FUN_00675b40(3,*(undefined4 *)(param_1 + 0x210),uVar3);
          FUN_00664730(3,uVar3);
          uVar3 = FUN_006651e0(0);
          uVar3 = FUN_00675b40(4,*(undefined4 *)(param_1 + 0x210),uVar3);
          FUN_00664730(4,uVar3);
          break;
        default:
          FUN_005e9f20("false","..\\casinoShell\\facemakerdialog.cpp",0x666);
          break;
        case 8:
        case 9:
          uVar3 = FUN_006651e0(0);
          uVar3 = FUN_00675b40(8,*(undefined4 *)(param_1 + 0x210),uVar3);
          FUN_00664730(8,uVar3);
          uVar3 = FUN_006651e0(0);
          uVar3 = FUN_00675b40(9,*(undefined4 *)(param_1 + 0x210),uVar3);
          FUN_00664730(9,uVar3);
        }
      }
    }
    *(undefined4 *)(DAT_016306a4 + 0x278) = *(undefined4 *)(param_1 + 0x214);
    *(undefined4 *)(DAT_016306a4 + 0x27c) = *(undefined4 *)(param_1 + 0x210);
    FUN_00657b10();
  }
  return;
}

