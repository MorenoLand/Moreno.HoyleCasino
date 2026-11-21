// FUN_00566380  00566380

undefined4 __fastcall FUN_00566380(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) < 10) {
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 0x2c) < 100) {
    uVar1 = 2;
  }
  else if (*(int *)(param_1 + 0x2c) < 1000) {
    uVar1 = 3;
  }
  else if (*(int *)(param_1 + 0x2c) < 10000) {
    uVar1 = 4;
  }
  else if (*(int *)(param_1 + 0x2c) < 100000) {
    uVar1 = 5;
  }
  else if (*(int *)(param_1 + 0x2c) < 1000000) {
    uVar1 = 6;
  }
  else if (*(int *)(param_1 + 0x2c) < 10000000) {
    uVar1 = 7;
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}

