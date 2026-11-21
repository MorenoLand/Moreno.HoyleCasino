// FUN_00531620  00531620

void __fastcall FUN_00531620(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
  if (*(char *)(param_1 + 0x184) == '\0') {
    switch(*(undefined4 *)(param_1 + 0x18c)) {
    case 1:
      (**(code **)(**(int **)(param_1 + 0x188) + 0x70))();
      uVar1 = FUN_00630f40("SID_SLOTMACHINES_CURRENTJACKPOT_ELLIPSIS");
      (**(code **)(**(int **)(param_1 + 0x188) + 0xb4))(uVar1);
      iVar2 = FUN_005ef050();
      *(int *)(param_1 + 400) = iVar2 + 3;
      FUN_005ecc60(*(undefined4 *)(param_1 + 400));
      *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x18) + 10;
      (**(code **)(**(int **)(param_1 + 0x188) + 0x44))
                (*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x14));
      (**(code **)(**(int **)(param_1 + 0x188) + 0x74))();
      break;
    case 2:
      FUN_00531b50(2,4);
      break;
    case 3:
      (**(code **)(**(int **)(param_1 + 0x188) + 0x74))();
      switch(*(undefined4 *)(DAT_007947e0 + 0x4f10)) {
      case 0:
      case 1:
      case 2:
        *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(DAT_007947e0 + 0x4ed0);
        *(undefined4 *)(param_1 + 0x1bc) = 0xfa;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(DAT_007947e0 + 0x4ed4);
        *(undefined4 *)(param_1 + 0x1bc) = 0x2ee;
        break;
      case 4:
      case 5:
        *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(DAT_007947e0 + 0x4ed8);
        *(undefined4 *)(param_1 + 0x1bc) = 1000;
        break;
      case 6:
      case 7:
        *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(DAT_007947e0 + 0x4edc);
        *(undefined4 *)(param_1 + 0x1bc) = 0x9c4;
        break;
      case 8:
      case 9:
      case 10:
      case 0xb:
        *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(DAT_007947e0 + 0x4ee0);
        *(undefined4 *)(param_1 + 0x1bc) = 0x1d4c;
        break;
      default:
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\slotmachinedisplay.cpp",0x76b);
      }
      break;
    case 4:
      FUN_00531a10();
      *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x18) + 10;
      (**(code **)(**(int **)(param_1 + 0x188) + 0x44))
                (*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x14));
      (**(code **)(**(int **)(param_1 + 0x188) + 0x74))();
      break;
    case 5:
      FUN_00531a10();
      *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x18) + 10;
      (**(code **)(**(int **)(param_1 + 0x188) + 0x44))
                (*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x14));
      (**(code **)(**(int **)(param_1 + 0x188) + 0x74))();
      *(undefined4 *)(param_1 + 0x18c) = 0;
      break;
    default:
      *(undefined4 *)(param_1 + 0x18c) = 0;
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x188) + 0x70))();
    FUN_00531a10();
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x18) + 10;
    (**(code **)(**(int **)(param_1 + 0x188) + 0x44))
              (*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x14));
    (**(code **)(**(int **)(param_1 + 0x188) + 0x74))();
  }
  FUN_005eb570();
  return;
}

