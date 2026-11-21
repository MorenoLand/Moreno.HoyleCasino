// FUN_006846b0  006846b0

int FUN_006846b0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = _errno();
  *piVar1 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00686580(param_1 + 6,0x2134);
  iVar3 = (*(code *)param_1[0xb0])(uVar2,1,0x2134,*param_1);
  if (0 < iVar3) {
    FUN_00686600(param_1 + 6,iVar3);
  }
  if (iVar3 == 0) {
    piVar1 = _errno();
    if (*piVar1 != 0) {
      return -1;
    }
  }
  return iVar3;
}

