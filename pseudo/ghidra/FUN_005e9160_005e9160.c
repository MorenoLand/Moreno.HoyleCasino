// FUN_005e9160  005e9160

void __thiscall FUN_005e9160(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_8;
  
  if (param_2 == 200) {
    iVar1 = FUN_005e8de0();
    if (iVar1 != -1) {
      uVar2 = FUN_005e8de0();
      uVar2 = FUN_005e9090(uVar2);
      (**(code **)(*param_1 + 0x4c))(uVar2);
    }
  }
  FUN_005fb3a0(0);
  iVar1 = FUN_00606490();
  for (local_8 = 1; local_8 < 5; local_8 = local_8 + 1) {
    iVar3 = FUN_005fb3a0(local_8);
    if (iVar3 != 0) {
      if (iVar1 + 1 == local_8) {
        piVar4 = (int *)FUN_005fb3a0(local_8);
        (**(code **)(*piVar4 + 0x74))();
      }
      else {
        piVar4 = (int *)FUN_005fb3a0(local_8);
        (**(code **)(*piVar4 + 0x70))();
      }
    }
  }
  FUN_005e9250();
  return;
}

