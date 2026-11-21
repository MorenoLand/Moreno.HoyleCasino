// FUN_00575860  00575860

void __fastcall FUN_00575860(int param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6369;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_005f54c0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x70))();
    cVar1 = FUN_00637630();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x70))();
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
      if (*(int *)(param_1 + 0x70) == 0) {
        (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(2);
      }
      else {
        (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(1);
      }
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(0);
    }
    else {
      FUN_005eaf00(0x16026);
      (**(code **)(**(int **)(param_1 + 0x18) + 0x74))();
      (**(code **)(**(int **)(param_1 + 0x18) + 0xb0))(0);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x178) = 2;
      pvVar2 = operator_new(0x1c);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_00577b80(0,0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_24);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(7);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(6);
    }
  }
  else {
    iVar3 = FUN_005eb220();
    iVar4 = FUN_005eb240();
    if (iVar3 < iVar4) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0xb0))(iVar3 + 1);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(7);
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(6);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x70))();
      if (*(int *)(param_1 + 0x70) == 0) {
        (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(2);
      }
      else {
        (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(1);
      }
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(0);
    }
  }
  ExceptionList = local_10;
  return;
}

