// FUN_005e2b90  005e2b90

void FUN_005e2b90(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  uVar1 = FUN_006369b0(param_1);
  FUN_005dcb00(uVar1);
  iVar2 = FUN_005d52e0();
  if (iVar2 == 0) {
    FUN_005e9f20("cSettings","..\\Casino\\casinoshell.cpp",0xa41);
  }
  if (param_3 == -1) {
    for (local_8 = 0; local_8 < 100; local_8 = local_8 + 1) {
      puVar4 = (undefined4 *)(iVar2 + 0x60 + local_8 * 0x24);
      puVar5 = param_2 + local_8 * 9;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  else {
    puVar4 = (undefined4 *)(iVar2 + 0x60 + param_3 * 0x24);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

