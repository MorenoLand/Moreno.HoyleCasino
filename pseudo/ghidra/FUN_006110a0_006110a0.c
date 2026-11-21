// FUN_006110a0  006110a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006110a0(int *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  float10 fVar3;
  double dVar4;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_10;
  
  if (DAT_015e55f4 == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = (DAT_015e55f8 - DAT_015e55f4) / 0x48;
  }
  if (local_f0 == 0) {
    local_f8 = 0;
  }
  else {
    if (DAT_015e55f4 == 0) {
      local_f4 = 0;
    }
    else {
      local_f4 = (DAT_015e55f8 - DAT_015e55f4) / 0x48;
    }
    if (local_f4 == 0) {
      _invalid_parameter_noinfo();
    }
    local_f8 = DAT_015e55f4;
  }
  if ((*param_1 != 0) || (param_1[1] != 0)) {
    local_10 = 0;
    while ((local_10 < local_f0 && (cVar1 = FUN_00610810(), cVar1 == '\0'))) {
      local_10 = local_10 + 1;
    }
    if (local_10 < local_f0) {
      local_f8 = local_10 * 0x48 + local_f8;
      if (*(int *)(local_f8 + 0x30) < 0) {
        FUN_006127f0();
      }
      else if (((param_2 != '\0') || (*(int *)(local_f8 + 0x14) < 1)) ||
              (fVar3 = (float10)FUN_006085e0(), fVar3 < (float10)_DAT_006bc270)) {
        FUN_00609720(*(undefined4 *)(local_f8 + 0x30),1);
        FUN_006127f0();
      }
      else if (((float)_DAT_006b2c50 <= *(float *)(local_f8 + 0x38)) ||
              (*(int *)(local_f8 + 0x34) == 0)) {
        uVar2 = FUN_005f3e50();
        *(undefined4 *)(local_f8 + 0x34) = uVar2;
        fVar3 = (float10)FUN_006085e0();
        *(float *)(local_f8 + 0x3c) = (float)fVar3;
        *(float *)(local_f8 + 0x38) =
             -*(float *)(local_f8 + 0x3c) / (float)*(int *)(local_f8 + 0x14);
        dVar4 = fabs((double)*(float *)(local_f8 + 0x38));
        if ((float)dVar4 < (float)_DAT_006bc270) {
          FUN_005e9f20("fabs(it->mFadeRate) >= 0.01","..\\scilib\\sciSetup.cpp",0x199);
        }
        *(undefined4 *)(local_f8 + 0x40) = 0;
        *(undefined4 *)(local_f8 + 0x44) = 1;
      }
    }
  }
  return;
}

