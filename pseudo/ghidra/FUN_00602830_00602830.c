// FUN_00602830  00602830

void __thiscall
FUN_00602830(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_30 [16];
  void *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa91d;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[0x72] = param_3;
  if (param_4 == -1) {
    local_38 = param_1[0x72];
  }
  else {
    local_38 = param_4;
  }
  param_1[0x75] = local_38;
  if (param_5 == -1) {
    local_3c = param_1[0x72];
  }
  else {
    local_3c = param_5;
  }
  param_1[0x74] = local_3c;
  if (param_6 == -1) {
    local_40 = param_1[0x75];
  }
  else {
    local_40 = param_6;
  }
  param_1[0x73] = local_40;
  if (param_1[100] != 0) {
    local_18 = (undefined4 *)param_1[100];
    local_14 = local_18;
    if (local_18 != (undefined4 *)0x0) {
      (**(code **)*local_18)(1,uVar3);
    }
    param_1[100] = 0;
  }
  local_20 = operator_new(0x1d0);
  local_8 = 0;
  if (local_20 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_005ec5a0();
  }
  local_1c = local_48;
  local_8 = 0xffffffff;
  param_1[100] = local_48;
  *(int *)(param_1[100] + 4) = param_1[1];
  if (param_1[0x13] == 0) {
    param_1[0x6e] = 0;
    iVar5 = FUN_005f5550();
    param_1[0x70] = iVar5;
    param_1[0x6f] = 0;
    iVar5 = FUN_005f5590();
    param_1[0x71] = iVar5;
  }
  else {
    piVar4 = (int *)FUN_005ebf80(local_30);
    param_1[0x6e] = *piVar4;
    param_1[0x6f] = piVar4[1];
    param_1[0x70] = piVar4[2];
    param_1[0x71] = piVar4[3];
  }
  uVar10 = 0xffffffff;
  iVar5 = param_1[0x76];
  iVar6 = FUN_005f53c0(iVar5,0xffffffff);
  iVar6 = iVar6 + 1;
  iVar7 = (**(code **)(*param_1 + 0x54))(iVar6);
  iVar1 = param_1[0x6f];
  iVar8 = FUN_005eb4b0();
  iVar8 = iVar7 + iVar1 + iVar8;
  iVar7 = (**(code **)(*param_1 + 0x4c))(iVar8);
  iVar1 = param_1[0x6e];
  iVar9 = FUN_005eb470();
  FUN_005ec8f0(param_2,param_1[0x72],(param_1[0x70] - param_1[0x6e]) + 1,
               (param_1[0x71] - param_1[0x6f]) + 1,iVar7 + iVar1 + iVar9,iVar8,iVar6,iVar5,uVar10);
  FUN_005ef340(param_7,param_8);
  (**(code **)(*param_1 + 0xe8))();
  cVar2 = FUN_005f54a0();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)param_1[100] + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

