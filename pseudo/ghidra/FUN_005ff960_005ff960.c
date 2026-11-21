// FUN_005ff960  005ff960

void FUN_005ff960(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  short local_14;
  short local_c;
  
  local_14 = 0;
  for (local_c = 0; iVar3 = FUN_006063e0(), local_c < iVar3; local_c = local_c + 1) {
    piVar4 = (int *)FUN_005ff920((int)local_c);
    iVar3 = (**(code **)(*piVar4 + 0x54))();
    if (local_14 < iVar3) {
      local_14 = (**(code **)(*piVar4 + 0x54))();
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x54))();
  if (iVar3 == local_14) {
    for (local_c = 0; iVar3 = FUN_006063e0(), local_c < iVar3; local_c = local_c + 1) {
      piVar4 = (int *)FUN_005ff920((int)local_c);
      iVar3 = (**(code **)(*piVar4 + 0x54))();
      sVar1 = FUN_005ff580();
      (**(code **)(*piVar4 + 0x6c))(iVar3 + sVar1);
    }
  }
  else {
    sVar1 = (**(code **)(*param_1 + 0x54))();
    for (local_c = 0; iVar3 = FUN_006063e0(), local_c < iVar3; local_c = local_c + 1) {
      piVar4 = (int *)FUN_005ff920((int)local_c);
      iVar3 = (**(code **)(*piVar4 + 0x54))();
      if (iVar3 == sVar1) {
        uVar5 = (**(code **)(*piVar4 + 0x4c))((int)local_14);
        (**(code **)(*piVar4 + 0x44))(uVar5);
      }
      else {
        iVar3 = (**(code **)(*piVar4 + 0x54))();
        if (iVar3 == local_14) {
          uVar5 = (**(code **)(*piVar4 + 0x4c))((int)sVar1);
          (**(code **)(*piVar4 + 0x44))(uVar5);
        }
      }
      iVar3 = (**(code **)(*piVar4 + 0x54))();
      sVar2 = FUN_005ff580();
      (**(code **)(*piVar4 + 0x6c))(iVar3 + sVar2);
    }
  }
  return;
}

