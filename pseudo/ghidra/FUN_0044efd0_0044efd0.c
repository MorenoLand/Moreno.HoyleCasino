// FUN_0044efd0  0044efd0

void __thiscall FUN_0044efd0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2b6) = 0;
  *(undefined2 *)(param_1 + 0x2b8) = 0;
  *(undefined2 *)(param_1 + 700) = 0;
  *(undefined2 *)(param_1 + 0x2ba) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 800) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x2d8 + local_8 * 4) = 0;
    *(undefined4 *)(param_1 + 0x300 + local_8 * 4) = 0;
    *(undefined4 *)(param_1 + 0x328 + local_8 * 4) = 0;
  }
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x18 + local_8 * 0x2c) = 0;
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      *(undefined4 *)(param_1 + local_8 * 0x2c + 0x1c + local_c * 4) = 0;
      *(undefined4 *)(param_1 + local_8 * 0x2c + 0x30 + local_c * 4) = 0xffffffff;
    }
  }
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    uVar1 = FUN_004604d0(param_2,local_8);
    *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
  }
  uVar1 = FUN_00642890(param_1 + 4,7,4);
  *(undefined2 *)(param_1 + 0x2b6) = uVar1;
  uVar1 = FUN_00642890(param_1 + 4,7,1);
  *(undefined2 *)(param_1 + 0x2b8) = uVar1;
  uVar1 = FUN_00642890(param_1 + 4,7,2);
  *(undefined2 *)(param_1 + 700) = uVar1;
  uVar1 = FUN_00642890(param_1 + 4,7,3);
  *(undefined2 *)(param_1 + 0x2ba) = uVar1;
  FUN_0044f240();
  FUN_0044f460();
  return;
}

