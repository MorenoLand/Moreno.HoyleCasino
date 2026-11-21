// FUN_00532760  00532760

void __fastcall FUN_00532760(int param_1)

{
  *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  switch(*(undefined4 *)(param_1 + 0x1d8)) {
  case 1:
    (**(code **)(**(int **)(param_1 + 0x1d4) + 0x74))();
    FUN_00532200();
    break;
  case 2:
    break;
  case 3:
    switch(*(undefined4 *)(DAT_007947e0 + 0x4f10)) {
    case 0:
    case 1:
    case 2:
      *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(DAT_007947e0 + 0x4ed0);
      *(undefined4 *)(param_1 + 0x1f0) = 0xfa;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(DAT_007947e0 + 0x4ed4);
      *(undefined4 *)(param_1 + 0x1f0) = 0x2ee;
      break;
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(DAT_007947e0 + 0x4ed8);
      *(undefined4 *)(param_1 + 0x1f0) = 1000;
      break;
    case 6:
    case 7:
      *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(DAT_007947e0 + 0x4edc);
      *(undefined4 *)(param_1 + 0x1f0) = 0x9c4;
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
      *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(DAT_007947e0 + 0x4ee0);
      *(undefined4 *)(param_1 + 0x1f0) = 0x1d4c;
      break;
    default:
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\slotmachinedisplay.cpp",0x8f8);
    }
    break;
  case 4:
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    break;
  default:
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  FUN_005eb570();
  return;
}

