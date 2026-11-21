// FUN_0051fc80  0051fc80

void FUN_0051fc80(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_005204a0(param_1);
  if (iVar2 == -1) {
    piVar3 = (int *)FUN_005fb2b0(0xe);
    (**(code **)(*piVar3 + 0xb0))(5);
    piVar3 = (int *)FUN_005fb2b0(0xe);
    (**(code **)(*piVar3 + 0x74))();
  }
  else {
    piVar3 = (int *)FUN_005fb2b0(0xe);
    (**(code **)(*piVar3 + 0xb0))(iVar2);
    piVar3 = (int *)FUN_005fb2b0(0xe);
    (**(code **)(*piVar3 + 0x74))();
  }
  cVar1 = FUN_0051f610(param_1);
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_005fb2b0(0xf);
    (**(code **)(*piVar3 + 0x74))();
  }
  else {
    piVar3 = (int *)FUN_005fb2b0(0xf);
    (**(code **)(*piVar3 + 0x70))();
  }
  return;
}

