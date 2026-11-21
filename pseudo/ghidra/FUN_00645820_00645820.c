// FUN_00645820  00645820

void __thiscall
FUN_00645820(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5
            ,undefined1 param_6)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined **_Source;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abe5e;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 4) = param_2;
  if ((*(int *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1,uVar2);
  }
  pvVar3 = operator_new(0x188);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = FUN_00648c70(param_1,param_3);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = local_a8;
  (**(code **)(**(int **)(param_1 + 8) + 0x6c))(0x6e);
  FUN_005eb700(1);
  FUN_005eb720(0x50);
  (**(code **)(**(int **)(param_1 + 8) + 0x40))();
  if ((*(int *)(param_1 + 0xc) != 0) && (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
  }
  pvVar3 = operator_new(0x188);
  local_8 = 1;
  if (pvVar3 == (void *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = FUN_00648c70(param_1,param_3);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = local_b0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x6c))(0x6f);
  FUN_005eb700(1);
  FUN_005eb720(0x50);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x40))();
  pvVar3 = operator_new(0x44c);
  local_8 = 2;
  if (pvVar3 == (void *)0x0) {
    local_b4 = 0;
  }
  else {
    local_b4 = FUN_00648ec0(param_1);
  }
  local_8 = 0xffffffff;
  FUN_005f5df0(local_b4);
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x17c) + 8))(0,0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    pvVar3 = operator_new(200);
    local_8 = 3;
    if (pvVar3 == (void *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = FUN_006640c0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14) = local_b8;
  }
  FUN_00664200(*(undefined4 *)(*(int *)(param_1 + 8) + 4),param_1);
  FUN_00664480(0x6e);
  piVar4 = (int *)FUN_0063aac0();
  if (*piVar4 == 3) {
    uVar5 = FUN_0057a470();
    cVar1 = FUN_00664300(uVar5);
    if (cVar1 == '\0') {
      _Source = &PTR_006b27f8;
      iVar6 = FUN_0063aac0();
      strcpy((char *)(iVar6 + 0x38),(char *)_Source);
      puVar7 = (undefined4 *)FUN_0063aac0();
      *puVar7 = 2;
    }
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
  }
  pvVar3 = operator_new(0x1a8);
  local_8 = 4;
  if (pvVar3 == (void *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = FUN_0064aab0(param_1,param_3);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = local_c0;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x40))();
  iVar6 = FUN_00646ea0();
  (**(code **)(**(int **)(param_1 + 0x18) + 0x6c))(iVar6 + 200);
  *(undefined1 *)(param_1 + 0x2a) = param_4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x2b) = param_5;
  *(undefined1 *)(param_1 + 0x2c) = param_6;
  if (*(char *)(param_1 + 0x2a) != '\0') {
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    cVar1 = (**(code **)(*DAT_0162ee84 + 0xc4))();
    if ((((cVar1 != '\0') && (*(char *)(param_1 + 0x2b) != '\0')) &&
        (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 1)) &&
       ((cVar1 = (**(code **)(*DAT_0162ee84 + 200))(), cVar1 == '\0' ||
        (*(char *)(param_1 + 0x2c) == '\0')))) {
      pvVar3 = operator_new(0x1e0);
      local_8 = 5;
      if (pvVar3 == (void *)0x0) {
        local_c8 = 0;
      }
      else {
        local_c8 = FUN_0064bf00(param_1,param_3);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c) = local_c8;
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x40))();
      iVar6 = FUN_00646ea0();
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x6c))(iVar6 + 0xc9);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    cVar1 = (**(code **)(*DAT_0162ee84 + 200))();
    if (((cVar1 != '\0') && (cVar1 = (**(code **)(*DAT_0162ee80 + 0x1e0))(), cVar1 != '\0')) &&
       (*(char *)(param_1 + 0x2c) != '\0')) {
      pvVar3 = operator_new(0x1e4);
      local_8 = 6;
      if (pvVar3 == (void *)0x0) {
        local_d4 = 0;
      }
      else {
        local_d4 = FUN_0064c070(param_1,param_3,1);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20) = local_d4;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x40))();
      FUN_006026f0(*(int *)(*(int *)(param_1 + 4) + 4) * 2 + 0x31);
      iVar6 = FUN_00646ea0();
      (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(iVar6 + 0xc9);
      pvVar3 = operator_new(0x1e4);
      local_8 = 7;
      if (pvVar3 == (void *)0x0) {
        local_d8 = 0;
      }
      else {
        local_d8 = FUN_0064c070(param_1,param_3,0);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x24) = local_d8;
      (**(code **)(**(int **)(param_1 + 0x24) + 0x40))();
      FUN_006026f0(*(int *)(*(int *)(param_1 + 4) + 4) * 2 + 0x32);
      iVar6 = FUN_00646ea0();
      (**(code **)(**(int **)(param_1 + 0x24) + 0x6c))(iVar6 + 0xc9);
    }
  }
  ExceptionList = local_10;
  return;
}

