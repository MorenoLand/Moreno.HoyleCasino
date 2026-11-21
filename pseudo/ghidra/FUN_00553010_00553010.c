// FUN_00553010  00553010

void __fastcall FUN_00553010(int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5429;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00630f40("SID_VIDEOPOKER",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  (**(code **)(*param_1 + 8))();
  pvVar2 = operator_new(0x184);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_5c = 0;
  }
  else {
    local_5c = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  param_1[0x1b] = local_5c;
  uVar6 = 0xffffffff;
  uVar5 = 100;
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00554230(0,0,100,0xffffffff);
  FUN_005eae80(uVar1,uVar3,uVar4,uVar5,uVar6);
  *(undefined4 *)(param_1[0x1b] + 0x178) = 8;
  pvVar2 = operator_new(0x1c);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_00600a70(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_60);
  (**(code **)(*(int *)param_1[0x1b] + 0x74))();
  pvVar2 = operator_new(0x184);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_64 = 0;
  }
  else {
    local_64 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  param_1[0x1c] = local_64;
  uVar6 = 0xffffffff;
  uVar5 = 100;
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00554230(0,0,100,0xffffffff);
  FUN_005eae80(uVar1,uVar3,uVar4,uVar5,uVar6);
  *(undefined4 *)(param_1[0x1c] + 0x178) = 8;
  pvVar2 = operator_new(0x184);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  param_1[0x1d] = local_68;
  uVar6 = 0xffffffff;
  uVar5 = 100;
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = FUN_00554230(0,0,100,0xffffffff);
  FUN_005eae80(uVar1,uVar3,uVar4,uVar5,uVar6);
  *(undefined4 *)(param_1[0x1d] + 0x178) = 8;
  FUN_00552f70();
  FUN_005542c0();
  ExceptionList = local_10;
  return;
}

