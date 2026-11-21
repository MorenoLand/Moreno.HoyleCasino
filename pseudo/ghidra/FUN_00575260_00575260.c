// FUN_00575260  00575260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00575260(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6312;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_005f54c0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    iVar3 = FUN_005eb220();
    if (*(int *)(param_1 + 0x7c) == -1) {
      FUN_005e9f20("multiplier != SLTNMP_1X","..\\Casino\\sultanslot.cpp",0x1f5);
    }
    if (iVar3 == 8) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x178) = 4;
      (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))(*(undefined4 *)(param_1 + 0x7c));
      FUN_005eb5d0(0);
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
      pvVar4 = operator_new(0x1c);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_00577b80(1,0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_24);
    }
    iVar5 = FUN_005eb240();
    if (iVar3 < iVar5) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0xb0))(iVar3 + 1);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(5);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(6);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(1);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(0);
    }
  }
  else {
    FUN_005eaf00(0x16025);
    (**(code **)(**(int **)(param_1 + 0x18) + 0x74))();
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
    if (cVar1 != '\0') {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x19259,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    cVar1 = FUN_00637630();
    if (cVar1 == '\0') {
      uVar2 = FUN_005eb240();
      (**(code **)(**(int **)(param_1 + 0x18) + 0xb0))(uVar2);
      (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))(*(undefined4 *)(param_1 + 0x7c));
      FUN_005eb5d0(0xff);
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
      (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(1);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(0);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x18) + 0xb0))(0);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(5);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(6);
    }
  }
  ExceptionList = local_10;
  return;
}

