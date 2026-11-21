// FUN_00585310  00585310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00585310(int *param_1)

{
  double _X;
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double local_14;
  int local_8;
  
  local_14 = 0.0;
  if (param_1[0x1a] == 0) {
    local_8 = (**(code **)(*(int *)param_1[0x19] + 0x54))();
  }
  else {
    local_8 = (**(code **)(*(int *)param_1[0x19] + 0x4c))();
  }
  iVar1 = FUN_00584240();
  iVar2 = FUN_00585470();
  if (iVar2 != 0) {
    iVar2 = param_1[0x1c];
    iVar3 = FUN_00585470();
    _X = (double)(local_8 - iVar1) / ((double)iVar2 / (double)iVar3);
    dVar4 = fmod(_X,1.0);
    if (_DAT_006b2c38 <= dVar4) {
      local_14 = ceil(_X);
    }
    else {
      local_14 = floor(_X);
    }
  }
  if (!NAN(local_14) && 0.0 < local_14 != (local_14 == 0.0)) {
    iVar1 = (**(code **)(*param_1 + 0xb0))();
    if (iVar1 == 0) goto LAB_00585443;
    iVar1 = (**(code **)(*param_1 + 0xb0))();
    if (local_14 < (double)iVar1) goto LAB_00585443;
  }
  FUN_005e9f20();
LAB_00585443:
  FUN_00686cc0();
  (**(code **)(*param_1 + 0xbc))();
  return;
}

