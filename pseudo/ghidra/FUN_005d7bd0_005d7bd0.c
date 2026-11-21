// FUN_005d7bd0  005d7bd0

void __fastcall FUN_005d7bd0(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a9138;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CasinoRoom::vftable;
  local_8 = 0;
  for (local_14 = 0; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(uVar3), local_14 < iVar4;
      local_14 = local_14 + 1) {
    FUN_005dcb00(local_14);
    piVar5 = (int *)FUN_0063aac0();
    if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar4 = FUN_005dcb00(local_14), *(int *)(iVar4 + 0x4b4) != 0)) {
      FUN_005dcb00(local_14);
      FUN_005d74b0();
    }
  }
  cVar2 = FUN_005da7b0();
  if (cVar2 != '\0') {
    *(undefined1 *)(DAT_007947e0 + 0x4ee8) = 0;
  }
  FUN_005dbf30();
  FUN_005db890();
  FUN_005db9b0();
  FUN_005d8a20(0,0xffffffff,0);
  for (local_14 = 0; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar4;
      local_14 = local_14 + 1) {
    iVar4 = FUN_005dcb00(local_14);
    if (*(int *)(iVar4 + 0x49c) != 0) {
      iVar4 = FUN_005dcb00(local_14);
      (**(code **)(**(int **)(iVar4 + 0x49c) + 0x70))();
      iVar4 = FUN_005dcb00(local_14);
      if (*(undefined4 **)(iVar4 + 0x49c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar4 + 0x49c))(1);
      }
      iVar4 = FUN_005dcb00(local_14);
      *(undefined4 *)(iVar4 + 0x49c) = 0;
    }
    FUN_005dcb00(local_14);
    FUN_005d55d0();
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  if ((param_1[0x1c] != 0) && ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x1c])(1);
  }
  if ((param_1[0x1d] != 0) && ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x1d])(1);
  }
  if ((param_1[0x1e] != 0) && ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x1e])(1);
  }
  if (DAT_00793578 != (undefined4 *)0x0) {
    if (DAT_00793578 != (undefined4 *)0x0) {
      (**(code **)*DAT_00793578)(1);
    }
    DAT_00793578 = (undefined4 *)0x0;
  }
  if (param_1[0x17] != 0) {
    if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x17])(1);
    }
    param_1[0x17] = 0;
  }
  local_8 = 0xffffffff;
  FUN_0064cc80();
  ExceptionList = local_10;
  return;
}

