// FUN_0065ed10  0065ed10

void __fastcall FUN_0065ed10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_1c;
  
  FUN_005fb720(0);
  iVar1 = FUN_00615260();
  if (iVar1 != -1) {
    uVar2 = FUN_00630f40("SID_GENERIC_DELETE",4);
    uVar2 = FUN_00630f40("SID_SHELL_CONFIRMDELETEPLAYER",uVar2);
    iVar1 = FUN_0062ff10(uVar2);
    if (iVar1 == 6) {
      FUN_005fb720(0);
      FUN_00615260();
      FUN_005fb720(0);
      iVar1 = FUN_005e4390();
      if (iVar1 == 0) {
        local_1c = 0;
      }
      else {
        FUN_005e4390();
        local_1c = what();
      }
      FUN_00660030(local_1c);
      piVar3 = (int *)FUN_005fb720(0);
      iVar1 = (**(code **)(*piVar3 + 0xb8))();
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x90))();
        FUN_0065e670();
      }
      else {
        piVar3 = (int *)FUN_005fb720(0);
        (**(code **)(*piVar3 + 0xc0))(0,1);
      }
    }
  }
  return;
}

