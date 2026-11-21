// FUN_005617a0  005617a0

void __fastcall FUN_005617a0(int param_1)

{
  char cVar1;
  int iVar2;
  int local_2c [6];
  char acStack_14 [8];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_0056b910();
  local_8 = iVar2 + 1;
  local_2c[0] = 1;
  local_2c[1] = 5;
  local_2c[2] = 10;
  local_2c[3] = 0x19;
  local_2c[4] = 0x32;
  for (local_2c[5] = 0; local_2c[5] < 5; local_2c[5] = local_2c[5] + 1) {
    cVar1 = FUN_00568530(local_2c[local_2c[5]]);
    if (cVar1 == '\0') {
      acStack_14[local_2c[5]] = '\0';
      (**(code **)(**(int **)(param_1 + 0x60 + local_2c[5] * 4) + 0xd0))();
    }
    else {
      acStack_14[local_2c[5]] = '\x01';
      (**(code **)(**(int **)(param_1 + 0x60 + local_2c[5] * 4) + 0xcc))();
    }
  }
  for (local_2c[5] = 0; local_2c[5] < 5; local_2c[5] = local_2c[5] + 1) {
    if (acStack_14[local_2c[5]] == '\0') {
      (**(code **)(**(int **)(param_1 + 0x60 + local_2c[5] * 4) + 0xb0))(0);
      *(undefined1 *)(*(int *)(param_1 + 0x60 + local_2c[5] * 4) + 0x1e0) = 0;
    }
    else if (local_8 == local_2c[local_2c[5]]) {
      *(undefined1 *)(*(int *)(param_1 + 0x60 + local_2c[5] * 4) + 0x1e0) = 1;
      (**(code **)(**(int **)(param_1 + 0x60 + local_2c[5] * 4) + 0xb0))(3);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x60 + local_2c[5] * 4) + 0xb0))(0);
      *(undefined1 *)(*(int *)(param_1 + 0x60 + local_2c[5] * 4) + 0x1e0) = 0;
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

