// FUN_004c70f0  004c70f0

void __thiscall FUN_004c70f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xe;
    *(undefined4 *)(param_1 + 0x14) = 0x1e;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xda;
    *(undefined4 *)(param_1 + 0x14) = 0x1e;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0x212;
    *(undefined4 *)(param_1 + 0x14) = 0x1e;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0x212;
    *(undefined4 *)(param_1 + 0x14) = 0xaa;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0x212;
    *(undefined4 *)(param_1 + 0x14) = 0x136;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x10) = 0x141;
    *(undefined4 *)(param_1 + 0x14) = 0x136;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x10) = 0xe;
    *(undefined4 *)(param_1 + 0x14) = 0x136;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x10) = 0xe;
    *(undefined4 *)(param_1 + 0x14) = 0xaa;
    break;
  case 0xffffffff:
    *(undefined4 *)(param_1 + 0x10) = 0x77;
    *(undefined4 *)(param_1 + 0x14) = 0xd5;
  }
  return;
}

