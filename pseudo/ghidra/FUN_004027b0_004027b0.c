// FUN_004027b0  004027b0

void __thiscall FUN_004027b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_48;
  undefined4 local_44;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d657;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 4) = param_2;
  if (*(int *)(param_1 + 4) != 4) {
    iVar2 = FUN_00639110(*(undefined4 *)(param_1 + 4));
    if (iVar2 != 0) {
      pvVar3 = operator_new(0x17c);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = FUN_00402510(uVar1);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x14) = local_44;
      FUN_005eae80(0x31128f,*(undefined4 *)(&DAT_00705158 + *(int *)(param_1 + 4) * 8),
                   *(undefined4 *)(&DAT_0070515c + *(int *)(param_1 + 4) * 8),200,0xffffffff);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x178) = *(undefined4 *)(param_1 + 4);
    }
  }
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 4)) {
    for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
      pvVar3 = operator_new(0x178);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 8 + local_1c * 4) = local_48;
      (**(code **)(**(int **)(param_1 + 8 + local_1c * 4) + 0x40))();
    }
  }
  ExceptionList = local_10;
  return;
}

