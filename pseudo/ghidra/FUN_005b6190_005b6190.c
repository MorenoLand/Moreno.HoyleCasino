// FUN_005b6190  005b6190

void __fastcall FUN_005b6190(int param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_44;
  int local_3c [11];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7e87;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_3c[0] = 5;
  local_3c[1] = 5;
  local_3c[2] = 6;
  local_3c[3] = 5;
  local_3c[4] = 2;
  local_3c[5] = 5;
  local_3c[6] = 3;
  local_3c[7] = 1;
  local_3c[8] = 2;
  local_3c[9] = 4;
  local_3c[10] = 6;
  cVar1 = FUN_005da830(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    iVar2 = FUN_005b5fb0(0xffffffff);
    local_74 = local_3c[*(char *)(iVar2 + 9) + 7];
  }
  else {
    local_74 = *(int *)(DAT_007947e0 + 0x4ef4);
  }
  if (*(int *)(param_1 + 0x57c) == 0) {
    pvVar3 = operator_new(0x810);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_78 = 0;
    }
    else {
      local_78 = FUN_00642e10();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x57c) = local_78;
  }
  FUN_00642e70(local_3c[local_74]);
  FUN_005b7ef0();
  for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
    pvVar3 = operator_new(0xf0);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_7c = 0;
    }
    else {
      local_7c = FUN_005b85a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x580 + local_44 * 4) = local_7c;
    FUN_005f53e0(local_44);
    pvVar3 = operator_new(0xf0);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = FUN_005b85a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x634 + local_44 * 4) = local_80;
    FUN_005f53e0(local_44);
    uVar4 = FUN_0064c8a0(0,0);
    *(int *)(param_1 + 0x590 + local_44 * 8) = (int)uVar4;
    *(int *)(param_1 + 0x594 + local_44 * 8) = (int)((ulonglong)uVar4 >> 0x20);
    uVar4 = FUN_0064c8a0(0,0);
    *(int *)(param_1 + 0x644 + local_44 * 8) = (int)uVar4;
    *(int *)(param_1 + 0x648 + local_44 * 8) = (int)((ulonglong)uVar4 >> 0x20);
  }
  *(undefined1 *)(param_1 + 0x5c0) = 0;
  *(undefined1 *)(param_1 + 0x5b4) = 0;
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  cVar1 = FUN_005b7d30();
  *(char *)(param_1 + 0x678) = '\x01' - (cVar1 != '\0');
  FUN_005b6a60();
  ExceptionList = local_10;
  return;
}

