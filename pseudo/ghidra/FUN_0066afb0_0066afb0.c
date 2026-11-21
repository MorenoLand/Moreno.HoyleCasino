// FUN_0066afb0  0066afb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0066afb0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x2e4))(local_24);
    _DAT_016306bc = *puVar3;
    DAT_016306b8 = puVar3[1];
    local_c = _DAT_016306bc;
    local_8 = DAT_016306b8;
    piVar2 = (int *)FUN_005fb2b0(0);
    (**(code **)(*piVar2 + 0x74))();
    (**(code **)(*param_1 + 8))(1,0);
  }
  else if (iVar1 == 1) {
    piVar2 = (int *)FUN_005fb2b0(0);
    (**(code **)(*piVar2 + 0x50))(DAT_016306b8);
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x2ec))();
    DAT_016306b8 = DAT_016306b8 - iVar1;
    FUN_005fb2b0(0);
    iVar1 = FUN_005f5590();
    if (DAT_016306b8 < -iVar1) {
      puVar3 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x2e8))(local_2c);
      local_14 = *puVar3;
      DAT_016306b8 = puVar3[1];
      local_10 = DAT_016306b8;
      uVar4 = (**(code **)(*DAT_0162ee84 + 0x2f0))();
      (**(code **)(*param_1 + 8))(2,uVar4);
    }
    else {
      uVar4 = (**(code **)(*DAT_0162ee84 + 0x2f0))();
      (**(code **)(*param_1 + 8))(1,uVar4);
    }
  }
  else if (iVar1 == 2) {
    piVar2 = (int *)FUN_005fb2b0(0);
    (**(code **)(*piVar2 + 0x50))(DAT_016306b8);
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x2ec))();
    DAT_016306b8 = DAT_016306b8 - iVar1;
    FUN_005fb2b0(0);
    iVar1 = FUN_005f5590();
    if (DAT_016306b8 < -iVar1) {
      puVar3 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x2e8))(local_34);
      local_1c = *puVar3;
      DAT_016306b8 = puVar3[1];
      local_18 = DAT_016306b8;
    }
    uVar4 = (**(code **)(*DAT_0162ee84 + 0x2f0))();
    (**(code **)(*param_1 + 8))(2,uVar4);
  }
  return;
}

