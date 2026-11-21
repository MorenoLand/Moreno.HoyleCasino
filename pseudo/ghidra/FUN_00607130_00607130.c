// FUN_00607130  00607130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00607130(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  
  if ((char)param_1[3] != '\0') {
    iVar2 = FUN_005f3e50();
    iVar2 = abs(iVar2 - param_1[10]);
    if (*(int *)(param_1[1] + 0x184) <= iVar2) {
      iVar2 = FUN_005f3e50();
      param_1[10] = iVar2;
      if (*(int *)(param_1[1] + 0x184) == 0) {
        param_1[0xc] = (int)(1.0 - (float)param_1[0xf]);
      }
      param_1[0xc] = (int)((float)param_1[0xc] + (float)param_1[0xf]);
      fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
      fVar1 = (float)param_1[0x10];
      dVar5 = cos((double)((float)param_1[0xd] * (float)_DAT_006d7e30 * (float)param_1[0xc]));
      param_1[6] = (int)((float)dVar5 * fVar1 * (float)fVar4 + (float)param_1[4]);
      dVar5 = sin((double)((float)param_1[0xd] * (float)_DAT_006d7e30 * (float)param_1[0xc]));
      param_1[7] = (int)((float)dVar5 * (float)fVar4 + (float)param_1[5]);
      iVar2 = FUN_00686cc0();
      iVar3 = FUN_00686cc0();
      (**(code **)(*(int *)param_1[1] + 0x44))(iVar2,iVar3);
      iVar2 = abs(iVar2 - param_1[4]);
      if ((iVar2 < 5) && (iVar2 = abs(iVar3 - param_1[5]), iVar2 < 5)) {
        (**(code **)(*param_1 + 0x10))();
      }
    }
  }
  return;
}

