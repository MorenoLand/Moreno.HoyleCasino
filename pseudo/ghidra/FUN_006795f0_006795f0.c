// FUN_006795f0  006795f0

void __thiscall FUN_006795f0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined1 extraout_var;
  undefined4 *local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad805;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0xab) = 1;
  local_14 = 0;
  if (param_4 == -1) {
    param_4 = FUN_0062fbf0(0x10,uVar1);
  }
  FUN_005f5cc0();
  param_1[0xa7] = *(int *)(&DAT_007813c8 + param_4 * 4);
  param_1[0xa8] = *(int *)(&DAT_00781388 + param_4 * 4);
  param_1[100] = param_2;
  iVar2 = FUN_0063aac0();
  param_1[0xaa] = iVar2 + 4;
  FUN_005eae80(param_1[0xa7],*(undefined4 *)(&DAT_00781308 + param_4 * 8),
               *(undefined4 *)(&DAT_0078130c + param_4 * 8),2000,0xffffffff);
  (**(code **)(*param_1 + 0xb0))(0);
  FUN_005eb5d0(0xff);
  if (((param_1[0xa7] == 0x249f04) || (param_1[0xa7] == 0x249f05)) || (param_1[0xa7] == 0x249f62)) {
    if (param_1[0xa7] == 0x249f04) {
      local_14 = 0x249f03;
    }
    if (param_1[0xa7] == 0x249f05) {
      local_14 = 0x249f06;
    }
    if (param_1[0xa6] == 0) {
      pvVar3 = operator_new(0x184);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      param_1[0xa6] = local_40;
    }
    *(int *)(param_1[0xa6] + 4) = param_1[1];
    FUN_005eae80(local_14,0,0,1999,0xffffffff);
    (**(code **)(*(int *)param_1[0xa6] + 0x74))();
    if ((param_1[0xa7] == 0x249f05) || (param_1[0xa7] == 0x249f62)) {
      (**(code **)(*(int *)param_1[0xa6] + 0x6c))(0x7d1);
      pvVar3 = operator_new(0x20);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = FUN_006010a0(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_44);
    }
  }
  if ((param_1[0xa7] == 0x249f0d) || (param_1[0xa7] == 0x249f0a)) {
    if (param_1[0x65] == 0) {
      pvVar3 = operator_new(0x1d0);
      local_8 = 2;
      if (pvVar3 == (void *)0x0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      param_1[0x65] = local_48;
    }
    *(int *)(param_1[0x65] + 4) = param_1[1];
    (**(code **)(*(int *)param_1[0x65] + 0x40))();
    FUN_005ecd00(0x1f,0xffffffff,CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
    FUN_005ecc60(0x82);
    FUN_005eccb0(0xf);
    FUN_005ee710(param_1[0xaa]);
    (**(code **)(*(int *)param_1[0x65] + 0x6c))(0x7d1);
    FUN_005ef310(0x30);
    if (param_1[0xa7] == 0x249f0d) {
      (**(code **)(*(int *)param_1[0x65] + 0x44))(0x102,0x160);
      (**(code **)(*(int *)param_1[0x65] + 0x74))();
    }
    else {
      (**(code **)(*(int *)param_1[0x65] + 0x44))(0x104,0xdc);
    }
    (**(code **)(*param_1 + 0x74))();
  }
  param_1[0x5e] = *(int *)(&DAT_007812c8 + param_4 * 4);
  local_4c = operator_new(0x20);
  local_8 = 3;
  if (local_4c == (undefined4 *)0x0) {
    local_4c = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_4c = WinAnimationScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f5df0(local_4c);
  ExceptionList = local_10;
  return;
}

