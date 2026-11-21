// FUN_005580f0  005580f0

void __thiscall FUN_005580f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_1c [6];
  
  local_1c[0] = 0x85;
  local_1c[1] = 0xbc;
  local_1c[2] = 0xf3;
  local_1c[3] = 0x12a;
  local_1c[4] = 0x161;
  local_1c[5] = 0;
  while( true ) {
    if (4 < local_1c[5]) {
      return;
    }
    iVar1 = (**(code **)(**(int **)(DAT_00793424 + 4 + local_1c[5] * 4) + 0x4c))(param_1);
    if (iVar1 == local_1c[param_2]) break;
    local_1c[5] = local_1c[5] + 1;
  }
  FUN_00558040(*(undefined2 *)(*(int *)(DAT_00793424 + 4 + local_1c[5] * 4) + 400));
  return;
}

