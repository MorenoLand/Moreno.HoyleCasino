// FUN_005755c0  005755c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005755c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 local_30;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6343;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005eb220(DAT_00781870 ^ (uint)&stack0xfffffffc);
  iVar3 = FUN_005eb240();
  if (iVar2 == iVar3) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0xb0))(4);
    (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(6);
    pvVar4 = operator_new(0x1c);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_00577b80(0,*(undefined4 *)(DAT_00793458 + 4));
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_2c);
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
    if (cVar1 != '\0') {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x19259,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x7c) == -1) {
      FUN_005e9f20("multiplier != SLTNMP_1X","..\\Casino\\sultanslot.cpp",0x21b);
    }
    iVar2 = iVar2 + 1;
    (**(code **)(**(int **)(param_1 + 0x18) + 0xb0))(iVar2);
    if (iVar2 == 8) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x178) = 4;
      (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))(*(undefined4 *)(param_1 + 0x7c));
      FUN_005eb5d0(0);
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
      pvVar4 = operator_new(0x1c);
      local_8 = 1;
      if (pvVar4 == (void *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_00577b80(1,0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_30);
    }
    iVar3 = FUN_005eb240();
    if (iVar2 < iVar3) {
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(6);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(6);
    }
    else {
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(1);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(0);
    }
  }
  ExceptionList = local_10;
  return;
}

