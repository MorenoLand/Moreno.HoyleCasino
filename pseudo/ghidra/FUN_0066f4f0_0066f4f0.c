// FUN_0066f4f0  0066f4f0

void __fastcall FUN_0066f4f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad064;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005ec8f0(&PTR_006b27f8,0,0,0,0,0,5000,0x30,0xffffffff);
  FUN_005f62b0(uVar1);
  uVar2 = FUN_005f3bf0();
  piVar3 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(uVar2);
  iVar4 = (**(code **)(*piVar3 + 0xec))();
  if (iVar4 != 0) {
    pvVar5 = operator_new(0x178);
    local_8 = 0;
    if (pvVar5 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x238) = local_24;
    uVar2 = 0xffffffff;
    iVar4 = FUN_005f53c0(0xffffffff);
    FUN_005eae80(0,0,0,iVar4 + -1,uVar2);
    (**(code **)(**(int **)(param_1 + 0x238) + 0x70))();
  }
  ExceptionList = local_10;
  return;
}

