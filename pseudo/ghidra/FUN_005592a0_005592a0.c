// FUN_005592a0  005592a0

undefined4 __thiscall FUN_005592a0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + 4 + local_8 * 2) = *(undefined2 *)(param_3 + local_8 * 2);
  }
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f14)) {
  case 0:
  case 1:
    uVar1 = FUN_00559e90();
    break;
  case 2:
    uVar1 = FUN_00559ed0();
    break;
  case 3:
  case 4:
    uVar1 = FUN_0055a000();
    break;
  case 5:
  case 6:
  case 7:
    uVar1 = FUN_0055a040();
    break;
  case 8:
  case 9:
    uVar1 = FUN_0055a1a0();
    break;
  case 10:
    uVar1 = FUN_0055a360();
    break;
  default:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

