// FUN_0065d3f0  0065d3f0

void FUN_0065d3f0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_0065c660(param_1);
  iVar1 = FUN_00615260();
  if (iVar1 == -1) {
    piVar2 = (int *)FUN_005fb300(0);
    (**(code **)(*piVar2 + 0xd0))();
  }
  if (param_1 == 0) {
    uVar3 = FUN_0065d130();
    FUN_0065a5f0(uVar3);
  }
  else if (param_1 == 1) {
    FUN_0065a5f0(0);
  }
  return;
}

