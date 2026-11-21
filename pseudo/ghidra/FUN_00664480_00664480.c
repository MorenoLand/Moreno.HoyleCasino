// FUN_00664480  00664480

void __thiscall FUN_00664480(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_7c [29];
  int local_8;
  
  local_7c[0] = 10;
  local_7c[1] = 1;
  local_7c[2] = 0xf;
  local_7c[3] = 0x14;
  local_7c[4] = 2;
  local_7c[5] = 0x3e;
  local_7c[6] = 0x3d;
  local_7c[7] = 0x3c;
  local_7c[8] = 0x3e;
  local_7c[9] = 0x3d;
  local_7c[10] = 0x3c;
  local_7c[0xb] = 0x6e;
  local_7c[0xc] = 6;
  local_7c[0xd] = 0x20;
  local_7c[0xe] = 0x1f;
  local_7c[0xf] = 0x1e;
  local_7c[0x10] = 0x34;
  local_7c[0x11] = 0x33;
  local_7c[0x12] = 0x32;
  local_7c[0x13] = 0x2d;
  local_7c[0x14] = 0x2c;
  local_7c[0x15] = 0x2b;
  local_7c[0x16] = 0x2a;
  local_7c[0x17] = 0x29;
  local_7c[0x18] = 0x28;
  local_7c[0x19] = 0x50;
  local_7c[0x1a] = 0x78;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  for (local_8 = 0; local_8 < 0x1b; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x5c + local_8 * 4) != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      iVar2 = local_7c[local_8];
      iVar3 = (**(code **)(*DAT_0162ee84 + 0x324))(local_8);
      (**(code **)(**(int **)(param_1 + 0x5c + local_8 * 4) + 0x6c))(iVar1 + iVar2 + iVar3);
    }
  }
  return;
}

