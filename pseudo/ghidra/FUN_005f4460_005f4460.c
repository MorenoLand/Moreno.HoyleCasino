// FUN_005f4460  005f4460

void FUN_005f4460(int param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  if ((param_1 != -1) && (cVar1 = FUN_00609650(param_1), cVar1 == '\0')) {
    uVar3 = extraout_var;
    piVar2 = (int *)FUN_006088e0(param_1);
    FUN_00609720(param_1,1);
    if ((piVar2 != (int *)0x0) && (param_2 != '\0')) {
      (**(code **)(*piVar2 + 0x1c))(0,uVar3);
    }
  }
  return;
}

