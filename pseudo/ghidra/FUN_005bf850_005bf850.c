// FUN_005bf850  005bf850

undefined1 __thiscall FUN_005bf850(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 local_c4;
  undefined4 local_c0;
  int *local_bc;
  uint local_b8;
  int local_b4;
  undefined1 local_19;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8377;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_19 = 0;
  if (((100 < param_2) && (param_2 < 0xca)) && (0 < *(int *)(param_1 + 0x18))) {
    local_19 = 1;
    piVar3 = (int *)FUN_005fb300(param_2);
    if (piVar3 == (int *)0x0) {
      local_19 = 1;
    }
    else {
      if (*(int *)(param_1 + 0x20) == 0) {
        local_b4 = 0;
      }
      else {
        local_b4 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
      }
      uVar2 = FUN_0062fbf0(local_b4 + -1,uVar2);
      if (*(int *)(param_1 + 0x20) == 0) {
        local_b8 = 0;
      }
      else {
        local_b8 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
      }
      if (local_b8 <= uVar2) {
        _invalid_parameter_noinfo();
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0x20) + uVar2 * 4);
      FUN_005c0790(uVar2);
      (**(code **)(*piVar3 + 0x70))();
      pvVar4 = operator_new(0x184);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_bc = (int *)0x0;
      }
      else {
        local_bc = (int *)FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      pvVar4 = operator_new(0x28);
      local_8 = 1;
      if (pvVar4 == (void *)0x0) {
        local_c0 = 0;
      }
      else {
        local_c0 = FUN_005bfc40(param_1,piVar1);
      }
      local_8 = 0xffffffff;
      pvVar4 = operator_new(0x24);
      local_8 = 2;
      if (pvVar4 == (void *)0x0) {
        local_c4 = 0;
      }
      else {
        local_c4 = FUN_005bf080(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x38),local_c0);
      }
      local_8 = 0xffffffff;
      FUN_005f9c10(local_bc,param_2,piVar1[1],0,0,param_2,local_c4,local_c0,0,0xff,0);
      FUN_005eb000(piVar1[2]);
      (**(code **)(*local_bc + 0xb0))(piVar1[3]);
      (**(code **)(*local_bc + 0x8c))(piVar3);
      local_bc[0x5e] = 0x14;
      FUN_005fbcb0(piVar3,0xffffffff);
      if (*piVar1 == -2) {
        FUN_00610980(*(int *)(param_1 + 0x14) + 0x50);
      }
      else if (*piVar1 == -1) {
        FUN_00610980(*(int *)(param_1 + 0x14) + 0x70);
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      else {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        FUN_00610980(*(int *)(param_1 + 0x14) + 0x50);
      }
      FUN_005bfc00();
    }
  }
  ExceptionList = local_10;
  return local_19;
}

