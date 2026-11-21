// FUN_00402370  00402370

void FUN_00402370(void)

{
  int iVar1;
  int iVar2;
  int extraout_var;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int local_8;
  
  uVar6 = 0xffffffff;
  uVar4 = 0xffffffff;
  iVar1 = FUN_004091b0();
  iVar3 = extraout_var;
  iVar2 = FUN_004091d0();
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(iVar3 + 0x5c + local_8 * 4) + 0x70))();
  }
  if (iVar1 == iVar2) {
    (**(code **)(**(int **)(iVar3 + 100) + 0xb0))(6,iVar3,iVar2,uVar4,iVar1,uVar6);
    (**(code **)(**(int **)(iVar3 + 100) + 0x74))();
  }
  else {
    uVar7 = (uint)(iVar1 <= iVar2);
    uVar5 = (uint)(iVar1 > iVar2);
    (**(code **)(**(int **)(iVar3 + 0x5c + uVar7 * 4) + 0xb0))(0);
    (**(code **)(**(int **)(iVar3 + 0x5c + uVar5 * 4) + 0xb0))(1);
    (**(code **)(**(int **)(iVar3 + 0x5c + uVar7 * 4) + 0x74))();
    (**(code **)(**(int **)(iVar3 + 0x5c + uVar5 * 4) + 0x74))();
  }
  return;
}

