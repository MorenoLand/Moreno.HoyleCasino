// FUN_00532200  00532200

void FUN_00532200(void)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_var;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_14;
  undefined4 local_8;
  
  FUN_00532570();
  iVar5 = extraout_var;
  local_8 = (**(code **)(**(int **)(extraout_var + 0x1d4) + 0x4c))();
  local_8 = local_8 + 2;
  iVar1 = (**(code **)(**(int **)(iVar5 + 0x1d4) + 0x54))();
  sVar2 = strlen((char *)(iVar5 + 0x184));
  iVar6 = 0;
  iVar7 = 0;
  for (local_14 = 0; local_14 < (int)sVar2; local_14 = local_14 + 1) {
    if (0 < local_14) {
      iVar7 = FUN_005f5550(iVar5,iVar6,iVar7);
    }
    uVar3 = FUN_00532490(*(undefined1 *)(iVar5 + local_14 + 0x184));
    (**(code **)(**(int **)(iVar5 + 0x194 + iVar6 * 4) + 0xb0))(uVar3);
    local_8 = local_8 + iVar7;
    (**(code **)(**(int **)(iVar5 + 0x194 + iVar6 * 4) + 0x44))(local_8,iVar1 + 2);
    iVar6 = iVar6 + 1;
  }
  iVar8 = 0;
  iVar1 = FUN_005f5550(iVar5,iVar6,iVar7,0);
  for (local_14 = 0; local_14 < (int)sVar2; local_14 = local_14 + 1) {
    iVar7 = FUN_005f5550();
    iVar8 = iVar7 + iVar8;
  }
  iVar7 = (**(code **)(**(int **)(iVar5 + 0x1d4) + 0x4c))();
  iVar6 = (**(code **)(**(int **)(iVar5 + 0x194) + 0x4c))();
  for (local_14 = 0; local_14 < (int)sVar2; local_14 = local_14 + 1) {
    uVar3 = (**(code **)(**(int **)(iVar5 + 0x194 + local_14 * 4) + 0x54))();
    iVar4 = (**(code **)(**(int **)(iVar5 + 0x194 + local_14 * 4) + 0x4c))(uVar3);
    (**(code **)(**(int **)(iVar5 + 0x194 + local_14 * 4) + 0x44))
              (iVar4 + ((iVar7 + (iVar1 - iVar8) / 2) - iVar6));
  }
  for (local_14 = 0; local_14 < (int)sVar2; local_14 = local_14 + 1) {
    (**(code **)(**(int **)(iVar5 + 0x194 + local_14 * 4) + 0x74))();
  }
  return;
}

