// FUN_005f95e0  005f95e0

void __fastcall FUN_005f95e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_5c;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  void *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa249;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f9a80(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x114) == 0) {
    if (*(int *)(param_1 + 0x17c) != 0) {
      local_18 = *(undefined4 **)(param_1 + 0x17c);
      if (local_18 != (undefined4 *)0x0) {
        local_14 = local_18;
        (**(code **)*local_18)(1);
      }
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x17c) == 0) {
      local_20 = operator_new(0x178);
      local_8 = 0;
      if (local_20 == (void *)0x0) {
        local_5c = 0;
      }
      else {
        local_5c = FUN_005eaaf0();
      }
      local_1c = local_5c;
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x17c) = local_5c;
      (**(code **)(**(int **)(param_1 + 0x17c) + 0x74))();
      *(int *)(*(int *)(param_1 + 0x17c) + 4) = param_1;
      (**(code **)(**(int **)(param_1 + 0x17c) + 0x40))();
      FUN_005eb000(0);
      (**(code **)(**(int **)(param_1 + 0x17c) + 0xb0))(0);
    }
    FUN_005eaf00(*(undefined4 *)(param_1 + 0x114));
    FUN_005eb000(0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 0xb0))(*(undefined4 *)(param_1 + 0x118));
    iVar1 = FUN_005eb470();
    if ((iVar1 == 0) && (iVar1 = FUN_005eb4b0(), iVar1 == 0)) {
      iVar1 = FUN_005f5550();
      *(int *)(param_1 + 0x110) = iVar1 + *(int *)(param_1 + 0x108);
      iVar1 = FUN_005f5590();
      *(int *)(param_1 + 0x10c) = iVar1 + *(int *)(param_1 + 0x104);
      if (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x108)) {
        iVar1 = FUN_005f8550();
        *(int *)(param_1 + 0x110) = iVar1 + *(int *)(param_1 + 0x108);
      }
      if (*(int *)(param_1 + 0x10c) == *(int *)(param_1 + 0x104)) {
        iVar1 = FUN_005f8570();
        *(int *)(param_1 + 0x10c) = iVar1 + *(int *)(param_1 + 0x104);
      }
      if (((DAT_00795fb8 != '\0') && (param_1 == *(int *)(DAT_015e55e8 + 0x14))) &&
         ((uVar4 = FUN_00613600(), *(uint *)(param_1 + 0x110) != (uVar4 & 0xffff) ||
          (uVar4 = FUN_00613620(), *(uint *)(param_1 + 0x10c) != (uVar4 & 0xffff))))) {
        (**(code **)(**(int **)(*(int *)(DAT_015e55e8 + 0x14) + 0x1a8) + 0x34))();
        (**(code **)(**(int **)(*(int *)(DAT_015e55e8 + 0x14) + 0x1a8) + 4))
                  (*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x10c));
      }
    }
    else {
      iVar1 = FUN_005eb4b0();
      iVar1 = FUN_005eb470(-iVar1);
      (**(code **)(**(int **)(param_1 + 0x17c) + 0x44))(-iVar1);
      uVar2 = FUN_005eb470();
      *(undefined4 *)(param_1 + 0x108) = uVar2;
      uVar2 = FUN_005eb4b0();
      *(undefined4 *)(param_1 + 0x104) = uVar2;
      iVar1 = FUN_005eb470();
      iVar3 = FUN_005f5550();
      *(int *)(param_1 + 0x110) = iVar1 + iVar3;
      iVar1 = FUN_005eb4b0();
      iVar3 = FUN_005f5590();
      *(int *)(param_1 + 0x10c) = iVar1 + iVar3;
    }
    *(undefined1 *)(param_1 + 0x178) = 0;
    puVar5 = (undefined4 *)FUN_005ebac0(local_30);
    *(undefined4 *)(param_1 + 0x180) = *puVar5;
    *(undefined4 *)(param_1 + 0x184) = puVar5[1];
    *(undefined4 *)(param_1 + 0x188) = puVar5[2];
    *(undefined4 *)(param_1 + 0x18c) = puVar5[3];
    puVar5 = (undefined4 *)FUN_005ebf80(local_40);
    *(undefined4 *)(param_1 + 400) = *puVar5;
    *(undefined4 *)(param_1 + 0x194) = puVar5[1];
    *(undefined4 *)(param_1 + 0x198) = puVar5[2];
    *(undefined4 *)(param_1 + 0x19c) = puVar5[3];
    FUN_005f9a80();
    FUN_005f8ce0(*(undefined4 *)(param_1 + 0x17c));
  }
  ExceptionList = local_10;
  return;
}

