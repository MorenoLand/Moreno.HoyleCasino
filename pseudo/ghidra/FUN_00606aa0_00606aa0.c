// FUN_00606aa0  00606aa0

void __fastcall FUN_00606aa0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[3] != '\0') {
    iVar1 = FUN_005f3e50();
    iVar1 = abs(iVar1 - param_1[10]);
    if (*(int *)(param_1[1] + 0x184) <= iVar1) {
      iVar1 = FUN_005f3e50();
      param_1[10] = iVar1;
      if ((char)param_1[3] != '\0') {
        param_1[6] = (int)((float)param_1[6] + (float)param_1[8]);
        param_1[7] = (int)((float)param_1[7] + (float)param_1[9]);
        iVar1 = FUN_00686cc0();
        iVar2 = FUN_00686cc0();
        (**(code **)(*(int *)param_1[1] + 0x44))(iVar1,iVar2);
        iVar1 = abs(iVar1 - param_1[4]);
        if ((iVar1 < *(int *)(param_1[1] + 0x188)) &&
           (iVar1 = abs(iVar2 - param_1[5]), iVar1 < *(int *)(param_1[1] + 0x188))) {
          (**(code **)(*param_1 + 0x10))();
        }
      }
    }
  }
  return;
}

