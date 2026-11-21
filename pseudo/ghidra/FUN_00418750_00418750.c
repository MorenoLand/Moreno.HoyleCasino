// FUN_00418750  00418750

void __fastcall FUN_00418750(int param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_40 [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dec9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_40[0] = 5;
  local_40[1] = 5;
  local_40[2] = 6;
  local_40[3] = 5;
  local_40[4] = 2;
  local_40[5] = 5;
  local_40[6] = 3;
  local_40[7] = 1;
  local_40[8] = 2;
  local_40[9] = 4;
  local_40[10] = 6;
  cVar1 = FUN_005da830(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    iVar2 = FUN_00418400(0xffffffff);
    local_64 = local_40[*(char *)(iVar2 + 1) + 7];
  }
  else {
    local_64 = *(int *)(DAT_007947e0 + 0x4ef4);
  }
  if (*(int *)(param_1 + 0x464) == 0) {
    pvVar3 = operator_new(0x810);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_68 = 0;
    }
    else {
      local_68 = FUN_00642e10();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x464) = local_68;
  }
  FUN_00642e70(local_40[local_64]);
  FUN_00418ed0();
  for (local_40[0xb] = 0; local_40[0xb] < 4; local_40[0xb] = local_40[0xb] + 1) {
    pvVar3 = operator_new(0xf0);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_6c = 0;
    }
    else {
      local_6c = FUN_0041d860();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x468 + local_40[0xb] * 4) = local_6c;
    FUN_005f53e0(local_40[0xb]);
    uVar4 = FUN_0064c8a0(0,0);
    *(int *)(param_1 + 0x478 + local_40[0xb] * 8) = (int)uVar4;
    *(int *)(param_1 + 0x47c + local_40[0xb] * 8) = (int)((ulonglong)uVar4 >> 0x20);
  }
  *(undefined1 *)(param_1 + 0x4d8) = 0;
  *(undefined1 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  FUN_004189a0();
  ExceptionList = local_10;
  return;
}

