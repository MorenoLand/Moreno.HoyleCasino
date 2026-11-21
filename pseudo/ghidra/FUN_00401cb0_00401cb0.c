// FUN_00401cb0  00401cb0

void __fastcall FUN_00401cb0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  cVar1 = FUN_00407c30();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x68) + 0x70))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x68) + 0x74))();
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_00402960();
    if ((((local_8 != 4) && (iVar2 = FUN_005dcb00(local_8), *(char *)(iVar2 + 0x4a0) != '\0')) &&
        (cVar1 = FUN_005da7b0(), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*DAT_007902ec + 0x2c4))(local_8), cVar1 == '\0')) {
      FUN_00401b40(local_8);
    }
    if (local_8 == 0) {
      iVar2 = FUN_004094b0(0);
      if (iVar2 == 0) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
      }
      else {
        uVar3 = FUN_004091b0(iVar2);
        FUN_00401ec0(&DAT_007902b8,uVar3,iVar2);
        (**(code **)(**(int **)(param_1 + 0x1c) + 0xb4))(&DAT_007902b8);
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
      }
    }
    else if (local_8 == 4) {
      iVar2 = FUN_004094b0(4);
      if (iVar2 == 0) {
        (**(code **)(**(int **)(param_1 + 0x18) + 0x70))();
      }
      else {
        uVar3 = FUN_004091d0(iVar2);
        FUN_00401ec0(&DAT_007902b8,uVar3,iVar2);
        (**(code **)(**(int **)(param_1 + 0x18) + 0xb4))(&DAT_007902b8);
        (**(code **)(**(int **)(param_1 + 0x18) + 0x74))();
      }
    }
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_007902ec + 0x2f0))();
  }
  return;
}

