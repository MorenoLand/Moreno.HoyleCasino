// FUN_005d4640  005d4640

void __thiscall FUN_005d4640(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_8;
  
  FUN_00602020(param_2);
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 == '\0') {
    for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
      piVar3 = (int *)FUN_005fb300(local_8);
      cVar1 = (**(code **)(*piVar3 + 0x84))(param_2);
      if (cVar1 != '\0') {
        return;
      }
    }
    FUN_005d22d0();
  }
  else {
    uVar2 = FUN_005f5400();
    FUN_005d2180(uVar2);
    *(undefined1 *)(param_2 + 4) = 1;
  }
  return;
}

