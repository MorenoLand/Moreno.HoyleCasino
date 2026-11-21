// FUN_0042cec0  0042cec0

void __fastcall FUN_0042cec0(int *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042bda0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (param_1[0x2b8] == 0) {
    pvVar2 = operator_new(0x1d4);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005cd360();
    }
    local_8 = 0xffffffff;
    param_1[0x2b8] = local_20;
  }
  uVar7 = 0;
  iVar3 = (**(code **)(*param_1 + 0xd8))(0,0,200,0x11,0xffffffff);
  iVar3 = iVar3 + -9;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = (**(code **)(*param_1 + 0xd4))(0,0,iVar3);
  FUN_005ec8f0(&PTR_006b27f8,4,0x41,0xf,uVar4,uVar5,uVar6,iVar3,uVar7);
  FUN_005ee8c0(0xff,0xff,0xcc);
  FUN_005ef340(5,0);
  uVar4 = FUN_005f5400();
  cVar1 = FUN_004388a0(uVar4);
  if (cVar1 == '\0') {
    uVar4 = FUN_00630f40("SID_CRAPS_BUYBETS");
    (**(code **)(*(int *)param_1[0x2b8] + 0xb4))(uVar4);
  }
  else {
    uVar4 = FUN_00630f40("SID_CRAPS_LAYBETS");
    (**(code **)(*(int *)param_1[0x2b8] + 0xb4))(uVar4);
  }
  (**(code **)(*(int *)param_1[0x2b8] + 0x74))();
  ExceptionList = local_10;
  return;
}

