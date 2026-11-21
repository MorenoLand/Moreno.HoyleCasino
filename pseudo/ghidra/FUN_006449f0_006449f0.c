// FUN_006449f0  006449f0

void __thiscall FUN_006449f0(int *param_1,int param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_2c;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abd71;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_1c = local_1c + *(int *)(&DAT_00763438 + (local_14 % 0xd) * 8);
    local_18 = local_18 + *(int *)(&DAT_0076343c + (local_14 % 0xd) * 8);
    if (param_1[local_14 + 0x65] == 0) {
      iVar2 = (**(code **)(*param_1 + 200))(param_1[1]);
      param_1[local_14 + 0x65] = iVar2;
      (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x40))();
    }
    *(undefined2 *)(param_1[local_14 + 0x65] + 400) = param_3;
    *(int *)(param_1[local_14 + 0x65] + 0x19c) = param_1[100];
    iVar2 = FUN_005f53c0();
    (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x6c))(iVar2 + 1 + local_14);
    iVar2 = (**(code **)(*param_1 + 0x54))();
    iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + local_18);
    (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x44))(iVar2 + local_1c);
    (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x74))();
    if (param_1[local_14 + 0x465] == 0) {
      pvVar3 = operator_new(0x178);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_2c = 0;
      }
      else {
        local_2c = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      param_1[local_14 + 0x465] = local_2c;
      *(int *)(param_1[local_14 + 0x465] + 4) = param_1[1];
      uVar5 = 0xffffffff;
      uVar4 = FUN_005f53c0(0xffffffff);
      FUN_005eae80(0x30136d,0,0,uVar4,uVar5);
    }
    iVar2 = (**(code **)(*param_1 + 0x54))();
    iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + -1 + local_18);
    (**(code **)(*(int *)param_1[local_14 + 0x465] + 0x44))(iVar2 + -2 + local_1c);
    if (local_14 == 0) {
      (**(code **)(*(int *)param_1[0x465] + 0x70))();
    }
    else {
      (**(code **)(*(int *)param_1[local_14 + 0x465] + 0x74))();
    }
  }
  for (; local_14 < 0x400; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x65] != 0) {
      (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x70))();
    }
    if (param_1[local_14 + 0x465] != 0) {
      (**(code **)(*(int *)param_1[local_14 + 0x465] + 0x70))();
    }
  }
  FUN_005eb570(uVar1);
  ExceptionList = local_10;
  return;
}

