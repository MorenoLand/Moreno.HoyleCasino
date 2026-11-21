// FUN_00565a50  00565a50

void __thiscall FUN_00565a50(int param_1,undefined4 param_2)

{
  int local_10;
  undefined4 local_c [2];
  
  local_c[0] = 0;
  local_c[1] = 0;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    *(undefined4 *)(param_1 + 0x30) = 0x31224c;
    *(undefined4 *)(param_1 + 0x34) = 0;
    local_c[0] = 0x5d;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x30) = 0x31224c;
    *(undefined4 *)(param_1 + 0x34) = 1;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x30) = 0x31224b;
    FUN_00565cf0(0x15f);
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x30) = 0x31224d;
    FUN_00565cf0(0x15f);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x31224b;
    local_c[0] = 0x1a3;
    FUN_00565cf0(0x15f);
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x31224b;
    local_c[0] = 0x149;
    FUN_00565cf0(0x125);
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x31224b;
    local_c[0] = 0x149;
    FUN_00565cf0(0x141);
    break;
  default:
    *(undefined4 *)(param_1 + 0x34) = 2;
    *(undefined4 *)(param_1 + 0x30) = 0x31224c;
    FUN_00565cf0(*(int *)(&DAT_007437f4 + *(int *)(param_1 + 0x28) * 8) + 4);
  }
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    FUN_005eaf00(*(undefined4 *)(param_1 + 0x30));
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    FUN_005eaf00(*(undefined4 *)(param_1 + 0x30));
    (**(code **)(**(int **)(param_1 + 0x20 + local_10 * 4) + 0x48))(local_c[local_10]);
  }
  return;
}

