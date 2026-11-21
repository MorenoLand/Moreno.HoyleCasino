// FUN_006064e0  006064e0

void FUN_006064e0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  if (-1 < param_1) {
    iVar2 = FUN_006063e0();
    if (param_1 < iVar2) goto LAB_00606513;
  }
  FUN_005e9f20("index > -1 && index < Size()","..\\scilib\\sciradiobutton.cpp",0x82);
LAB_00606513:
  iVar2 = FUN_00606350(param_1);
  if (iVar2 != 0) {
    FUN_00606350(param_1);
    cVar1 = FUN_006026d0();
    if (cVar1 != '\0') {
      FUN_006067e0();
      piVar3 = (int *)FUN_00606350(param_1);
      (**(code **)(*piVar3 + 0xf4))();
    }
  }
  return;
}

