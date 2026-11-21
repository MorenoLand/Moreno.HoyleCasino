// FUN_00467e30  00467e30

void FUN_00467e30(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 4) == '\0') && (cVar1 = FUN_005f88f0(), cVar1 == '\0')) {
    if ((*(int *)(param_1 + 0x18) == 4) &&
       (uVar3 = extraout_var, iVar2 = tolower((int)*(char *)(param_1 + 0x14)), iVar2 == 0x74)) {
      FUN_005db240(0x74,uVar3);
    }
    FUN_005f72f0(param_1);
  }
  return;
}

