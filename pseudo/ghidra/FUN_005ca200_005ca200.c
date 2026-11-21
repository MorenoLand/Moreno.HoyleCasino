// FUN_005ca200  005ca200

void __fastcall FUN_005ca200(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 local_10 [8];
  int local_8;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
  }
  FUN_005ca8b0();
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 4 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0xcc))();
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xcc))();
  iVar3 = (**(code **)(*DAT_007947e4 + 0x25c))();
  if (iVar3 != 0) {
    (**(code **)(*DAT_007947e4 + 0x25c))();
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_005ca3f0();
      puVar8 = local_10;
      (**(code **)(*DAT_007947e4 + 0x25c))(puVar8);
      puVar5 = (undefined4 *)FUN_005d5a90(puVar8);
      uVar9 = puVar5[1];
      uVar7 = *puVar5;
      (**(code **)(*DAT_007947e4 + 0x25c))(uVar7,uVar9);
      cVar2 = FUN_0064c6e0(uVar7,uVar9);
      if (cVar2 != '\0') {
        uVar6 = FUN_0064c8a0(0,0);
        iVar3 = (**(code **)(*DAT_007947e4 + 0x25c))();
        *(undefined8 *)(iVar3 + 0x4bc) = uVar6;
      }
      piVar4 = (int *)(**(code **)(*DAT_007947e4 + 0x25c))();
      iVar3 = (**(code **)(*DAT_007947e4 + 0x25c))(0);
      (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(iVar3 + 0x4bc),*(undefined4 *)(iVar3 + 0x4c0));
    }
    return;
  }
  return;
}

