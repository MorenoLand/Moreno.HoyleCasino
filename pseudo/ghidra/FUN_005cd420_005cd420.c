// FUN_005cd420  005cd420

void __fastcall FUN_005cd420(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8bc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f6270(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (param_1[0x74] == 0) {
    pvVar1 = operator_new(0x5c);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_005f6130();
    }
    local_8 = 0xffffffff;
    param_1[0x74] = local_24;
  }
  uVar7 = 0xffffffff;
  iVar2 = FUN_005f53c0(0xffffffff);
  iVar2 = iVar2 + -2;
  iVar3 = (**(code **)(*param_1 + 0x54))(iVar2);
  iVar3 = iVar3 + 2;
  iVar4 = (**(code **)(*param_1 + 0x4c))(iVar3);
  iVar4 = iVar4 + 2;
  uVar5 = FUN_005f5590(iVar4);
  uVar6 = FUN_005f5550(uVar5);
  FUN_005f61d0(uVar6,uVar5,iVar4,iVar3,iVar2,uVar7);
  FUN_005f6580(1,1,1);
  FUN_005f6490(0,0,0);
  if ((char)param_1[0x27] == -1) {
    (**(code **)(*(int *)param_1[0x74] + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

