// FUN_0042c5f0  0042c5f0

void __thiscall FUN_0042c5f0(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_34;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e5b4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_005ccdf0(param_2,0);
  local_14 = 0;
  switch(param_3) {
  case 0:
    local_14 = 0xfca;
    break;
  case 1:
    local_14 = 0xfc8;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\crapsdisplay.cpp",0x468,uVar1);
    break;
  case 3:
    local_14 = 0xfc9;
    break;
  case 0xffffffff:
    ExceptionList = local_10;
    return;
  }
  if (param_1[param_2 + 0x2bf] == 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    param_1[param_2 + 0x2bf] = local_34;
  }
  (**(code **)(*(int *)param_1[param_2 + 0x2bf] + 0x40))();
  FUN_005eaf00(local_14);
  if (iVar2 == -1) {
    FUN_005e9f20("highestChip != -1","..\\Casino\\crapsdisplay.cpp",0x471);
  }
  iVar4 = (**(code **)(*(int *)param_1[param_2 * 0x78 + iVar2 + 0x5f] + 0x4c))();
  iVar5 = (**(code **)(*param_1 + 0xdc))(param_2,0);
  iVar2 = (**(code **)(*(int *)param_1[param_2 * 0x78 + iVar2 + 0x5f] + 0x54))();
  iVar6 = (**(code **)(*param_1 + 0xe0))(param_2,0);
  iVar7 = FUN_005f53c0();
  (**(code **)(*(int *)param_1[param_2 + 0x2bf] + 0x6c))(iVar7 + 2);
  (**(code **)(*(int *)param_1[param_2 + 0x2bf] + 0x44))(iVar4 + iVar5,iVar2 + iVar6);
  (**(code **)(*(int *)param_1[param_2 + 0x2bf] + 0x74))();
  ExceptionList = local_10;
  return;
}

